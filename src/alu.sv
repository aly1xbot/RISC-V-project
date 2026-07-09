module alu (
    input logic [3:0] alu_control,
    input logic [31:0] src1,
    input logic [31:0] src2,

    output logic [31:0] alu_result,
    output logic zero


);

always_comb begin
    case (alu_control)
        4'b0000 : alu_result =src1 + src2;
        4'b0010 : alu_result = src1 & src2; // andi
        4'b0011 : alu_result = src1 | src2; // ori
        4'b0001 : alu_result = src1 + (~src2 + 1'b1); // new subtraction command 
        4'b0101 : alu_result = {31'b0, $signed(src1) < $signed(src2)}; //slt test
        4'b0111 : alu_result = {31'b0, src1 < src2}; //sltiu updating
        4'b1000 : alu_result = src1 ^ src2;
        default : alu_result = 32'b0;

    endcase
end

assign zero = alu_result == 32'b0;


endmodule