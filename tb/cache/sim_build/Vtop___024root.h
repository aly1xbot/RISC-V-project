// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
class Vtop_axi_if;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final {
  public:
    // CELLS
    Vtop_axi_if* __PVT__tb_cache__DOT__axi;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_cache__DOT__clk;
    CData/*0:0*/ tb_cache__DOT__rst_n;
    CData/*0:0*/ tb_cache__DOT__aclk;
    CData/*0:0*/ tb_cache__DOT__read_enable;
    CData/*0:0*/ tb_cache__DOT__write_enable;
    CData/*3:0*/ tb_cache__DOT__byte_enable;
    CData/*0:0*/ tb_cache__DOT__cache_stall;
    CData/*0:0*/ tb_cache__DOT__dut__DOT__clk;
    CData/*0:0*/ tb_cache__DOT__dut__DOT__rst_n;
    CData/*0:0*/ tb_cache__DOT__dut__DOT__aclk;
    CData/*0:0*/ tb_cache__DOT__dut__DOT__read_enable;
    CData/*0:0*/ tb_cache__DOT__dut__DOT__write_enable;
    CData/*3:0*/ tb_cache__DOT__dut__DOT__byte_enable;
    CData/*0:0*/ tb_cache__DOT__dut__DOT__cache_stall;
    CData/*0:0*/ tb_cache__DOT__dut__DOT__cache_valid;
    CData/*0:0*/ tb_cache__DOT__dut__DOT__next_cache_valid;
    CData/*0:0*/ tb_cache__DOT__dut__DOT__cache_dirty;
    CData/*0:0*/ tb_cache__DOT__dut__DOT__next_cache_dirty;
    CData/*6:0*/ tb_cache__DOT__dut__DOT__set_ptr;
    CData/*6:0*/ tb_cache__DOT__dut__DOT__next_set_ptr;
    CData/*0:0*/ tb_cache__DOT__dut__DOT__actual_write_enable;
    CData/*6:0*/ tb_cache__DOT__dut__DOT__req_index;
    CData/*0:0*/ tb_cache__DOT__dut__DOT__hit;
    CData/*2:0*/ tb_cache__DOT__dut__DOT__state;
    CData/*2:0*/ tb_cache__DOT__dut__DOT__next_state;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VicoPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_cache__DOT__dut__DOT__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ tb_cache__DOT__address;
    IData/*31:0*/ tb_cache__DOT__write_data;
    IData/*31:0*/ tb_cache__DOT__read_data;
    IData/*31:0*/ tb_cache__DOT__dut__DOT__address;
    IData/*31:0*/ tb_cache__DOT__dut__DOT__write_data;
    IData/*31:0*/ tb_cache__DOT__dut__DOT__read_data;
    VlWide<128>/*4095:0*/ tb_cache__DOT__dut__DOT__cache_data;
    IData/*22:0*/ tb_cache__DOT__dut__DOT__cache_block_tag;
    IData/*22:0*/ tb_cache__DOT__dut__DOT__req_block_tag;
    IData/*31:0*/ tb_cache__DOT__dut__DOT__byte_enable_mask;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr IData/*31:0*/ tb_cache__DOT__dut__DOT__CACHE_SIZE = 0x00000080U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* namep);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
