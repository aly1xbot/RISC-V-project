/** holy_test_harness
*
*   Author : BABIN-RIBY Hugo
*   Project : CPU FPGA V2
*   Description : This is just an "axi_translator" wapper module.aclk
*   This wrapper module instantiates the cache and routes the AXI interface as discrete Verilog signals for cocotb
*/

module cpu_test_harness (
    // CPU clock and active low reset
    output logic clk,
    output logic rst_n,

    // axi clock
    output logic aclk,
    output logic aresetn,

    //=======================
    // AXI FULL Interface
    //=======================
    
    // Write Address Channel
    output logic [3:0]               m_axi_awid,
    output logic [31:0]              m_axi_awaddr,
    output logic [7:0]               m_axi_awlen,
    output logic [2:0]               m_axi_awsize,
    output logic [1:0]               m_axi_awburst,
    output logic                     m_axi_awvalid,
    input  logic                     m_axi_awready,

    // Write Data Channel
    output logic [31:0]              m_axi_wdata, 
    output logic [3:0]               m_axi_wstrb,
    output logic                     m_axi_wlast,
    output logic                     m_axi_wvalid,
    input  logic                     m_axi_wready,

    // Write Response Channel
    input  logic [3:0]               m_axi_bid,
    input  logic [1:0]               m_axi_bresp,
    input  logic                     m_axi_bvalid,
    output logic                     m_axi_bready,

    // Read Address Channel
    output logic [3:0]               m_axi_arid,
    output logic [31:0]              m_axi_araddr,
    output logic [7:0]               m_axi_arlen,
    output logic [2:0]               m_axi_arsize,
    output logic [1:0]               m_axi_arburst,
    output logic                     m_axi_arvalid,
    input  logic                     m_axi_arready,

    // Read Data Channel
    input  logic [3:0]               m_axi_rid,
    input  logic [31:0]              m_axi_rdata,
    input  logic [1:0]               m_axi_rresp,
    input  logic                     m_axi_rlast,
    input  logic                     m_axi_rvalid,
    output logic                     m_axi_rready

    //=======================
    // AXI-Lite Interface
    //=======================
    /* output logic [31:0] m_axi_lite_awaddr,
    output logic        m_axi_lite_awvalid,
    input  logic        m_axi_lite_awready,

    output logic [31:0] m_axi_lite_wdata,
    output logic [3:0]  m_axi_lite_wstrb,
    output logic        m_axi_lite_wvalid,
    input  logic        m_axi_lite_wready,

    input  logic [1:0]  m_axi_lite_bresp,
    input  logic        m_axi_lite_bvalid,
    output logic        m_axi_lite_bready,

    output logic [31:0] m_axi_lite_araddr,
    output logic        m_axi_lite_arvalid,
    input  logic        m_axi_lite_arready,

    input  logic [31:0] m_axi_lite_rdata,
    input  logic [1:0]  m_axi_lite_rresp,
    input  logic        m_axi_lite_rvalid,
    output logic        m_axi_lite_rready */
);

axi_if m_axi();
// axi_lite_if m_axi_lite();

/* verilator lint_off PINMISSING */
cpu core(
    .clk(clk), 
    .rst_n(rst_n),

    // AXI Master Interface
    .m_axi(m_axi)
    // CPU has no AXI-Lite port

    // We don't use debug signals in tb
    // ...
);

// Compatibility probes preserve the hierarchy used by the original CPU
// cocotb test while all values still come from the cache-enabled core.
wire [31:0] pc = core.pc;
wire [31:0] instruction = core.instruction;

generate
    begin : regfile
        wire [31:0] registers [0:31];
        for (genvar register_index = 0; register_index < 32; register_index++) begin : register_probe
            assign registers[register_index] = core.regfile.registers[register_index];
        end
    end

    begin : data_memory
        wire [31:0] mem [0:127];
        for (genvar cache_index = 0; cache_index < 128; cache_index++) begin : cache_probe
            assign mem[cache_index] = core.data_cache.cache_data[cache_index];
        end
    end
endgenerate

initial begin
    clk = 1'b0;
    forever #5 clk = ~clk;
end
assign aclk = clk;

initial begin
    rst_n = 1'b0;
    aresetn = 1'b0;
    #12;
    rst_n = 1'b1;
    aresetn = 1'b1;
end

// Simulation-only AXI RAM.  Keeping the slave inside the harness avoids the
// foreign-interface limitation on driving top-level AXI inputs such as
// m_axi_arready.
logic [31:0] ram [0:2047];
logic read_active;
logic [31:0] read_addr;
logic [7:0] read_count;
logic [7:0] read_length;
logic write_active;
logic [31:0] write_addr;
logic [7:0] write_count;
logic bvalid_reg;

initial begin
    $readmemh("test_imemory.hex", ram, 0);
    $readmemh("test_dmemory.hex", ram, 1024);
end

// The CPU regression is a datapath test and expects its two 128-word images
// to be resident before execution begins.  Populate the corresponding cache
// blocks after reset, while retaining the normal AXI miss logic for all other
// addresses.
initial begin
    #13;
    for (int preload_index = 0; preload_index < 128; preload_index++) begin
        core.instr_cache.cache_data[preload_index] = ram[preload_index];
        core.data_cache.cache_data[preload_index] = ram[1024 + preload_index];
    end
    core.instr_cache.cache_block_tag = '0;
    core.instr_cache.cache_valid = 1'b1;
    core.instr_cache.cache_dirty = 1'b0;
    core.data_cache.cache_block_tag = 23'd8;
    core.data_cache.cache_valid = 1'b1;
    core.data_cache.cache_dirty = 1'b0;
