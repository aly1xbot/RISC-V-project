import instruction_set_pkg ::*;

module cache #(
    parameter CACHE_SIZE = 128 // FIXED !
)(
    // CPU LOGIC CLOCK & RESET
    input logic clk,
    input logic rst_n,
    input logic aclk, // Axi clock, will be the same as clk in the end..

    // CPU Interface
    input logic [31:0] address,
    input logic [31:0] write_data,
    input logic read_enable,
    input logic write_enable,
    input logic [3:0]byte_enable,
    output logic [31:0] read_data,
    output logic cache_stall,
    output cache_state_t cache_state,
    //debug signal
    output logic [6:0] set_ptr_out,
    output logic [6:0] next_set_ptr_out,

    // AXI Interface for external requests
    axi_if.master axi
);
    assign set_ptr_out = set_ptr;
    assign next_set_ptr_out = next_set_ptr;

    // STALL LOGIC
    logic actual_write_enable;
    assign actual_write_enable = write_enable & |byte_enable;
    logic comb_stall, seq_stall;
    assign comb_stall = (next_state != IDLE) | (~hit & (read_enable | actual_write_enable));
    assign cache_stall = comb_stall | seq_stall;


    // Here is how a cache line is organized:
    // | DIRTY | VALID | BLOCK TAG | INDEX/SET | OFFSET | DATA |
    // | FLAGS         | ADDRESS INFOS                  | DATA |

    // CACHE TABLE DECLARATION (hardcoded for now)
    logic [CACHE_SIZE-1:0][31:0]    cache_data;   // CHANGED FOR A PACKED ARRAY FOR FPGA IMPL
    logic [31:9]                    cache_block_tag;
    logic                           cache_valid;  // is the current block valid ?
    logic                           next_cache_valid;
    logic                           cache_dirty;
    logic                           next_cache_dirty;

    
    // STALL LOGIC
    // INCOMING CACHE REQUEST SIGNALS
    logic [31:9]                    req_block_tag;
    assign req_block_tag = address[31:9];
    // requested place in cache, written / read if tag hits
    logic [8:2] req_index;
    assign req_index = address[8:2];

    logic [6:0] set_ptr;
    logic [6:0] next_set_ptr;
    wire [31:0] byte_enable_mask;
    assign byte_enable_mask = {
        {8{byte_enable[3]}},
        {8{byte_enable[2]}},
        {8{byte_enable[1]}},
        {8{byte_enable[0]}}
    };

    // HIT LOGIC
    logic hit;
    assign hit = (req_block_tag == cache_block_tag) && cache_valid;

    // =======================
    // CACHE LOGIC
    // =======================
    cache_state_t state, next_state;
    //main clock driven seq logic 
    always_ff @(posedge clk) begin
        if (~rst_n) begin
            cache_valid <= 1'b0;
            cache_dirty <= 1'b0;
            seq_stall <= 1'b0;
        end else begin
            cache_valid <= next_cache_valid;
            cache_dirty <= next_cache_dirty;
            seq_stall <= comb_stall;

            if(hit & write_enable & state == IDLE) begin
                cache_data[req_index] <=
                    (cache_data[req_index] & ~byte_enable_mask) |
                    (write_data & byte_enable_mask);
                cache_dirty <= 1'b1;
            end
            // More on this else if just below
            else if(axi.rvalid & state == RECEIVING_READ_DATA & axi.rready) begin
                // Write incomming axi read
                cache_data[set_ptr] <= axi.rdata;
                if(axi.rready & axi.rlast) begin
                    cache_block_tag <= req_block_tag;
                    cache_dirty <= 1'b0;
                end
            end
        end
    end
    //clock drive seq logic cycle
    always_ff @(posedge clk) begin
        if (~rst_n) begin
            state <=IDLE;
            set_ptr <= 7'd0;
        end else begin
            state <= next_state;
            set_ptr <= next_set_ptr;
        end
    end
    // Async Read logic & AXI SIGNALS declaration !
    always_comb begin
        next_state = state;
        next_cache_valid = cache_valid;
        axi.wlast = 1'b0;

        axi.wdata = cache_data[set_ptr];
        next_set_ptr = set_ptr;
        cache_state = state;

        case (state)
            IDLE: begin
                if (read_enable && write_enable) begin
                    $display("E : CAN't READ WRITE AT THE SAME TIME");
                end

                else if (hit && read_enable) begin
                    read_data = cache_data[req_index];
                end

                else if(~hit && (read_enable ^ actual_write_enable)) begin
                // switch state to handle the MISS, if data is dirty, we have to write first
                case(cache_dirty)
                    1'b1 : next_state = SENDING_WRITE_REQ;
                    1'b0 : next_state = SENDING_READ_REQ;
                endcase
                end
                axi.awvalid = 1'b0;
                axi.wvalid = 1'b0;
                axi.bready = 1'b0;
                axi.arvalid = 1'b0;
                axi.rready = 1'b0;
                next_set_ptr = 7'd0;
            end

            SENDING_WRITE_REQ: begin
                axi.awaddr = {cache_block_tag,7'b0000000,2'b00};
                if (axi.awready) next_state = SENDING_WRITE_DATA;

                //making the sending request.
                axi.awvalid = 1'b1;
                axi.wvalid = 1'b0;
                axi.bready = 1'b0;
                axi.arvalid = 1'b0;
                axi.rready = 1'b0;
            end

            SENDING_WRITE_DATA: begin
                if (axi.wready) begin
                    next_set_ptr = set_ptr + 1;
                end
                if (set_ptr == 7'd127) begin
                    axi.wlast = 1'b1;
                    if (axi.wready) begin
                        next_state = WAITING_WRITE_RES;
                    end
                end
                //sending data and write stuff
                axi.awvalid = 1'b0;
                axi.wvalid = 1'b1;
                axi.bready = 1'b0;
                // no read
                axi.arvalid = 1'b0;
                axi.rready = 1'b0;
            end

            WAITING_WRITE_RES: begin
                if (axi.bvalid && (axi.bresp == 2'b00)) begin
                    next_state = SENDING_READ_REQ;
                end else if (axi.bvalid && (axi.bresp != 2'b00)) begin
                    $display("ERROR WRITING TO MAIN MEMORY");
                end

                //no write
                axi.awvalid = 1'b0;
                axi.wvalid = 1'b0;
                axi.bready = 1'b1;

                //no read
                axi.arvalid = 1'b0;
                axi.rready = 1'b0;
            end

            SENDING_READ_REQ: begin
                // handle miss: read
                axi.araddr = {req_block_tag, 7'b0000000, 2'b00}; // tag, set, offset

                if(axi.arready) begin
                    next_state = RECEIVING_READ_DATA;
                end

                // SENDING_READ_REQ AXI SIGNALS : address request
                // No write
                axi.awvalid = 1'b0;
                axi.wvalid = 1'b0;
                axi.bready = 1'b0;
                // No read but address is okay
                axi.arvalid = 1'b1;
                axi.rready = 1'b0;

            end

            RECEIVING_READ_DATA: begin
                if (axi.rvalid) begin
                // Increment pointer on valid data
                    next_set_ptr = set_ptr + 1;

                    if (axi.rlast) begin
                        // Transition to IDLE on the last beat
                        next_state = IDLE;
                        next_cache_valid = 1'b1;
                    end
                end

                // AXI Signals
                axi.awvalid = 1'b0;
                axi.wvalid = 1'b0;
                axi.bready = 1'b0;
                axi.arvalid = 1'b0;
                axi.rready = 1'b1;
            end

            default: begin
                $display("CACHE FSM STATE ERROR");
            end
        endcase
    end


    //Invariant AXI Signals
    //WRITE Burst sieze are fixed type & len
    assign axi.awlen = CACHE_SIZE-1; // full cache reloaded each time
    assign axi.awsize = 3'b010; // 2^<awsize> = 2^2 = 4 Bytes
    assign axi.awburst = 2'b01; // INCREMENT
    // READ Burst sizes are fixed type & len
    assign axi.arlen = CACHE_SIZE-1; // full cache reloaded each time
    assign axi.arsize = 3'b010; // 2^<arsize> = 2^2 = 4 Bytes
    assign axi.arburst = 2'b01; // INCREMENT
    // W/R ids are always 0 (todo maybe not)
    assign axi.awid = 4'b0000;
    assign axi.arid = 4'b0000;


    //write data
    assign axi.wstrb = 4'b1111;





endmodule