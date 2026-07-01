module cpu (
    input logic clk,
    input logic rst_n

);
// program counter 
reg [31:0] pc;
logic [31:0] pc_next;

always_comb begin: pcSelect
    pc_next = pc + 4;
end

always @(posedge clk) begin
    if (rst_n == 0) begin
        pc<= 32'b0;
    end else begin
        pc<= pc_next;
    end
end

wire [31:0] instruction;


// instruction memory which acting as ROM 
memory #(
    .mem_init("./test_imemory.hex")

) instruction_memory(
    .clk(clk),
    .address(pc),
    .write_data(32'b0),
    .write_enable(1'b0),
    .rst_n(1'b1),
    // Memory Outputs
    .read_data(instruction)
);

//control unit part, intercept the instruction from the program counter, acting as cu 


logic [6:0] op;
assign op = instruction [6:0];
logic [2:0] f3;
assign f3 = instruction[14:12];
wire alu_zero;
// out of the control unit 
wire [2:0] alu_control;
wire [1:0] imm_source;
wire reg_write;
wire mem_write ;
wire alu_source;
wire write_back_source;

control control(
    .op(op),
    .func3(f3),
    .func7(7'b0),
    .alu_zero(alu_zero),

    //output 
    .alu_control(alu_control),
    .reg_write (reg_write),
    .mem_write (mem_write),
    .imm_source (imm_source),
    .alu_source (alu_source),
    .write_back_source (write_back_source)

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

logic [31:0] write_back_data;
always_comb begin : write_back_source_select
    case (write_back_source)
        1'b1: write_back_data = mem_read;
        default: write_back_data = alu_result;
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
wire [31:0] immediate;

signext sign_extender (
    .raw_src (raw_imm),
    .imm_source (imm_source),
    .immediate (immediate)

);

//ALU part 
logic [31:0] alu_src2;
wire [31:0] alu_result;

always_comb begin: alu_source_select
    case(alu_source)
        1'b1 : alu_src2 = immediate;
        default : alu_src2 = read_reg2;
    endcase
end

alu alu_inst (
    .alu_control(alu_control),
    .src1(read_reg1),
    .src2(alu_src2),
    .alu_result(alu_result),
    .zero(alu_zero)

);

// data memory 
wire [31:0] mem_read;

memory #(
    .mem_init ("./test_dmemory.hex")
) data_memory(
 // Memory inputs
    .clk(clk),
    .address(alu_result),
    .write_data(read_reg2),
    .write_enable(mem_write),
    .rst_n(1'b1),

    // Memory outputs
    .read_data(mem_read)
);




endmodule