// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(254);
    // Setup sub module instances
    TOP__tb_cache__DOT__axi.ctor(this, "tb_cache.axi");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__tb_cache__DOT__axi = &TOP__tb_cache__DOT__axi;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__tb_cache__DOT__axi.__Vconfigure(true);
    // Setup scopes
    __Vscopep_tb_cache = new VerilatedScope{this, "tb_cache", "tb_cache", "tb_cache", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_tb_cache__axi = new VerilatedScope{this, "tb_cache.axi", "axi", "axi_if", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_tb_cache__dut = new VerilatedScope{this, "tb_cache.dut", "dut", "cache", -9, VerilatedScope::SCOPE_MODULE};
    // Set up scope hierarchy
    __Vhier.add(0, __Vscopep_tb_cache);
    __Vhier.add(__Vscopep_tb_cache, __Vscopep_tb_cache__axi);
    __Vhier.add(__Vscopep_tb_cache, __Vscopep_tb_cache__dut);
    // Setup export functions - final: 0
    // Setup export functions - final: 1
    // Setup public variables
    __Vscopep_tb_cache->varInsert("aclk", &(TOP.tb_cache__DOT__aclk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_cache->varInsert("address", &(TOP.tb_cache__DOT__address), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_tb_cache->varInsert("byte_enable", &(TOP.tb_cache__DOT__byte_enable), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_tb_cache->varInsert("cache_stall", &(TOP.tb_cache__DOT__cache_stall), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_cache->varInsert("clk", &(TOP.tb_cache__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_cache->varInsert("read_data", &(TOP.tb_cache__DOT__read_data), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_tb_cache->varInsert("read_enable", &(TOP.tb_cache__DOT__read_enable), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_cache->varInsert("rst_n", &(TOP.tb_cache__DOT__rst_n), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_cache->varInsert("write_data", &(TOP.tb_cache__DOT__write_data), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_tb_cache->varInsert("write_enable", &(TOP.tb_cache__DOT__write_enable), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_cache__axi->varInsert("ADDR_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP__tb_cache__DOT__axi.ADDR_WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_cache__axi->varInsert("DATA_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP__tb_cache__DOT__axi.DATA_WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_cache__axi->varInsert("ID_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP__tb_cache__DOT__axi.ID_WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_cache__axi->varInsert("aclk", &(TOP__tb_cache__DOT__axi.aclk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_tb_cache__axi->varInsert("araddr", &(TOP__tb_cache__DOT__axi.araddr), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_tb_cache__axi->varInsert("arburst", &(TOP__tb_cache__DOT__axi.arburst), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,1,0);
    __Vscopep_tb_cache__axi->varInsert("aresetn", &(TOP__tb_cache__DOT__axi.aresetn), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_cache__axi->varInsert("arid", &(TOP__tb_cache__DOT__axi.arid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,3,0);
    __Vscopep_tb_cache__axi->varInsert("arlen", &(TOP__tb_cache__DOT__axi.arlen), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,7,0);
    __Vscopep_tb_cache__axi->varInsert("arlock", &(TOP__tb_cache__DOT__axi.arlock), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_tb_cache__axi->varInsert("arqos", &(TOP__tb_cache__DOT__axi.arqos), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_tb_cache__axi->varInsert("arready", &(TOP__tb_cache__DOT__axi.arready), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_cache__axi->varInsert("arsize", &(TOP__tb_cache__DOT__axi.arsize), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_tb_cache__axi->varInsert("arvalid", &(TOP__tb_cache__DOT__axi.arvalid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_cache__axi->varInsert("awaddr", &(TOP__tb_cache__DOT__axi.awaddr), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_tb_cache__axi->varInsert("awburst", &(TOP__tb_cache__DOT__axi.awburst), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,1,0);
    __Vscopep_tb_cache__axi->varInsert("awid", &(TOP__tb_cache__DOT__axi.awid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,3,0);
    __Vscopep_tb_cache__axi->varInsert("awlen", &(TOP__tb_cache__DOT__axi.awlen), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,7,0);
    __Vscopep_tb_cache__axi->varInsert("awlock", &(TOP__tb_cache__DOT__axi.awlock), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_tb_cache__axi->varInsert("awqos", &(TOP__tb_cache__DOT__axi.awqos), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_tb_cache__axi->varInsert("awready", &(TOP__tb_cache__DOT__axi.awready), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_cache__axi->varInsert("awsize", &(TOP__tb_cache__DOT__axi.awsize), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,2,0);
    __Vscopep_tb_cache__axi->varInsert("awvalid", &(TOP__tb_cache__DOT__axi.awvalid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_cache__axi->varInsert("bid", &(TOP__tb_cache__DOT__axi.bid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_tb_cache__axi->varInsert("bready", &(TOP__tb_cache__DOT__axi.bready), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_cache__axi->varInsert("bresp", &(TOP__tb_cache__DOT__axi.bresp), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_tb_cache__axi->varInsert("bvalid", &(TOP__tb_cache__DOT__axi.bvalid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_cache__axi->varInsert("rdata", &(TOP__tb_cache__DOT__axi.rdata), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_tb_cache__axi->varInsert("rid", &(TOP__tb_cache__DOT__axi.rid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_tb_cache__axi->varInsert("rlast", &(TOP__tb_cache__DOT__axi.rlast), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_cache__axi->varInsert("rready", &(TOP__tb_cache__DOT__axi.rready), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_cache__axi->varInsert("rresp", &(TOP__tb_cache__DOT__axi.rresp), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_tb_cache__axi->varInsert("rvalid", &(TOP__tb_cache__DOT__axi.rvalid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_cache__axi->varInsert("wdata", &(TOP__tb_cache__DOT__axi.wdata), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_tb_cache__axi->varInsert("wlast", &(TOP__tb_cache__DOT__axi.wlast), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_cache__axi->varInsert("wready", &(TOP__tb_cache__DOT__axi.wready), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_cache__axi->varInsert("wstrb", &(TOP__tb_cache__DOT__axi.wstrb), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,3,0);
    __Vscopep_tb_cache__axi->varInsert("wvalid", &(TOP__tb_cache__DOT__axi.wvalid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_cache__dut->varInsert("CACHE_SIZE", const_cast<void*>(static_cast<const void*>(&(TOP.tb_cache__DOT__dut__DOT__CACHE_SIZE))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_tb_cache__dut->varInsert("aclk", &(TOP.tb_cache__DOT__dut__DOT__aclk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_cache__dut->varInsert("actual_write_enable", &(TOP.tb_cache__DOT__dut__DOT__actual_write_enable), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_tb_cache__dut->varInsert("address", &(TOP.tb_cache__DOT__dut__DOT__address), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_tb_cache__dut->varInsert("byte_enable", &(TOP.tb_cache__DOT__dut__DOT__byte_enable), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_tb_cache__dut->varInsert("byte_enable_mask", &(TOP.tb_cache__DOT__dut__DOT__byte_enable_mask), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,31,0);
    __Vscopep_tb_cache__dut->varInsert("cache_block_tag", &(TOP.tb_cache__DOT__dut__DOT__cache_block_tag), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,9);
    __Vscopep_tb_cache__dut->varInsert("cache_data", &(TOP.tb_cache__DOT__dut__DOT__cache_data), false, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW, 0, 2 ,127,0 ,31,0);
    __Vscopep_tb_cache__dut->varInsert("cache_dirty", &(TOP.tb_cache__DOT__dut__DOT__cache_dirty), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_cache__dut->varInsert("cache_stall", &(TOP.tb_cache__DOT__dut__DOT__cache_stall), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_cache__dut->varInsert("cache_valid", &(TOP.tb_cache__DOT__dut__DOT__cache_valid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_cache__dut->varInsert("clk", &(TOP.tb_cache__DOT__dut__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_cache__dut->varInsert("hit", &(TOP.tb_cache__DOT__dut__DOT__hit), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_tb_cache__dut->varInsert("next_cache_dirty", &(TOP.tb_cache__DOT__dut__DOT__next_cache_dirty), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_cache__dut->varInsert("next_cache_valid", &(TOP.tb_cache__DOT__dut__DOT__next_cache_valid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_cache__dut->varInsert("next_set_ptr", &(TOP.tb_cache__DOT__dut__DOT__next_set_ptr), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,6,0);
    __Vscopep_tb_cache__dut->varInsert("next_state", &(TOP.tb_cache__DOT__dut__DOT__next_state), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_tb_cache__dut->varInsert("read_data", &(TOP.tb_cache__DOT__dut__DOT__read_data), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_tb_cache__dut->varInsert("read_enable", &(TOP.tb_cache__DOT__dut__DOT__read_enable), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_cache__dut->varInsert("req_block_tag", &(TOP.tb_cache__DOT__dut__DOT__req_block_tag), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,31,9);
    __Vscopep_tb_cache__dut->varInsert("req_index", &(TOP.tb_cache__DOT__dut__DOT__req_index), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,8,2);
    __Vscopep_tb_cache__dut->varInsert("rst_n", &(TOP.tb_cache__DOT__dut__DOT__rst_n), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_cache__dut->varInsert("set_ptr", &(TOP.tb_cache__DOT__dut__DOT__set_ptr), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,6,0);
    __Vscopep_tb_cache__dut->varInsert("state", &(TOP.tb_cache__DOT__dut__DOT__state), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_tb_cache__dut->varInsert("write_data", &(TOP.tb_cache__DOT__dut__DOT__write_data), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_tb_cache__dut->varInsert("write_enable", &(TOP.tb_cache__DOT__dut__DOT__write_enable), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
}

Vtop__Syms::~Vtop__Syms() {
    // Tear down scope hierarchy
    __Vhier.remove(0, __Vscopep_tb_cache);
    __Vhier.remove(__Vscopep_tb_cache, __Vscopep_tb_cache__axi);
    __Vhier.remove(__Vscopep_tb_cache, __Vscopep_tb_cache__dut);
    // Clear keys from hierarchy map after values have been removed
    __Vhier.clear();
    // Tear down scopes
    VL_DO_CLEAR(delete __Vscopep_tb_cache, __Vscopep_tb_cache = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_cache__axi, __Vscopep_tb_cache__axi = nullptr);
    VL_DO_CLEAR(delete __Vscopep_tb_cache__dut, __Vscopep_tb_cache__dut = nullptr);
    // Tear down sub module instances
    TOP__tb_cache__DOT__axi.dtor();
}
