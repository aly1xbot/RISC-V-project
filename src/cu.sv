`timescale 1ns/1ps
module control(
    input logic [6:0] op,
    input logic [2:0] func3,
    input logic [6:0] func7,
    input logic alu_zero,
    input logic [4:0] shamt,
    input logic alu_last_bit,
    input logic alu_unsigned_less,
    

    output logic [3:0] alu_control,
    output logic [2:0] imm_source,
    output logic reg_write,
    output logic mem_write,
    output logic alu_source,
    output logic [1:0] write_back_source,
    output logic pc_source,
    output logic [1:0]second_add_source
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
    second_add_source = 2'b00; 
    // lw command and sw command 
    case(op)
        // and command
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
        7'b1101111, 7'b1100111 : begin
            reg_write = 1'b1;
            imm_source = 3'b011;
            alu_source = 1'b0;
            mem_write = 1'b0;
            branch = 1'b0;
            jump = 1'b1;
            write_back_source = 2'b10;
            if(op[3]) begin// jal
                second_add_source = 2'b00;
                imm_source = 3'b011;
            end         
            else if (~op[3]) begin // jalr
                second_add_source = 2'b10;
                imm_source = 3'b000;
            end   
        end
        // addi instruction, all the I-type instruction and all the R-type instruction
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
            second_add_source = 2'b01;
        end
        7'b0010111: begin  // AUIPC
            imm_source = 3'b100;
            mem_write = 1'b0;
            reg_write = 1'b1;
            write_back_source = 2'b11;
            branch = 1'b0;
            jump = 1'b0;
            second_add_source = 2'b00;
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
        // LW, SW
        ALU_OP_LOAD_STORE : alu_control = ALU_ADD;
        // R-Types, I-types
        ALU_OP_MATH : begin
            case (func3)
                // ADD (and later SUB with a different F7)
                F3_ADD_SUB : begin
                    // 2 scenarios here :
                    // - R-TYPE : either add or sub and we need to a check for that
                    // - I-Type : aadi -> we use add arithmetic
                    if(op == 7'b0110011) begin // R-type
                        alu_control = (func7 == F7_SUB)? ALU_SUB : ALU_ADD;
                    end else begin // I-Type
                        alu_control = ALU_ADD;
                    end
                end
                // AND
                F3_AND : alu_control = ALU_AND;
                // OR
                F3_OR : alu_control = ALU_OR;
                // SLT, SLTI
                F3_SLT: alu_control = ALU_SLT;
                // SLTU, SLTIU
                F3_SLTU : alu_control = ALU_SLTU;
                // XOR
                F3_XOR : alu_control = ALU_XOR;
                // SLL
                F3_SLL : alu_control = ALU_SLL;
                // SRL, SRA
                F3_SRL_SRA : begin
                    if(func7 == F7_SLL_SRL) begin
                        alu_control = ALU_SRL; // srl
                    end else if (func7 == F7_SRA) begin
                        alu_control = ALU_SRA; // sra
                    end
                end
            endcase
        end
    endcase
end

logic assert_branch;

always_comb begin : branch_logic_decode
    case (func3)
        // BEQ
        3'b000 : assert_branch = alu_zero & branch;
        // BLT
        3'b100 : assert_branch = alu_last_bit & branch;
        //BNE
        3'b001 : assert_branch = ~alu_zero & branch;
        //BGE
        3'b101 : assert_branch = ~alu_last_bit & branch;
        //bltu
        3'b110 : assert_branch = alu_unsigned_less & branch;
        //bgeu
        3'b111 : assert_branch = ~alu_unsigned_less & branch;
        default : assert_branch = 1'b0;
    endcase
end


assign pc_source = assert_branch | jump;


endmodule