module tb_cache;

logic clk;
logic rst_n;
logic aclk;
logic [31:0] address;
logic [31:0] write_data;
logic read_enable;
logic write_enable;
logic [3:0] byte_enable;

logic [31:0] read_data;
logic cache_stall;

logic [2:0]cache_state;


// 在testbench里面实例化interface
axi_if axi();

cache dut(
    .clk(clk),
    .rst_n(rst_n),
    .aclk(aclk),
    .address(address),
    .write_data(write_data),
    .read_enable(read_enable),
    .write_enable(write_enable),
    .byte_enable(byte_enable),
    .read_data(read_data),
    .cache_stall(cache_stall),
    .axi(axi.master),
    .cache_state(cache_state)
);

endmodule