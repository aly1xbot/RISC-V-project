module cpu (
    input logic clk,
    input logic rst_n,
    axi_if.master m_axi,

    // OUTGOING DEBUG SIGNALS
    output logic [31:0] debug_pc,
    output logic [31:0] debug_pc_next,
    output logic [31:0] debug_instruction,
    output logic [3:0] debug_i_cache_state,
    output logic [3:0] debug_d_cache_state,
    output logic [6:0] debug_i_set_ptr,
    output logic [6:0] debug_i_next_set_ptr,
    output logic [6:0] debug_d_set_ptr,
    output logic [6:0] debug_d_next_set_ptr,
    output logic debug_i_cache_stall,
    output logic debug_d_cache_stall,
    output logic trap_valid,
    output logic [4:0] trap_cause,
    output logic [31:0] trap_pc

);
import instruction_set_pkg::*;
axi_if m_axi_data();
axi_if m_axi_inst();


//FPGA debug out system
assign debug_pc = pc;
assign debug_pc_next = pc_next;
assign debug_instruction = instruction;
assign debug_i_cache_state = i_cache_state;
assign debug_d_cache_state = d_cache_state;
assign debug_i_set_ptr = instr_set_ptr;
assign debug_i_next_set_ptr = instr_next_set_ptr;
assign debug_d_set_ptr = data_set_ptr;
assign debug_d_next_set_ptr = data_next_set_ptr;
assign debug_i_cache_stall = i_cache_stall;
assign debug_d_cache_stall = d_cache_stall;
assign trap_pc = pc;


// instruction cache integration
logic i_cache_stall;
logic d_cache_stall;
logic data_cache_flush_done;
logic [6:0] data_set_ptr;
logic [6:0] data_next_set_ptr;
logic [31:0] pc;
logic [31:0] instruction;
logic [31:0] mem_read;
logic [31:0] alu_result;
logic [31:0] mem_write_data;
logic [3:0] mem_byte_enable;
logic mem_read_enable;
logic mem_write;
logic data_read_enable;
logic data_write_enable;
logic control_trap_valid;

assign data_read_enable = mem_read_enable && !i_cache_stall;
assign data_write_enable = mem_write && !i_cache_stall;
assign trap_valid = control_trap_valid && !i_cache_stall;

