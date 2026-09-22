module csr_file (
    input logic clk,
    input logic rst_n,
    input logic [11:0] csr_address,
    input logic csr_write_enable,
    input logic [1:0] csr_op,
    input logic [31:0] csr_write_data,
    input logic trap_enter,
    input logic [31:0] trap_pc,
    input logic [4:0] trap_cause,
    input logic mret,
    output logic [31:0] csr_read_data,
    output logic csr_address_valid,
    output logic [31:0] mtvec,
    output logic [31:0] mepc,
    output logic [31:0] mcause,
    output logic [31:0] mstatus
);
    localparam logic [11:0] CSR_MSTATUS = 12'h300;
    localparam logic [11:0] CSR_MTVEC   = 12'h305;
    localparam logic [11:0] CSR_MEPC    = 12'h341;
    localparam logic [11:0] CSR_MCAUSE  = 12'h342;

    logic [31:0] csr_old_value;
    logic [31:0] csr_new_value;

    always_comb begin
        csr_address_valid = 1'b1;
        case (csr_address)
            CSR_MSTATUS: csr_old_value = mstatus;
            CSR_MTVEC:   csr_old_value = mtvec;
            CSR_MEPC:    csr_old_value = mepc;
            CSR_MCAUSE:  csr_old_value = mcause;
            default: begin
                csr_old_value = 32'b0;
                csr_address_valid = 1'b0;
            end
        endcase

        case (csr_op)
            2'b00: csr_new_value = csr_write_data;
            2'b01: csr_new_value = csr_old_value | csr_write_data;
            2'b10: csr_new_value = csr_old_value & ~csr_write_data;
            default: csr_new_value = csr_old_value;
        endcase
        csr_read_data = csr_old_value;
    end

    always_ff @(posedge clk) begin
        if (!rst_n) begin
            mstatus <= 32'b0;
            mtvec <= 32'b0;
            mepc <= 32'b0;
            mcause <= 32'b0;
        end else begin
            if (trap_enter) begin
                mepc <= {trap_pc[31:2], 2'b00};
                mcause <= {27'b0, trap_cause};
                mstatus[7] <= mstatus[3];
                mstatus[3] <= 1'b0;
                mstatus[12:11] <= 2'b11;
            end else if (mret) begin
                mstatus[3] <= mstatus[7];
                mstatus[7] <= 1'b1;
                mstatus[12:11] <= 2'b00;
            end

            if (csr_write_enable && csr_address_valid && !trap_enter) begin
                case (csr_address)
                    CSR_MSTATUS: mstatus <= csr_new_value & 32'h00001888;
                    CSR_MTVEC:   mtvec <= {csr_new_value[31:2], 2'b00};
                    CSR_MEPC:    mepc <= {csr_new_value[31:2], 2'b00};
                    CSR_MCAUSE:  mcause <= csr_new_value;
                    default: begin end
                endcase
            end
        end
    end
endmodule
