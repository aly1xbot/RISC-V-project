// memory.sv

module memory #(
    parameter WORDS = 128,
    parameter mem_init = ""
) (
    input logic clk,
    input logic [31:0] address,
    input logic [31:0] write_data,
    input logic [3:0] byte_enable,
    input logic write_enable,
    input logic rst_n,

    output logic [31:0] read_data
);

/*
* This memory is byte addressed
* But have no support for mis-aligned write nor reads.
*/

reg [31:0] mem [0:WORDS-1];  // Memory array of words (32-bits)
localparam ADDR_BITS = $clog2(WORDS);
wire [ADDR_BITS-1:0] word_addr;
assign word_addr = address[ADDR_BITS+1:2];



initial begin
    if (mem_init != "") begin
        $readmemh(mem_init, mem);
    end
end

always @(posedge clk) begin
    // reset logic
    if (rst_n == 1'b0) begin
        for (int i = 0; i < WORDS; i++) begin
            mem[i] <= 32'b0;
        end
    end else if (write_enable) begin
        if (address[1:0] != 2'b00) begin
            $display("Missaligned write at adress %h", address);
        end else begin
            for (int i = 0; i < 4; i++) begin
                if(byte_enable[i]) begin
                    mem[word_addr][(i*8)+:8] <= write_data[(i*8)+:8];
                end
            end
        end
    end
end

always_comb begin
    read_data = mem[word_addr];
end

endmodule
