import instruction_set_pkg::*;

module cache #(
    parameter integer CACHE_SIZE = 128,
    parameter integer LINE_WORDS = 4
)(
    input logic clk, input logic rst_n, input logic aclk,
    input logic [31:0] address, input logic [31:0] write_data,
    input logic read_enable, input logic write_enable,
    input logic flush, input logic invalidate, input logic clear_error,
    input logic [3:0] byte_enable,
    output logic [31:0] read_data, output logic cache_stall,
    output logic flush_done, output logic invalidate_done,
    output logic access_error, output cache_state_t cache_state,
    output logic [6:0] set_ptr_out, output logic [6:0] next_set_ptr_out,
    axi_if.master axi
);
    localparam integer LINE_COUNT = CACHE_SIZE / LINE_WORDS;
    localparam integer OFFSET_BITS = $clog2(LINE_WORDS);
    localparam integer INDEX_BITS = $clog2(LINE_COUNT);
    localparam integer TAG_BITS = 32 - 2 - OFFSET_BITS - INDEX_BITS;

    typedef logic [INDEX_BITS-1:0] line_index_t;
    typedef logic [OFFSET_BITS-1:0] word_offset_t;
    typedef logic [TAG_BITS-1:0] tag_t;
    localparam line_index_t LAST_LINE = line_index_t'(LINE_COUNT-1);
    localparam word_offset_t LAST_WORD = word_offset_t'(LINE_WORDS-1);
    localparam logic [7:0] AXI_LINE_LENGTH = 8'(LINE_WORDS-1);

    logic [CACHE_SIZE-1:0][31:0] cache_data;
    tag_t cache_tags [0:LINE_COUNT-1];
    logic cache_valids [0:LINE_COUNT-1];
    logic cache_dirtys [0:LINE_COUNT-1];

    line_index_t req_line_index, pending_line_index, evict_line_index;
    line_index_t flush_scan_index;
    word_offset_t req_word_offset, beat_ptr, next_beat_ptr;
    tag_t req_tag, pending_tag;
    logic [INDEX_BITS+OFFSET_BITS-1:0] req_data_index;
    logic hit, actual_write_enable, any_dirty, any_valid, miss_pending;
    logic fill_error;
    cache_state_t state, next_state;

    // Compatibility probes for existing waveform and cocotb consumers.
    wire cache_valid = cache_valids[req_line_index];
    wire cache_dirty = cache_dirtys[req_line_index];
    wire [TAG_BITS-1:0] cache_block_tag = cache_tags[req_line_index];

    assign req_word_offset = address[2 +: OFFSET_BITS];
    assign req_line_index = address[2+OFFSET_BITS +: INDEX_BITS];
    assign req_tag = address[31 -: TAG_BITS];
    assign req_data_index = {req_line_index, req_word_offset};
    assign actual_write_enable = write_enable && |byte_enable;
    assign hit = cache_valids[req_line_index] &&
                 (cache_tags[req_line_index] == req_tag);

    always_comb begin
        any_dirty = 1'b0;
        any_valid = 1'b0;
        for (int line = 0; line < LINE_COUNT; line++) begin
            any_dirty |= cache_valids[line] && cache_dirtys[line];
            any_valid |= cache_valids[line];
        end
    end

    assign cache_stall = (state != IDLE) || invalidate ||
                         (flush && any_dirty) ||
                         ((read_enable || actual_write_enable) && !hit);
    assign flush_done = (state == IDLE) && !any_dirty;
    assign invalidate_done = (state == IDLE) && !any_valid;
    assign cache_state = state;
    assign set_ptr_out = {{(7-OFFSET_BITS){1'b0}}, beat_ptr};
    assign next_set_ptr_out = {{(7-OFFSET_BITS){1'b0}}, next_beat_ptr};

    wire [31:0] byte_enable_mask = {
        {8{byte_enable[3]}}, {8{byte_enable[2]}},
        {8{byte_enable[1]}}, {8{byte_enable[0]}}
    };

    always_ff @(posedge clk) begin
        if (!rst_n) begin
            state <= IDLE;
            beat_ptr <= '0;
            pending_line_index <= '0;
            pending_tag <= '0;
            evict_line_index <= '0;
            flush_scan_index <= '0;
            miss_pending <= 1'b0;
            fill_error <= 1'b0;
            access_error <= 1'b0;
            for (int line = 0; line < LINE_COUNT; line++) begin
                cache_tags[line] <= '0;
                cache_valids[line] <= 1'b0;
                cache_dirtys[line] <= 1'b0;
            end
            for (int word_index = 0; word_index < CACHE_SIZE; word_index++)
                cache_data[word_index] <= '0;
        end else begin
            state <= next_state;
            beat_ptr <= next_beat_ptr;

            if (clear_error)
                access_error <= 1'b0;
            else if ((state == WAITING_WRITE_RES && axi.bvalid && axi.bresp != 2'b00) ||
                     (state == RECEIVING_READ_DATA && axi.rvalid && axi.rresp != 2'b00))
                access_error <= 1'b1;

            if (state == IDLE && invalidate) begin
                for (int line = 0; line < LINE_COUNT; line++) begin
                    cache_valids[line] <= 1'b0;
                    cache_dirtys[line] <= 1'b0;
                end
            end else if (state == IDLE && hit && actual_write_enable) begin
                cache_data[req_data_index] <=
                    (cache_data[req_data_index] & ~byte_enable_mask) |
                    (write_data & byte_enable_mask);
                cache_dirtys[req_line_index] <= 1'b1;
            end

            if (state == IDLE && flush && any_dirty)
                flush_scan_index <= '0;
            else if (state == FLUSH_SCAN &&
                     !(cache_valids[flush_scan_index] && cache_dirtys[flush_scan_index]) &&
                     flush_scan_index != LAST_LINE)
                flush_scan_index <= flush_scan_index + 1'b1;

            if (state == FLUSH_SCAN && cache_valids[flush_scan_index] &&
                cache_dirtys[flush_scan_index]) begin
                evict_line_index <= flush_scan_index;
                miss_pending <= 1'b0;
            end

            if (state == IDLE && !invalidate && !(flush && any_dirty) &&
                !hit && (read_enable || actual_write_enable)) begin
                pending_line_index <= req_line_index;
                pending_tag <= req_tag;
                miss_pending <= 1'b1;
                if (cache_valids[req_line_index] && cache_dirtys[req_line_index])
                    evict_line_index <= req_line_index;
            end

            if (state == SENDING_WRITE_DATA && axi.wready &&
                beat_ptr == LAST_WORD)
                beat_ptr <= '0;

            if (state == WAITING_WRITE_RES && axi.bvalid) begin
                if (axi.bresp == 2'b00) begin
                    cache_dirtys[evict_line_index] <= 1'b0;
                    if (!miss_pending && evict_line_index != LAST_LINE)
                        flush_scan_index <= evict_line_index + 1'b1;
                end else begin
                    miss_pending <= 1'b0;
                end
            end

            if (state == SENDING_READ_REQ && axi.arready)
                fill_error <= 1'b0;

            if (state == RECEIVING_READ_DATA && axi.rvalid) begin
                if (axi.rresp == 2'b00) begin
                    cache_data[{pending_line_index, beat_ptr}] <= axi.rdata;
                    if (axi.rlast) begin
                        if (!fill_error) begin
                            cache_tags[pending_line_index] <= pending_tag;
                            cache_valids[pending_line_index] <= 1'b1;
                        end else begin
                            cache_valids[pending_line_index] <= 1'b0;
                        end
                        cache_dirtys[pending_line_index] <= 1'b0;
                        miss_pending <= 1'b0;
                        beat_ptr <= '0;
                    end
                end else begin
                    cache_valids[pending_line_index] <= 1'b0;
                    fill_error <= 1'b1;
                    if (axi.rlast) begin
                        miss_pending <= 1'b0;
                        beat_ptr <= '0;
                    end
                end
            end
        end
    end

    always_comb begin
        next_state = state;
        next_beat_ptr = beat_ptr;
        read_data = hit ? cache_data[req_data_index] : 32'b0;
        axi.awid = 4'b0;
        axi.awaddr = 32'b0;
        axi.awlen = AXI_LINE_LENGTH;
        axi.awsize = 3'b010;
        axi.awburst = 2'b01;
        axi.awqos = 4'b0;
        axi.awlock = 1'b0;
        axi.awvalid = 1'b0;
        axi.wdata = cache_data[{evict_line_index, beat_ptr}];
        axi.wstrb = 4'b1111;
        axi.wlast = 1'b0;
        axi.wvalid = 1'b0;
        axi.bready = 1'b0;
        axi.arid = 4'b0;
        axi.araddr = 32'b0;
        axi.arlen = AXI_LINE_LENGTH;
        axi.arsize = 3'b010;
        axi.arburst = 2'b01;
        axi.arqos = 4'b0;
        axi.arlock = 1'b0;
        axi.arvalid = 1'b0;
        axi.rready = 1'b0;

        case (state)
            IDLE: begin
                next_beat_ptr = '0;
                if (invalidate)
                    next_state = IDLE;
                else if (flush && any_dirty)
                    next_state = FLUSH_SCAN;
                else if (!hit && (read_enable || actual_write_enable))
                    next_state = (cache_valids[req_line_index] && cache_dirtys[req_line_index]) ?
                                 SENDING_WRITE_REQ : SENDING_READ_REQ;
            end
            FLUSH_SCAN: begin
                if (cache_valids[flush_scan_index] && cache_dirtys[flush_scan_index])
                    next_state = SENDING_WRITE_REQ;
                else if (flush_scan_index == LAST_LINE)
                    next_state = IDLE;
            end
            SENDING_WRITE_REQ: begin
                axi.awaddr = {cache_tags[evict_line_index], evict_line_index,
                              {OFFSET_BITS{1'b0}}, 2'b00};
                axi.awvalid = 1'b1;
                if (axi.awready) next_state = SENDING_WRITE_DATA;
            end
            SENDING_WRITE_DATA: begin
                axi.wvalid = 1'b1;
                axi.wlast = (beat_ptr == LAST_WORD);
                if (axi.wready) begin
                    if (beat_ptr == LAST_WORD) next_state = WAITING_WRITE_RES;
                    else next_beat_ptr = beat_ptr + 1'b1;
                end
            end
            WAITING_WRITE_RES: begin
                axi.bready = 1'b1;
                if (axi.bvalid) begin
                    if (axi.bresp != 2'b00) next_state = IDLE;
                    else if (miss_pending) next_state = SENDING_READ_REQ;
                    else next_state = FLUSH_SCAN;
                end
            end
            SENDING_READ_REQ: begin
                axi.araddr = {pending_tag, pending_line_index,
                              {OFFSET_BITS{1'b0}}, 2'b00};
                axi.arvalid = 1'b1;
                if (axi.arready) next_state = RECEIVING_READ_DATA;
            end
            RECEIVING_READ_DATA: begin
                axi.rready = 1'b1;
                if (axi.rvalid) begin
                    if (axi.rlast) next_state = IDLE;
                    else next_beat_ptr = beat_ptr + 1'b1;
                end
            end
            default: next_state = IDLE;
        endcase
    end

    wire unused_aclk = aclk;
endmodule
