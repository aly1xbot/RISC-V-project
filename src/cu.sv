`timescale 1ns/1ps
module control(
    input logic [6:0] op,
    input logic [2:0] func3,
    input logic [6:0] func7,
    input logic alu_zero,

    output logic [3:0] alu_control,
    output logic [2:0] imm_source,
    output logic reg_write,
    output logic mem_write,
    output logic alu_source,
    output logic [1:0] write_back_source,
    output logic pc_source,
    output logic second_add_source
);

//main decoder
logic [1:0] alu_op;
logic branch;
logic jump;
always_comb begin
    // prevent latch problem
    reg_write = 1'b0;
    imm_source = 3'b000;
    mem_write = 1'b0;
    alu_op = 2'b00;
    alu_source = 1'b0;
    write_back_source = 2'b00;
    branch = 1'b0;
    jump = 1'b0;
    // lw command and sw command 
    case(op)
        // I-type command 
        7'b0000011: begin
            reg_write = 1'b1;
            imm_source = 3'b000;
            mem_write = 1'b0;
            alu_op = 2'b00;
            alu_source = 1'b1;
            write_back_source = 2'b01;
            branch = 1'b0; 
        
        end
        7'b0100011 : begin
            reg_write = 1'b0;
            imm_source = 3'b001;
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
            write_back_source = 2'b00;
            branch = 1'b0; 

        end
        // B-type instruction
        7'b1100011 : begin
            reg_write = 1'b0;
            imm_source = 3'b010;
            alu_source = 1'b0;
            mem_write = 1'b0;
            alu_op = 2'b01;
            branch = 1'b1;

        end
        // j_type jal instruction
        7'b1101111 : begin
            reg_write = 1'b1;
            imm_source = 3'b011;
            alu_source = 1'b0;
            mem_write = 1'b0;
            branch = 1'b0;
            jump = 1'b1;
            write_back_source = 2'b10;

        end
        // addi instruction
        7'b0010011 : begin
            reg_write = 1'b1;
            imm_source = 3'b000;
            alu_source = 1'b1; //imm
            mem_write = 1'b0;
            alu_op = 2'b10;
            write_back_source = 2'b00; //alu_result
            branch = 1'b0;
            jump = 1'b0;
        end
        // U-type command
        7'b0110111: begin  // LUI
            imm_source = 3'b100;
            mem_write = 1'b0;
            reg_write = 1'b1;
            write_back_source = 2'b11;
            branch = 1'b0;
            jump = 1'b0;
            second_add_source = 1'b1;
        end
        7'b0010111: begin  // AUIPC
            imm_source = 3'b100;
            mem_write = 1'b0;
            reg_write = 1'b1;
            write_back_source = 2'b11;
            branch = 1'b0;
            jump = 1'b0;
            second_add_source = 1'b0;
        end

        
        default: begin
            reg_write = 1'b0;
            imm_source = 3'b000;
            mem_write = 1'b0;
            alu_op = 2'b00;
        
        end   
    endcase
end

always_comb begin 
    case(alu_op)
        //lw, sw
        2'b00 : alu_control = 4'b0000;
        2'b10 : begin
            case (func3)
                // ADD
                3'b000 : alu_control = 4'b0000; 
                3'b111 : alu_control = 4'b0010; // andi
                3'b110 : alu_control = 4'b0011; // ori
                // SLTI
                3'b010 : alu_control = 4'b0101; // NEW !
                // SLTIU
                3'b011 : alu_control = 4'b0111;
                // XORI
                3'b100 : alu_control = 4'b1000;
            endcase
        end
        // B-type decoder
        2'b01 : alu_control = 4'b0001;
    endcase

assign pc_source = (alu_zero & branch) | jump;

end
endmodule