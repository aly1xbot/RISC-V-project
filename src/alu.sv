module alu (
    input logic [3:0] alu_control,
    input logic [31:0] src1,
    input logic [31:0] src2,
    input logic [4:0] shamt,

    output logic [31:0] alu_result,
    output logic zero,
    output logic last_bit


);



always_comb begin
    case (alu_control)
        4'b0000 : alu_result = src1 + src2;
        4'b0010 : alu_result = src1 & src2; // andi
        4'b0011 : alu_result = src1 | src2; // ori
        4'b0001 : alu_result = src1 + (~src2 + 1'b1); // new subtraction command 
        4'b0101: begin
            if ($signed(src1) < $signed(src2))
                alu_result = 32'd1;
            else
                alu_result = 32'd0;
        end //slt test
        4'b0111 : alu_result = {31'b0, src1 < src2}; //sltiu updating
        4'b1000 : alu_result = src1 ^ src2; //xori update
        4'b0100 : alu_result = src1 << shamt[4:0]; // slli update
        4'b0110 : alu_result = src1 >> shamt[4:0]; // srli update
        4'b1001 : begin
            alu_result = src1 >> shamt;   
            if (src1[31])
                alu_result = alu_result | (32'hFFFFFFFF << (32 - shamt));


        end



        default : alu_result = 32'b0;

    endcase
end

assign zero = alu_result == 32'b0;
assign last_bit = alu_result[0];


endmodule
