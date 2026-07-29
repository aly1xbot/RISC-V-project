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

    logic [6:0] set_ptr;
    logic [6:0] next_set_ptr;

    //testing signal
    logic actual_write_enable;
    assign actual_write_enable = write_enable &|byte_enable;

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
            state <=IDLE;
            set_ptr <= 7'd0;
            cache_valid <= 0;
            cache_dirty <= 0;
        end else begin
            state <= next_state;
            set_ptr <= next_set_ptr;
            cache_valid <= next_cache_valid;
            cache_dirty <= next_cache_dirty;
        end
    end
    // Async Read logic & AXI SIGNALS declaration !
    always_comb begin
        next_state = state;
        next_cache_valid = cache_valid;
        next_cache_dirty = cache_dirty;
        axi.wlast = 1'b0;

        axi.wdata = cache_data[set_ptr];
        next_set_ptr = set_ptr;

        case (state)
            IDLE: begin
                if (read_enable && write_enable) begin
                    $display("E : CAN't READ WRITE AT THE SAME TIME");
                end

                else if (hit && read_enable) begin
                    read_data = cache_data[req_index];
                end

                else if (hit && actual_write_enable) begin
                    case(cache_dirty)
                        1'b1 : next_state = SENDING_WRITE_REQ;
                        1'b0 : next_state = SENDING_READ_REQ;
                    endcase
                end
                axi.awvalid = 1'b0;
                axi.wvalid = 1'b1;
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
                axi.araddr = {req_block_tag, 7'b0000000,2'b00};
                if(axi.arready) begin
                    next_state = RECEIVING_READ_DATA;
                end

                //no write
                axi.awvalid = 1'b0;
                axi.wvalid = 1'b0;
                axi.bready = 1'b0;

                // no read but address is okay 
                axi.arvalid = 1'b1;
                axi.rready = 1'b0;

            end

            RECEIVING_READ_DATA: begin
                if(axi.rvalid ) begin
                    next_set_ptr = set_ptr +1;
                    if(axi.rlast) begin
                        next_state = IDLE;
                        next_cache_valid = 1'b1;
                    end
                end
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
    assign axi.awlen = CACHE_SIZE - 1;
    assign axi.awsize = 3'b010;
    assign axi.awburst = 2'b01;
    assign axi.arlen = CACHE_SIZE - 1;
    assign axi.arburst = 2'b01;
    assign axi.awid = 4'b0000;
    assign axi.arid = 4'b0000;


    //write data
    assign axi.wstrb = 4'b1111;





endmodule