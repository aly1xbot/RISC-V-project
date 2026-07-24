module cpu (
    input logic clk,
    input logic rst_n

);

// program counter 
reg [31:0] pc;
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
wire mem_write ;
wire alu_source;
wire [1:0] write_back_source;

assign pc_plus_four = pc + 4;

always_comb begin : pc_select
    case (pc_source)
        1'b0 : pc_next = pc_plus_four; // pc_target
        1'b1 : pc_next = pc_plus_second_add;
    endcase
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

wire [31:0] instruction;
logic [6:0] func7;
logic [4:0] shamt;
assign shamt = instruction [24:20];
assign func7 = instruction[31:25];
// instruction memory which acting as ROM 
memory #(
    .mem_init("./test_imemory.hex")

) instruction_memory(
    .clk(clk),
    .address(pc),
    .write_data(32'b0),
    .write_enable(1'b0),
    .rst_n(1'b1),
    .byte_enable(4'b0000),
    // Memory Outputs
    .read_data(instruction)
);

//control unit part, intercept the instruction from the program counter, acting as cu 


logic [6:0] op;
assign op = instruction [6:0];
logic [2:0] f3;
assign f3 = instruction[14:12];
logic alu_last_bit;
assign alu_last_bit = last_bit;
logic alu_unsigned_less;
assign alu_unsigned_less = unsigned_less;

control control(
    .op(op),
    .func3(f3),
    .func7(func7),
    .alu_zero(alu_zero),
    .shamt(shamt),
    .alu_last_bit(alu_last_bit),
    .alu_unsigned_less(alu_unsigned_less),

    //output 
    .alu_control(alu_control),
    .reg_write (reg_write),
    .mem_write (mem_write),
    .imm_source (imm_source),
    .alu_source (alu_source),
    .write_back_source (write_back_source),
    .pc_source (pc_source),
    .second_add_source(second_add_source)

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
wire [31:0] alu_result;
wire [31:0] mem_read;

logic [31:0] write_back_data;
always_comb begin : write_back_source_select
    case (write_back_source)
        2'b00 : write_back_data = alu_result;
        2'b01 : write_back_data = mem_read;
        2'b10 : write_back_data = pc_plus_four;
        2'b11 : write_back_data = pc_plus_second_add;

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
    .write_enable(reg_write),
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

wire [3:0] mem_byte_enable;
wire [31:0] data;


load_store_decoder ls_decoder(
    .alu_result_address(alu_result),
    .byte_enable(mem_byte_enable),
    .f3(f3),
    .reg_read(read_reg2),
    .data(mem_write_data)

);





// data memory 
logic [31:0] mem_write_data;


memory #(
    .mem_init ("./test_dmemory.hex")
) data_memory(
 // Memory inputs
    .clk(clk),
    .address({alu_result[31:2],2'b00}),
    .write_data(mem_write_data),
    .write_enable(mem_write),
    .byte_enable(mem_byte_enable),
    .rst_n(1'b1),

    // Memory outputs
    .read_data(mem_read)
);


always @(posedge clk)
begin
    $display(
    "pc=%h next=%h source=%b second=%b imm=%h rs1=%h",
    pc,
    pc_next,
    pc_source,
    second_add_source,
    immediate,
    read_reg1
    );
end









endmodule

