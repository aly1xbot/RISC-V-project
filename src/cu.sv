`timescale 1ns/1ps
import instruction_set_pkg::*;
module control(
    input logic [6:0] op,
    input logic [2:0] func3,
    input logic [6:0] func7,
    input logic alu_zero,
    input logic [4:0] shamt,
    input logic [11:0] system_imm,
    input logic alu_last_bit,
    input logic alu_unsigned_less,
    

    output logic [3:0] alu_control,
    output logic [2:0] imm_source,
    output logic reg_write,
    output logic mem_write,
    output logic alu_source,
    output logic [1:0] write_back_source,
    output logic pc_source,
    output logic [1:0]second_add_source,
    output logic mem_read,
    output logic fence,
    output logic fence_i,
    output logic trap_valid,
    output logic [4:0] trap_cause
);
import instruction_set_pkg::*;


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
    mem_read = 1'b0;
    fence = 1'b0;
    fence_i = 1'b0;
    // Unknown or reserved encodings trap instead of silently acting as NOPs.
    trap_valid = 1'b1;
    trap_cause = 5'd2; // Illegal instruction
    // lw command and sw command 
    case(op)
        // and command
        OPCODE_I_TYPE_LOAD: begin
            if (func3 == F3_BYTE || func3 == F3_HALFWORD ||
                func3 == F3_WORD || func3 == F3_BYTE_U ||
                func3 == F3_HALFWORD_U) begin
                trap_valid = 1'b0;
                reg_write = 1'b1;
                imm_source = 3'b000;
                alu_op = 2'b00;
                alu_source = 1'b1;
                write_back_source = 2'b01;
                mem_read = 1'b1;
            end
        
        end
        OPCODE_S_TYPE : begin
            if (func3 == F3_BYTE || func3 == F3_HALFWORD ||
                func3 == F3_WORD) begin
                trap_valid = 1'b0;
                imm_source = 3'b001;
                mem_write = 1'b1;
                alu_op = 2'b00;
                alu_source = 1'b1;
            end
        end
        // R-type command verification
        OPCODE_R_TYPE : begin
            case (func3)
                F3_ADD_SUB: trap_valid = !((func7 == F7_ADD) || (func7 == F7_SUB));
                F3_SRL_SRA: trap_valid = !((func7 == F7_SLL_SRL) || (func7 == F7_SRA));
                default: trap_valid = (func7 != 7'b0000000);
            endcase
            if (!trap_valid) begin
                reg_write = 1'b1;
                alu_op = 2'b10;
                write_back_source = 2'b00;
            end

        end
        // B-type instruction
        OPCODE_B_TYPE : begin
            if (func3 == F3_BEQ || func3 == F3_BNE ||
                func3 == F3_BLT || func3 == F3_BGE ||
                func3 == F3_BLTU || func3 == F3_BGEU) begin
                trap_valid = 1'b0;
                imm_source = 3'b010;
                alu_op = 2'b01;
                branch = 1'b1;
            end

        end
        // j_type jal instruction
        OPCODE_J_TYPE: begin
            trap_valid = 1'b0;
            reg_write = 1'b1;
            imm_source = 3'b011;
            jump = 1'b1;
            write_back_source = 2'b10;
            second_add_source = 2'b00;
        end
        OPCODE_J_TYPE_JALR: begin
            if (func3 == 3'b000) begin
                trap_valid = 1'b0;
                reg_write = 1'b1;
                jump = 1'b1;
                write_back_source = 2'b10;
                second_add_source = 2'b10;
                imm_source = 3'b000;
            end
        end
        // addi instruction, all the I-type instruction and all the R-type instruction
        OPCODE_I_TYPE_ALU : begin
            // RV32I shift-immediate encodings reserve bits [31:25]. Invalid
            // encodings raise the illegal-instruction trap selected above.
            if (func3 == F3_SLL)
                trap_valid = (func7 != F7_SLL_SRL);
            else if (func3 == F3_SRL_SRA)
                trap_valid = !((func7 == F7_SLL_SRL) || (func7 == F7_SRA));
            else
                trap_valid = 1'b0;
            reg_write = !trap_valid;
            imm_source = 3'b000;
            alu_source = 1'b1; //imm
            mem_write = 1'b0;
            alu_op = 2'b10;
            write_back_source = 2'b00; //alu_result
            branch = 1'b0;
            jump = 1'b0;
            mem_read=1'b0;
        end
        // U-type command
        OPCODE_U_TYPE_LUI: begin  // LUI
            trap_valid = 1'b0;
            imm_source = 3'b100;
            mem_write = 1'b0;
            reg_write = 1'b1;
            write_back_source = 2'b11;
            branch = 1'b0;
            jump = 1'b0;
            second_add_source = 2'b01;
            mem_read=1'b0;
        end
        OPCODE_U_TYPE_AUIPC: begin  // AUIPC
            trap_valid = 1'b0;
            imm_source = 3'b100;
            mem_write = 1'b0;
            reg_write = 1'b1;
            write_back_source = 2'b11;
            branch = 1'b0;
            jump = 1'b0;
            second_add_source = 2'b00;
            mem_read=1'b0;
        end

        // FENCE and FENCE.TSO (funct3=000) use the conservative full
        // data-cache flush implemented by the CPU/cache interface.
        OPCODE_MISC_MEM: begin
            if (func3 == 3'b000) begin
                trap_valid = 1'b0;
                fence = 1'b1;
            end else if (func3 == 3'b001) begin
                trap_valid = 1'b0;
                fence_i = 1'b1;
            end
        end

        // This core has no privileged trap vector/CSR implementation yet.
        // Report ECALL/EBREAK on the sideband trap interface; the CPU holds
        // the current PC until an external environment handles the trap.
        OPCODE_CSR: begin
            if (func3 == 3'b000 && system_imm == ECALL) begin
                trap_valid = 1'b1;
                trap_cause = 5'd11; // Environment call from M-mode
            end else if (func3 == 3'b000 && system_imm == EBREAK) begin
                trap_valid = 1'b1;
                trap_cause = 5'd3; // Breakpoint
            end
        end

        
        default: begin end
    endcase
end





always_comb begin 
    alu_control = ALU_ADD; //default
    case(alu_op)
        // LW, SW
        ALU_OP_LOAD_STORE : alu_control = ALU_ADD;
        ALU_OP_BRANCHES: begin
            case(func3)
                F3_BEQ:  alu_control = ALU_SUB;
                F3_BNE:  alu_control = ALU_SUB;

                F3_BLT:  alu_control = ALU_SLT;
                F3_BGE:  alu_control = ALU_SLT;

                F3_BLTU: alu_control = ALU_SLTU;
                F3_BGEU: alu_control = ALU_SLTU;

                default: alu_control = ALU_ADD;
            endcase
        end
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
        default: alu_control = ALU_ADD;
    endcase
end

logic assert_branch;

always_comb begin : branch_logic_decode
    case (func3)
        // BEQ
        F3_BEQ : assert_branch = alu_zero & branch;
        // BLT
        F3_BLT : assert_branch = alu_last_bit & branch;
        //BNE
        F3_BNE : assert_branch = ~alu_zero & branch;
        //BGE
        F3_BGE : assert_branch = ~alu_last_bit & branch;
        //bltu
        F3_BLTU : assert_branch = alu_unsigned_less & branch;
        //bgeu
        F3_BGEU : assert_branch = ~alu_unsigned_less & branch;
        default : assert_branch = 1'b0;
    endcase
end




assign pc_source = assert_branch | jump;


endmodule
