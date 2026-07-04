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
    output logic write_back_source,
    output logic pc_source
);

//main decoder
logic [1:0] alu_op;
logic branch;
always_comb begin
    // prevent latch problem
    reg_write         = 1'b0;
    imm_source        = 2'b00;
    mem_write         = 1'b0;
    alu_op            = 2'b00;
    alu_source        = 1'b0;
    write_back_source = 1'b0;
    branch            = 1'b0;
    // lw command and sw command 
    case(op)
        7'b0000011: begin
            reg_write = 1'b1;
            imm_source = 2'b00;
            mem_write = 1'b0;
            alu_op = 2'b00;
            alu_source = 1'b1;
            write_back_source = 1'b1;
            branch = 1'b0; 
        
        end
        7'b0100011 : begin
            reg_write = 1'b0;
            imm_source = 2'b01;
            mem_write = 1'b1;
            alu_op = 2'b00;
            alu_source = 1'b1;
            branch = 1'b0; 
        end
        // R-type command verification
        7'b0110011 : begin
            reg_write = 1'b1;
            mem_write = 1'b0;
            alu_op = 2'b10;
            alu_source = 1'b0;
            write_back_source = 1'b0;
            branch = 1'b0; 

        end
        // B-type instruction
        7'b1100011 : begin
            reg_write = 1'b0;
            imm_source = 2'b10;
            alu_source = 1'b0;
            mem_write = 1'b0;
            alu_op = 2'b01;
            branch = 1'b1;

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
                3'b111 : alu_control = 3'b010;
                3'b110 : alu_control = 3'b011;
                default : alu_control = 3'b111;
            endcase
        end
        // B-type decoder
        2'b01 : alu_control = 3'b001;
        default : alu_control = 3'b111;
    endcase

assign pc_source = branch & alu_zero;

end
endmodule