cache_state_t i_cache_state;
cache_state_t d_cache_state;
cache instr_cache(
    .clk(clk),
    .rst_n(rst_n),
    .aclk(clk),

    .address(pc),
    .read_data(instruction),
    .read_enable(1'b1),
    .write_data(32'd0),
    .write_enable(1'b0),
    .flush(1'b0),
    .byte_enable(4'b0000),
    .cache_stall(i_cache_stall),
    .flush_done(),

    .axi(m_axi_inst),
    .cache_state(i_cache_state),
    .set_ptr_out(instr_set_ptr),
    .next_set_ptr_out(instr_next_set_ptr)
);

//data chache integration
cache data_cache(
    .clk(clk),
    .rst_n(rst_n),
    .aclk(clk),

    .address(alu_result),
    .read_data(mem_read),
    .read_enable(data_read_enable),
    .write_data(mem_write_data),
    .write_enable(data_write_enable),
    .flush(fence && !i_cache_stall),
    .byte_enable(mem_byte_enable),
    .cache_stall(d_cache_stall),
    .flush_done(data_cache_flush_done),

    .axi(m_axi_data),
    .cache_state(d_cache_state),
    .set_ptr_out(data_set_ptr),
    .next_set_ptr_out(data_next_set_ptr)
);


//external_req_arbitrator connection
logic [6:0] instr_set_ptr;
logic [6:0] instr_next_set_ptr;

//output


external_req_arbitrer arbitrer (
    .m_axi(m_axi),
    .s_axi_instr(m_axi_inst),
    .s_axi_data(m_axi_data),
    .i_cache_state(i_cache_state),
    .d_cache_state(d_cache_state)
);


// program counter 
logic [31:0] pc_next;
logic [31:0] pc_plus_second_add;
logic [31:0] pc_plus_four;
wire [31:0] immediate;   // moved before use in second_add_select

// control signals (moved before pc_select and second_add_select)
wire pc_source;
wire [1:0] second_add_source;
wire alu_zero;
wire [3:0] alu_control;
wire [2:0] imm_source;
wire reg_write;
wire alu_source;
wire [1:0] write_back_source;
wire fence;


assign pc_plus_four = pc + 4;

always_comb begin : pc_select
    if (trap_valid || i_cache_stall || d_cache_stall ||
        (fence && !data_cache_flush_done)) begin
        pc_next = pc;
    end else begin
        case (pc_source)
            1'b0 : pc_next = pc_plus_four; // pc_target
            1'b1 : pc_next = pc_plus_second_add;
        endcase
    end
end

always_comb begin : second_add_select
    case(second_add_source)
        2'b00 : pc_plus_second_add = pc + immediate; // width updated !
        2'b01 : pc_plus_second_add = immediate; // width updated !
        2'b10 : pc_plus_second_add = (read_reg1 + immediate) & 32'hFFFFFFFE; // NEW
        default : pc_plus_second_add = 32'b0;
    endcase
end

always @(posedge clk) begin
    if(rst_n == 0) begin
        pc <= 32'b0;
    end else begin
        pc <= pc_next;
    end
end

logic [6:0] func7;
logic [4:0] shamt;
assign shamt = instruction [24:20];
assign func7 = instruction[31:25];


//control unit part, intercept the instruction from the program counter, acting as cu 


logic [6:0] op;
assign op = instruction [6:0];
logic [2:0] f3;
assign f3 = instruction[14:12];
logic [11:0] system_imm;
assign system_imm = instruction[31:20];
logic alu_last_bit;
assign alu_last_bit = last_bit;
logic alu_unsigned_less;
assign alu_unsigned_less = unsigned_less;

control control(
    .op(op),
    .func3(f3),
    .func7(func7),
    .system_imm(system_imm),
    .alu_zero(alu_zero),
    .shamt(shamt),
    .alu_last_bit(alu_last_bit),
    .alu_unsigned_less(alu_unsigned_less),

    //output 
    .alu_control(alu_control),
    .reg_write (reg_write),
    .mem_write (mem_write),
    .mem_read (mem_read_enable),
    .fence(fence),
    .imm_source (imm_source),
    .alu_source (alu_source),
    .write_back_source (write_back_source),
    .pc_source (pc_source),
    .second_add_source(second_add_source),
    .trap_valid(control_trap_valid),
    .trap_cause(trap_cause)

);

//regfile 

logic [4:0] source_reg1;
assign source_reg1 = instruction[19:15];
logic [4:0] source_reg2;
assign source_reg2 = instruction[24:20];
logic [4:0] dest_reg;
assign dest_reg = instruction[11:7];
wire [31:0] read_reg1;
wire [31:0] read_reg2;

// alu_result and mem_read moved before write_back_source_select
logic wb_valid;
logic [31:0] write_back_data;
always_comb begin : write_back_source_select
    case (write_back_source)
        2'b00: begin
            write_back_data = alu_result;
            wb_valid = 1'b1;
        end

        2'b01: begin
            write_back_data = mem_read_write_back_data;
            wb_valid = mem_read_write_back_valid;
        end
        2'b10: begin
            write_back_data = pc_plus_four;
            wb_valid = 1'b1;
            
        end
        2'b11: begin
            write_back_data = pc_plus_second_add;
            wb_valid = 1'b1;
        end
    endcase
end





regfile regfile(
    //basic signals 
    .clk(clk),
    .rst_n(rst_n),
    //read in 
    .address1(source_reg1),
    .address2(source_reg2),
    //read out 
    .read_data1(read_reg1),
    .read_data2(read_reg2),
    //write in
    .write_enable(reg_write & wb_valid & !i_cache_stall &
                  !d_cache_stall & !trap_valid),
    .write_data(write_back_data),
    .address3(dest_reg)

);

// sign ext part 

logic [24:0] raw_imm;
assign raw_imm = instruction[31:7];

signext sign_extender (
    .raw_src (raw_imm),
    .imm_source (imm_source),
    .immediate (immediate)

);

//ALU part 
logic [31:0] alu_src2;

always_comb begin: alu_source_select
    case(alu_source)
        1'b1 : alu_src2 = immediate;
        default : alu_src2 = read_reg2;
    endcase
end

logic [4:0] shift_amount;

wire last_bit;
wire unsigned_less;

always_comb begin
    case(op)

        7'b0010011: begin
            // shift immediate
            shift_amount = instruction[24:20];
        end

        7'b0110011: begin
            // R-type shift
            shift_amount = read_reg2[4:0];
        end

        default:
            shift_amount = 5'b0;

    endcase
end

alu alu_inst (
    .alu_control(alu_control),
    .src1(read_reg1),
    .src2(alu_src2),
    .alu_result(alu_result),
    .zero(alu_zero),
    .shamt(shift_amount),
    .last_bit(last_bit),
    .unsigned_less(unsigned_less)

);

//load-store decoder

wire [31:0] data;


load_store_decoder ls_decoder(
    .alu_result_address(alu_result),
    .byte_enable(mem_byte_enable),
    .f3(f3),
    .reg_read(read_reg2),
    .data(mem_write_data)

);





//reader
wire [31:0] mem_read_write_back_data;
wire mem_read_write_back_valid;
reader reader_inst(
    .mem_data(mem_read),
    .be_mask(mem_byte_enable),
    .f3(f3),
    .wb_data(mem_read_write_back_data),
    .valid(mem_read_write_back_valid)
);






endmodule