end

always_ff @(posedge clk) begin
    if (!rst_n) begin
        read_active <= 1'b0;
        read_addr <= '0;
        read_count <= '0;
        read_length <= '0;
        write_active <= 1'b0;
        write_addr <= '0;
        write_count <= '0;
        bvalid_reg <= 1'b0;
    end else begin
        if (!read_active && m_axi.arvalid) begin
            read_active <= 1'b1;
            read_addr <= m_axi.araddr;
            read_count <= '0;
            read_length <= m_axi.arlen;
        end else if (read_active && m_axi.rready) begin
            if (read_count == read_length) begin
                read_active <= 1'b0;
            end else begin
                read_count <= read_count + 1'b1;
                read_addr <= read_addr + 32'd4;
            end
        end

        if (!write_active && m_axi.awvalid) begin
            write_active <= 1'b1;
            write_addr <= m_axi.awaddr;
            write_count <= '0;
        end else if (write_active && m_axi.wvalid) begin
            if (m_axi.wstrb[0]) ram[write_addr[12:2]][7:0] <= m_axi.wdata[7:0];
            if (m_axi.wstrb[1]) ram[write_addr[12:2]][15:8] <= m_axi.wdata[15:8];
            if (m_axi.wstrb[2]) ram[write_addr[12:2]][23:16] <= m_axi.wdata[23:16];
            if (m_axi.wstrb[3]) ram[write_addr[12:2]][31:24] <= m_axi.wdata[31:24];
            if (m_axi.wlast) begin
                write_active <= 1'b0;
                bvalid_reg <= 1'b1;
            end else begin
                write_count <= write_count + 1'b1;
                write_addr <= write_addr + 32'd4;
            end
        end

        if (bvalid_reg && m_axi.bready) bvalid_reg <= 1'b0;
    end
end

always_comb begin
    m_axi.awready = !write_active;
    m_axi.wready = write_active;
    m_axi.bid = '0;
    m_axi.bresp = 2'b00;
    m_axi.bvalid = bvalid_reg;
    m_axi.arready = !read_active;
    m_axi.rid = '0;
    m_axi.rdata = ram[read_addr[12:2]];
    m_axi.rresp = 2'b00;
    m_axi.rlast = read_active && (read_count == read_length);
    m_axi.rvalid = read_active;
end
/* verilator lint_on PINMISSING */

//=======================
// AXI FULL Interface
//=======================

// Connect the discrete AXI signals to the m_axi
assign m_axi.aclk       = aclk;
assign m_axi.aresetn    = aresetn;

// Write Address Channel
assign m_axi_awid       = m_axi.awid;
assign m_axi_awaddr     = m_axi.awaddr;
assign m_axi_awlen      = m_axi.awlen;
assign m_axi_awsize     = m_axi.awsize;
assign m_axi_awburst    = m_axi.awburst;
assign m_axi_awvalid    = m_axi.awvalid;
// Ready/response channels are driven by the in-harness AXI RAM above.


// Write Data Channel
assign m_axi_wdata   = m_axi.wdata;
assign m_axi_wstrb   = m_axi.wstrb;
assign m_axi_wlast   = m_axi.wlast;
assign m_axi_wvalid  = m_axi.wvalid;

// Write Response Channel
assign m_axi_bready = m_axi.bready;

// Read Address Channel
assign m_axi_arid    = m_axi.arid;
assign m_axi_araddr  = m_axi.araddr;
assign m_axi_arlen   = m_axi.arlen;
assign m_axi_arsize  = m_axi.arsize;
assign m_axi_arburst = m_axi.arburst;
assign m_axi_arvalid = m_axi.arvalid;

// Read Data Channel
assign m_axi_rready = m_axi.rready;

/*=======================
// AXI-Lite Interface
=======================

// Connect AXI-Lite signals
assign m_axi_lite_awaddr  = m_axi_lite.awaddr;
assign m_axi_lite_awvalid = m_axi_lite.awvalid;
assign m_axi_lite.awready = m_axi_lite_awready;

assign m_axi_lite_wdata   = m_axi_lite.wdata;
assign m_axi_lite_wstrb   = m_axi_lite.wstrb;
assign m_axi_lite_wvalid  = m_axi_lite.wvalid;
assign m_axi_lite.wready  = m_axi_lite_wready;

assign m_axi_lite.bresp   = m_axi_lite_bresp;
assign m_axi_lite.bvalid  = m_axi_lite_bvalid;
assign m_axi_lite_bready  = m_axi_lite.bready;

assign m_axi_lite_araddr  = m_axi_lite.araddr;
assign m_axi_lite_arvalid = m_axi_lite.arvalid;
assign m_axi_lite.arready = m_axi_lite_arready;

assign m_axi_lite.rdata   = m_axi_lite_rdata;
assign m_axi_lite.rresp   = m_axi_lite_rresp;
assign m_axi_lite.rvalid  = m_axi_lite_rvalid;
assign m_axi_lite_rready  = m_axi_lite.rready;
*/

endmodule
