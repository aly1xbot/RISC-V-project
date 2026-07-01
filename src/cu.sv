module control(
    input logic [6:0] op,
    input logic [2:0] func3,
    input logic [6:0] func7,
    input logic alu_zero,

    output logic [2:0] alu_control,
    output logic [1:0] imm_source,
    output logic reg_write,
    output logic mem_write,
    output logic alu_source,
    output logic write_back_source
    
);

//main decoder
logic [1:0] alu_op;
always_comb begin
    // lw command and sw command 
    case(op)
        7'b0000011: begin
            reg_write = 1'b1;
            imm_source = 2'b00;
            mem_write = 1'b0;
            alu_op = 2'b00;
            alu_source = 1'b1;
            write_back_source = 1'b1;
        
        end
        7'b0100011 : begin
            reg_write = 1'b0;
            imm_source = 2'b01;
            mem_write = 1'b1;
            alu_op = 2'b00;
            alu_source = 1'b1;
        end
        // R-type command verification
        7'b0110011 : begin
            reg_write = 1'b1;
            mem_write = 1'b0;
            alu_op = 2'b10;
            alu_source = 1'b0;
            write_back_source = 1'b0;

        end

        default: begin
            reg_write = 1'b0;
            imm_source = 2'b00;
            mem_write = 1'b0;
            alu_op = 2'b00;
        end   
    endcase
end

always_comb begin 
    case(alu_op)
        //lw, sw
        2'b00 : alu_control = 3'b000;
        2'b10 : begin
            case (func3)
                // ADD
                3'b000 : alu_control = 3'b000;
                default : alu_control = 3'b111;
            endcase
        end
        default : alu_control = 3'b111;
    endcase

end


endmodule