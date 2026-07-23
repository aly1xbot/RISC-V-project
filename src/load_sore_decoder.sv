module load_store_decoder(
    input logic [31:0] alu_result_address,
    input logic [31:0] reg_read,
    input logic [2:0] f3,
    output logic [3:0] byte_enable,
    output logic [31:0] data

);
assign byte_enable = 4'b1111;


endmodule