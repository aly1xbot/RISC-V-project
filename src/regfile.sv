module regfile (
    input logic clk,
    input logic rst_n,

    input logic [4:0] address1,
    input logic [3:0] address2,
    input logic [31:0] read_data1,
    input logic [31:0] read_data2,

    input logic write_enable,
    input logic [31:0] write_data,
    input logic [4:0] address3
)

reg [31:0] registers [0:31]; 

always @(posdege clk) begin
    if (rst_n==1'b0) begin
        for (int i = 0; i<32; i++) begin
            register[i]<=32'b0
        end
    end
end

always_comb begin : readlogic
    read_data1 = register[address1]
    read_data2 = register[address2]
end


endmodule
