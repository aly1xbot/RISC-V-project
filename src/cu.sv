module control(
    input logic [6:0] op,
    input logic [2:0] func3,
    input logic [6:0] func7,
    input logic alu_zero,

    output logic [2:0] alu_control,
    output logic [1:0] imm_src,
    output logic regwrite,
    output logic memwrite
    
);

//main decoder
logic [1:0] alu_op;
always_comb begin
    // lw command
    case(op)
        7'b0000011: begin
            regwrite = 1'b1;
            imm_source = 2'b00;
            memwrite = 1'b0;
            alu_op = 2'b00;
        
        end

        default: begin
            regwrite = 1'b0;
            imm_source = 2'b00;
            memwrite = 1'b0;
            alu_op = 2'b00;
        end
    endcase
end

always_comb begin 
    case(alu_op)
        //lw, sw
        2'b00 : alu_control = 3'b000;
        default : alu_control = 3'b111;
    endcase

end




endmodule