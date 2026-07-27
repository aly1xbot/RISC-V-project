import instruction_set_pkg ::*;

module cache #(
    parameter CACHE_SIZE = 128
)(
    // cpu logic, interface and clock
    input logic clk,
    input logic rst_n,
    input logic aclk,
    
    input logic [31:0] address,
    input logic [31:0] write_data,
    input logic read_enable,
    input logic write_enable,
    input logic [3:0] byte_enable,
    output logic [31:0] read_data,
    output logic cache_stall,

    axi_if.master axi
);
    // | DIRTY | VALID | BLOCK TAG | INDEX/SET | OFFSET | DATA |
    // | FLAGS         | ADDRESS INFOS                  | DATA |
    // cache data struction formation
    logic [CACHE_SIZE-1:0][31:0] cache_data;
    logic [31:9] cache_block_tag;
    logic cache_valid;
    logic next_cache_valid;
    logic cache_dirty;
    logic next_cache_dirty;


    logic [31:9] req_block_tag;
    assign req_block_tag = address[31:9];
    logic [8:2] req_index;
    assign req_index = address[8:2];

    wire [31:0] byte_enable_mask;
    assign byte_enable_mask = {
        {8{byte_enable[3]}},
        {8{byte_enable[2]}},
        {8{byte_enable[1]}},
        {8{byte_enable[0]}}
    };

    logic hit;
    assign hit = (req_block_tag == cache_block_tag) && cache_valid;
    cache_state_t state, next_state;

    //clock drive seq logic cycle
    always_ff @(posedge clk) begin
        if (~rst_n) begin
            cache_valid <= 1'b0;
            cache_dirty <= 1'b0;
            seq_stall <= 1'b0;
        end else begin
            cache_valid <= next_cache_valid;
            cache_dirty <= next_cache_dirty;
            if (hit & write_enable & state == IDLE) begin
                cache_data[req_index] <=
                    (cache_data[req_index] & ~byte_enable_mask) |
                    (write_data & byte_enable_mask);
                cache_dirty <= 1'b1;
            end
            else if (axi.rvalid & state == RECEIVING_READ_DATA& axi.ready) begin
                cache_data[set_ptr] <=axi.rdata;
                if(axi.rready & axi.rlast) begin
                    cache_block_tag <= req_block_tag;
                    cache_dirty <= 1'b0;
                end
            end
        end
    end
    // Async Read logic & AXI SIGNALS declaration !
    always_comb begin
        next_state = state;
        next_cache_valid = cache_valid;
        next_cache_dirty = cache_dirty;
        axi.wlast = 1'b0;

        axi.wdata = cache_data[set_ptr];
        cache_state = state;
        next_set_ptr = set_ptr;

        case (state)
            IDLE: begin
                if (read_enable && write_enable) begin
                    $display("E : CAN't READ?WRITE AT THE SAME TIME");
                end

                else if (hit && read_enable) begin
                    read_data = cache_data[req_index];
                end

                else if (hit && actual_wrtie_enable) begin
                    next_cache_dirty = 1'b1;
                end

            end
        endcase
    end
endmodule