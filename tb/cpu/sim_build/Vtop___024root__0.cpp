// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VlCoroutine Vtop___024root___eval_initial__TOP__Vtiming__0(Vtop___024root* vlSelf);
VlCoroutine Vtop___024root___eval_initial__TOP__Vtiming__1(Vtop___024root* vlSelf);
VlCoroutine Vtop___024root___eval_initial__TOP__Vtiming__2(Vtop___024root* vlSelf);
void Vtop_axi_if___eval_initial__TOP__cpu_test_harness__DOT__m_axi(Vtop_axi_if* vlSelf);
void Vtop_axi_if___eval_initial__TOP__cpu_test_harness__DOT__core__DOT__m_axi_data(Vtop_axi_if* vlSelf);

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_READMEM_N(true, 32, 2048, 0, "test_imemory.hex"s
                 ,  &(vlSelfRef.cpu_test_harness__DOT__ram)
                 , 0U, ~0ULL);
    VL_READMEM_N(true, 32, 2048, 0, "test_dmemory.hex"s
                 ,  &(vlSelfRef.cpu_test_harness__DOT__ram)
                 , 0x00000400U, ~0ULL);
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__read_enable = 1U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__write_data = 0U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__write_enable = 0U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__flush = 0U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__byte_enable = 0U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__actual_write_enable = 0U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__byte_enable_mask = 0U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__invalidate = 0U;
    Vtop___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtop___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtop___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    Vtop_axi_if___eval_initial__TOP__cpu_test_harness__DOT__m_axi((&vlSymsp->TOP__cpu_test_harness__DOT__m_axi));
    Vtop_axi_if___eval_initial__TOP__cpu_test_harness__DOT__core__DOT__m_axi_data((&vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data));
    Vtop_axi_if___eval_initial__TOP__cpu_test_harness__DOT__core__DOT__m_axi_data((&vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst));
}

VlCoroutine Vtop___024root___eval_initial__TOP__Vtiming__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cpu_test_harness__DOT__clk = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "/Users/luokai/Documents/GitHub/RISC-V-project/tb/cpu/cpu_harness.sv", 
                                             126);
        vlSelfRef.cpu_test_harness__DOT__clk = (1U 
                                                & (~ (IData)(vlSelfRef.cpu_test_harness__DOT__clk)));
    }
    co_return;
}

VlCoroutine Vtop___024root___eval_initial__TOP__Vtiming__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cpu_test_harness__DOT__rst_n = 0U;
    vlSelfRef.cpu_test_harness__DOT__aresetn = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002ee0ULL, 
                                         nullptr, "/Users/luokai/Documents/GitHub/RISC-V-project/tb/cpu/cpu_harness.sv", 
                                         133);
    vlSelfRef.cpu_test_harness__DOT__rst_n = 1U;
    vlSelfRef.cpu_test_harness__DOT__aresetn = 1U;
    co_return;
}

VlCoroutine Vtop___024root___eval_initial__TOP__Vtiming__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x00000000000032c8ULL, 
                                         nullptr, "/Users/luokai/Documents/GitHub/RISC-V-project/tb/cpu/cpu_harness.sv", 
                                         161);
    vlSelfRef.cpu_test_harness__DOT__unnamedblk1__DOT__preload_index = 0U;
    while (VL_GTS_III(32, 0x00000080U, vlSelfRef.cpu_test_harness__DOT__unnamedblk1__DOT__preload_index)) {
        VL_ASSIGNSEL_WI(4096, 32, (0x00000fffU & VL_SHIFTL_III(12,32,32, vlSelfRef.cpu_test_harness__DOT__unnamedblk1__DOT__preload_index, 5U)), vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data, vlSelfRef.cpu_test_harness__DOT__ram
                        [(0x000007ffU & vlSelfRef.cpu_test_harness__DOT__unnamedblk1__DOT__preload_index)]);
        VL_ASSIGNSEL_WI(4096, 32, (0x00000fffU & VL_SHIFTL_III(12,32,32, vlSelfRef.cpu_test_harness__DOT__unnamedblk1__DOT__preload_index, 5U)), vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data, vlSelfRef.cpu_test_harness__DOT__ram
                        [(0x000007ffU & ((IData)(0x0400U) 
                                         + vlSelfRef.cpu_test_harness__DOT__unnamedblk1__DOT__preload_index))]);
        vlSelfRef.cpu_test_harness__DOT__unnamedblk1__DOT__preload_index 
            = ((IData)(1U) + vlSelfRef.cpu_test_harness__DOT__unnamedblk1__DOT__preload_index);
    }
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_block_tag = 0U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_valid = 1U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_dirty = 0U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_block_tag = 8U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_valid = 1U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_dirty = 0U;
    co_return;
}

void Vtop___024root___eval_triggers_vec__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers_vec__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vilp1;
    // Body
    vlSelfRef.clk = vlSelfRef.cpu_test_harness__DOT__clk;
    vlSelfRef.rst_n = vlSelfRef.cpu_test_harness__DOT__rst_n;
    vlSelfRef.aresetn = vlSelfRef.cpu_test_harness__DOT__aresetn;
    vlSelfRef.cpu_test_harness__DOT__m_axi_awready 
        = vlSelfRef.m_axi_awready;
    vlSelfRef.cpu_test_harness__DOT__m_axi_wready = vlSelfRef.m_axi_wready;
    vlSelfRef.cpu_test_harness__DOT__m_axi_bid = vlSelfRef.m_axi_bid;
    vlSelfRef.cpu_test_harness__DOT__m_axi_bresp = vlSelfRef.m_axi_bresp;
    vlSelfRef.cpu_test_harness__DOT__m_axi_bvalid = vlSelfRef.m_axi_bvalid;
    vlSelfRef.cpu_test_harness__DOT__m_axi_arready 
        = vlSelfRef.m_axi_arready;
    vlSelfRef.cpu_test_harness__DOT__m_axi_rid = vlSelfRef.m_axi_rid;
    vlSelfRef.cpu_test_harness__DOT__m_axi_rdata = vlSelfRef.m_axi_rdata;
    vlSelfRef.cpu_test_harness__DOT__m_axi_rresp = vlSelfRef.m_axi_rresp;
    vlSelfRef.cpu_test_harness__DOT__m_axi_rlast = vlSelfRef.m_axi_rlast;
    vlSelfRef.cpu_test_harness__DOT__m_axi_rvalid = vlSelfRef.m_axi_rvalid;
    vlSelfRef.cpu_test_harness__DOT__pc = vlSelfRef.cpu_test_harness__DOT__core__DOT__pc;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__debug_pc 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__pc;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__trap_pc 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__pc;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__flush_done 
        = ((~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_dirty)) 
           & (0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__state)));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__invalidate_done 
        = ((~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_valid)) 
           & (0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__state)));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__invalidate_done 
        = ((~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_valid)) 
           & (0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__state)));
    vlSelfRef.cpu_test_harness__DOT__aclk = vlSelfRef.cpu_test_harness__DOT__clk;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__set_ptr_out 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__set_ptr;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__set_ptr_out 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__set_ptr;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__rst_n 
        = vlSelfRef.cpu_test_harness__DOT__rst_n;
    vlSymsp->TOP__cpu_test_harness__DOT__m_axi.rdata 
        = vlSelfRef.cpu_test_harness__DOT__ram[(0x000007ffU 
                                                & (vlSelfRef.cpu_test_harness__DOT__read_addr 
                                                   >> 2U))];
    vlSelfRef.cpu_test_harness__DOT__core__DOT__clk 
        = vlSelfRef.cpu_test_harness__DOT__clk;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__flush_done 
        = ((~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_dirty)) 
           & (0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__state)));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__pc_plus_four 
        = ((IData)(4U) + vlSelfRef.cpu_test_harness__DOT__core__DOT__pc);
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[0U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[0U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[1U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[1U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[2U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[2U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[3U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[3U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[4U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[4U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[5U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[5U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[6U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[6U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[7U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[7U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[8U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[8U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[9U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[9U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[10U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[10U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[11U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[11U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[12U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[12U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[13U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[13U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[14U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[14U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[15U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[15U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[16U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[16U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[17U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[17U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[18U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[18U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[19U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[19U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[20U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[20U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[21U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[21U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[22U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[22U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[23U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[23U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[24U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[24U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[25U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[25U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[26U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[26U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[27U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[27U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[28U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[28U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[29U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[29U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[30U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[30U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[31U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[31U];
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x0000007fU)) {
        vlSelfRef.cpu_test_harness__DOT__data_memory__DOT__mem[__Vilp1] 
            = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data
            [__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_state 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__state;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__invalidate 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__fence_i_request;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__address 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__pc;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_state 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__state;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache_invalidate_done 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__invalidate_done;
    vlSelfRef.aclk = vlSelfRef.cpu_test_harness__DOT__aclk;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_set_ptr 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__set_ptr_out;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_set_ptr 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__set_ptr_out;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__rst_n 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__rst_n;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__rst_n 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__rst_n;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__rst_n 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__rst_n;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__clk 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__clk;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__clk 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__clk;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__clk 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__clk;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__aclk 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__clk;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__aclk 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__clk;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache_flush_done 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__flush_done;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__d_cache_state 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_state;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__req_index 
        = (0x0000007fU & (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__address 
                          >> 2U));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__req_block_tag 
        = (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__address 
           >> 9U);
    vlSelfRef.cpu_test_harness__DOT__core__DOT__i_cache_state 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_state;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__debug_d_set_ptr 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_set_ptr;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__debug_i_set_ptr 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_set_ptr;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__debug_d_cache_state 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__d_cache_state;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__arbitrer__DOT__d_cache_state 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__d_cache_state;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__hit 
        = ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_valid) 
           & (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__req_block_tag 
              == vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_block_tag));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__debug_i_cache_state 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__i_cache_state;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__arbitrer__DOT__i_cache_state 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__i_cache_state;
    vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.bid = 0U;
    vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rid = 0U;
    vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rdata = 0U;
    vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rresp = 0U;
    if ((0U != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__arbitrer__DOT__i_cache_state))) {
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.bid 
            = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.bid;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.bid = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rid 
            = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.rid;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rid = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rdata 
            = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.rdata;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rdata = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rresp 
            = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.rresp;
    } else {
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.bid = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rid = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rdata = 0U;
    }
    vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rresp = 0U;
    vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awlen = 0x7fU;
    vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awsize = 2U;
    vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awburst = 1U;
    vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arlen = 0x7fU;
    vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arsize = 2U;
    vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arburst = 1U;
    vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awid = 0U;
    vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arid = 0U;
    vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wstrb = 0x0fU;
    vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.bresp = 0U;
    if ((0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__arbitrer__DOT__i_cache_state))) {
        if (((0U != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__arbitrer__DOT__d_cache_state)) 
             & (0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__arbitrer__DOT__i_cache_state)))) {
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.bid 
                = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.bid;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rid 
                = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.rid;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rdata 
                = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.rdata;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rresp 
                = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.rresp;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.bresp 
                = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.bresp;
        }
    }
    vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.bresp = 0U;
    if ((0U != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__arbitrer__DOT__i_cache_state))) {
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awlen 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.awlen;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awsize 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.awsize;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awburst 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.awburst;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arlen 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.arlen;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arsize 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.arsize;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arburst 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.arburst;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awid 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.awid;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arid 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.arid;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wstrb 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.wstrb;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.bresp 
            = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.bresp;
    } else if (((0U != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__arbitrer__DOT__d_cache_state)) 
                & (0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__arbitrer__DOT__i_cache_state)))) {
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awlen 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.awlen;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awsize 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.awsize;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awburst 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.awburst;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arlen 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.arlen;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arsize 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.arsize;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arburst 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.arburst;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awid 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.awid;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arid 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.arid;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wstrb 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.wstrb;
    }
    vlSelfRef.cpu_test_harness__DOT__m_axi_awlen = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awlen;
    vlSelfRef.cpu_test_harness__DOT__m_axi_awsize = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awsize;
    vlSelfRef.cpu_test_harness__DOT__m_axi_awburst 
        = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awburst;
    vlSelfRef.cpu_test_harness__DOT__m_axi_arlen = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arlen;
    vlSelfRef.cpu_test_harness__DOT__m_axi_arsize = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arsize;
    vlSelfRef.cpu_test_harness__DOT__m_axi_arburst 
        = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arburst;
    vlSelfRef.cpu_test_harness__DOT__m_axi_awid = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awid;
    vlSelfRef.cpu_test_harness__DOT__m_axi_arid = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arid;
    vlSelfRef.cpu_test_harness__DOT__m_axi_wstrb = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wstrb;
    vlSelfRef.m_axi_awlen = vlSelfRef.cpu_test_harness__DOT__m_axi_awlen;
    vlSelfRef.m_axi_awsize = vlSelfRef.cpu_test_harness__DOT__m_axi_awsize;
    vlSelfRef.m_axi_awburst = vlSelfRef.cpu_test_harness__DOT__m_axi_awburst;
    vlSelfRef.m_axi_arlen = vlSelfRef.cpu_test_harness__DOT__m_axi_arlen;
    vlSelfRef.m_axi_arsize = vlSelfRef.cpu_test_harness__DOT__m_axi_arsize;
    vlSelfRef.m_axi_arburst = vlSelfRef.cpu_test_harness__DOT__m_axi_arburst;
    vlSelfRef.m_axi_awid = vlSelfRef.cpu_test_harness__DOT__m_axi_awid;
    vlSelfRef.m_axi_arid = vlSelfRef.cpu_test_harness__DOT__m_axi_arid;
    vlSelfRef.m_axi_wstrb = vlSelfRef.cpu_test_harness__DOT__m_axi_wstrb;
}

extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h039306e2_0;
extern const VlUnpacked<IData/*31:0*/, 16> Vtop__ConstPool__TABLE_h523ce058_0;

void Vtop___024root___ico_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    IData/*31:0*/ __VdfgRegularize_hebeb780c_0_3;
    __VdfgRegularize_hebeb780c_0_3 = 0;
    // Body
    vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.awready = 0U;
    if ((0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__arbitrer__DOT__i_cache_state))) {
        if (((0U != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__arbitrer__DOT__d_cache_state)) 
             & (0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__arbitrer__DOT__i_cache_state)))) {
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.awready 
                = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awready;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.awready = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.wready = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.wready 
                = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wready;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.wready = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rvalid 
                = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.rvalid;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.arready = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.arready 
                = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arready;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.arready = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.bvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.bvalid 
                = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.bvalid;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.bvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rlast = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rlast 
                = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.rlast;
        } else {
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.awready = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.wready = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.wready = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.arready = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.arready = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.bvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.bvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rlast = 0U;
        }
    } else {
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.awready = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.wready = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.wready = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rvalid = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rvalid = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.arready = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.arready = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.bvalid = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.bvalid = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rlast = 0U;
    }
    vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rlast = 0U;
    vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wdata = 0U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_state 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__state;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_cache_valid 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_valid;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_cache_dirty 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_dirty;
    vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.wlast = 0U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_set_ptr 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__set_ptr;
    if ((0U != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__arbitrer__DOT__i_cache_state))) {
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.awready 
            = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awready;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.wready 
            = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wready;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rvalid 
            = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.rvalid;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.arready 
            = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arready;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.bvalid 
            = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.bvalid;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rlast 
            = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.rlast;
    }
    if (VL_UNLIKELY(((8U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__state))))) {
        VL_WRITEF_NX("CACHE FSM STATE ERROR\n",0);
    } else if ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__state))) {
        if (VL_UNLIKELY(((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__state))))) {
            VL_WRITEF_NX("CACHE FSM STATE ERROR\n",0);
        } else if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__state))) {
            if (vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rvalid) {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_set_ptr 
                    = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__set_ptr)));
                if (vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rlast) {
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_state = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_cache_valid = 1U;
                }
            }
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.awvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.wvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.bready = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.arvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rready = 1U;
        } else {
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.araddr 
                = (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__req_block_tag 
                   << 9U);
            if (vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.arready) {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_state = 5U;
            }
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.awvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.wvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.bready = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.arvalid = 1U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rready = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__state))) {
            if (((IData)(vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.bvalid) 
                 & (0U == (IData)(vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.bresp)))) {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_cache_dirty = 0U;
                vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_state 
                    = ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__flush_pending)
                        ? 0U : 4U);
            } else if (VL_UNLIKELY((((IData)(vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.bvalid) 
                                     & (0U != (IData)(vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.bresp)))))) {
                VL_WRITEF_NX("ERROR WRITING TO MAIN MEMORY\n",0);
            }
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.awvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.wvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.bready = 1U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.arvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rready = 0U;
        } else {
            if (vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.wready) {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_set_ptr 
                    = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__set_ptr)));
            }
            if ((0x7fU == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__set_ptr))) {
                vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.wlast = 1U;
                if (vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.wready) {
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_state = 3U;
                }
            }
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.awvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.wvalid = 1U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.bready = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.arvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rready = 0U;
        }
    } else if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__state))) {
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.awaddr 
            = (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_block_tag 
               << 9U);
        if (vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.awready) {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_state = 2U;
        }
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.awvalid = 1U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.wvalid = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.bready = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.arvalid = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rready = 0U;
    } else {
        if (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__invalidate) {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_state = 0U;
        } else if (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__hit) {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__read_data 
                = (((0U == (0x0000001fU & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__req_index), 5U)))
                     ? 0U : (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data
                             [(((IData)(0x0000001fU) 
                                + (0x00000fffU & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__req_index), 5U))) 
                               >> 5U)] << ((IData)(0x00000020U) 
                                           - (0x0000001fU 
                                              & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__req_index), 5U))))) 
                   | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data
                      [(0x0000007fU & (VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__req_index), 5U) 
                                       >> 5U))] >> 
                      (0x0000001fU & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__req_index), 5U))));
        } else if ((1U & (~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__hit)))) {
            if (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_dirty) {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_state = 1U;
            } else if ((1U & (~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_dirty)))) {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_state = 4U;
            }
        }
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.awvalid = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.wvalid = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.bready = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.arvalid = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rready = 0U;
        vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_set_ptr = 0U;
    }
    if ((0U != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__arbitrer__DOT__i_cache_state))) {
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wdata 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.wdata;
    } else if (((0U != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__arbitrer__DOT__d_cache_state)) 
                & (0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__arbitrer__DOT__i_cache_state)))) {
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wdata 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.wdata;
    }
    vlSelfRef.cpu_test_harness__DOT__m_axi_wdata = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wdata;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_set_ptr_out 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_set_ptr;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__comb_stall 
        = (1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__hit) 
                    & (0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_state)))));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instruction 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__read_data;
    vlSelfRef.m_axi_wdata = vlSelfRef.cpu_test_harness__DOT__m_axi_wdata;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_next_set_ptr 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_set_ptr_out;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_stall 
        = ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__comb_stall) 
           | (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__seq_stall));
    vlSelfRef.cpu_test_harness__DOT__instruction = vlSelfRef.cpu_test_harness__DOT__core__DOT__instruction;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__debug_instruction 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__instruction;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__shamt 
        = (0x0000001fU & (vlSelfRef.cpu_test_harness__DOT__core__DOT__instruction 
                          >> 0x00000014U));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__dest_reg 
        = (0x0000001fU & (vlSelfRef.cpu_test_harness__DOT__core__DOT__instruction 
                          >> 7U));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__system_imm 
        = (vlSelfRef.cpu_test_harness__DOT__core__DOT__instruction 
           >> 0x00000014U);
    vlSelfRef.cpu_test_harness__DOT__core__DOT__func7 
        = (vlSelfRef.cpu_test_harness__DOT__core__DOT__instruction 
           >> 0x00000019U);
    vlSelfRef.cpu_test_harness__DOT__core__DOT__source_reg1 
        = (0x0000001fU & (vlSelfRef.cpu_test_harness__DOT__core__DOT__instruction 
                          >> 0x0000000fU));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__raw_imm 
        = (vlSelfRef.cpu_test_harness__DOT__core__DOT__instruction 
           >> 7U);
    vlSelfRef.cpu_test_harness__DOT__core__DOT__f3 
        = (7U & (vlSelfRef.cpu_test_harness__DOT__core__DOT__instruction 
                 >> 0x0000000cU));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__source_reg2 
        = (0x0000001fU & (vlSelfRef.cpu_test_harness__DOT__core__DOT__instruction 
                          >> 0x00000014U));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__op 
        = (0x0000007fU & vlSelfRef.cpu_test_harness__DOT__core__DOT__instruction);
    vlSelfRef.cpu_test_harness__DOT__core__DOT__debug_i_next_set_ptr 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_next_set_ptr;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__i_cache_stall 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_stall;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__shamt 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__shamt;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__address3 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__dest_reg;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__system_imm 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__system_imm;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func7 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__func7;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__address1 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__source_reg1;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__raw_imm;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__f3 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__f3;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__f3 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__f3;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__f3;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__address2 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__source_reg2;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__op;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__debug_i_cache_stall 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__i_cache_stall;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__read_data1 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers
        [vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__address1];
    vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__sign_extend 
        = (1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__f3) 
                    >> 2U)));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__read_data2 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers
        [vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__address2];
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__fence_i = 0U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__trap_cause = 0U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write = 0U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__jump = 0U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__write_back_source = 0U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__trap_valid = 0U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__branch = 0U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__second_add_source = 0U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__fence = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                    if ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                        if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                            if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                                if ((0U != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3))) {
                                    if ((1U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3))) {
                                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__fence_i = 1U;
                                    }
                                }
                                if ((0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3))) {
                                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__fence = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_read = 0U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_write = 0U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_source = 0U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
    if ((0x00000040U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
        if ((0x00000020U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
            if ((0x00000010U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                            if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                                if (((0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3)) 
                                     & (0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__system_imm)))) {
                                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__trap_cause = 0x0bU;
                                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__trap_valid = 1U;
                                } else if (((0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3)) 
                                            & (1U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__system_imm)))) {
                                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__trap_cause = 3U;
                                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__trap_valid = 1U;
                                }
                            }
                        }
                    }
                }
                if ((8U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_read = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_write = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
                } else if ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_read = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_write = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
                } else if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                    if ((1U & (~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op)))) {
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write = 0U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_read = 0U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_write = 0U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
                    }
                } else {
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_read = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_write = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
                }
            } else {
                if ((8U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                    if ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                        if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                            if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write = 1U;
                                if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                              >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                                  >> 3U)))) {
                                        if ((0U != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3))) {
                                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write = 0U;
                                        }
                                    }
                                }
                                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 3U;
                                if ((8U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 3U;
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                                   >> 3U)))) {
                                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
                                }
                            } else {
                                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write = 0U;
                                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
                            }
                            if ((1U & (~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op)))) {
                                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                            }
                        } else {
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write = 0U;
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
                        }
                    } else {
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write = 0U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
                    }
                } else if ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                    if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                        if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write = 1U;
                            if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                              >> 3U)))) {
                                    if ((0U != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3))) {
                                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write = 0U;
                                    }
                                }
                            }
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 3U;
                            if ((8U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 3U;
                            } else if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                                 >> 3U)))) {
                                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
                            }
                        } else {
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write = 0U;
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
                        }
                        if ((1U & (~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op)))) {
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                        }
                    } else {
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write = 0U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
                    }
                } else {
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write = 0U;
                    if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                        if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 1U;
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 2U;
                        } else {
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
                        }
                    } else {
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
                    }
                }
                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_read = 0U;
                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_write = 0U;
            }
            if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                    if ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                        if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                            if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__jump = 1U;
                                if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                              >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                                  >> 3U)))) {
                                        if ((0U != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3))) {
                                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__jump = 0U;
                                        }
                                    }
                                }
                                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__write_back_source = 2U;
                                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__branch = 0U;
                                if ((8U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__second_add_source = 0U;
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                                   >> 3U)))) {
                                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__second_add_source = 2U;
                                }
                                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_source = 0U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                    if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                        if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__jump = 1U;
                            if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                              >> 3U)))) {
                                    if ((0U != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3))) {
                                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__jump = 0U;
                                    }
                                }
                            }
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__write_back_source = 2U;
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__branch = 0U;
                            if ((8U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__second_add_source = 0U;
                            } else if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                                 >> 3U)))) {
                                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__second_add_source = 2U;
                            }
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_source = 0U;
                        }
                    }
                } else if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                    if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__branch = 1U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_source = 0U;
                    }
                }
            }
        } else {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write = 0U;
            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_read = 0U;
            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_write = 0U;
            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
        }
    } else if ((0x00000020U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write 
            = ((1U & ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                      >> 4U)) && ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                            >> 3U))) 
                                  && ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))
                                       ? ((1U & ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op)))
                                       : ((1U & ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))))));
        if ((0x00000010U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
            if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                    if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                        if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__jump = 0U;
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__write_back_source = 3U;
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__branch = 0U;
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__second_add_source = 1U;
                        }
                    }
                } else if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                    if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__write_back_source = 0U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__branch = 0U;
                    }
                }
                if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                        if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_source = 0U;
                        }
                    }
                }
            }
            if ((8U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
            } else if ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                    if ((1U & (~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op)))) {
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                    }
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source 
                        = ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))
                            ? 4U : 0U);
                } else {
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
                }
            } else if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op 
                    = ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))
                        ? 2U : 0U);
                if ((1U & (~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op)))) {
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
                }
            } else {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
            }
        } else {
            if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                        if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__branch = 0U;
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_source = 1U;
                        }
                    }
                }
            }
            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source 
                = ((8U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))
                    ? 0U : ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))
                             ? 0U : ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))
                                      ? ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))
                                          ? 1U : 0U)
                                      : 0U)));
        }
        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_read = 0U;
        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_write 
            = ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                         >> 4U))) && ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                                >> 3U))) 
                                      && ((1U & (~ 
                                                 ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                                  >> 2U))) 
                                          && ((1U & 
                                               ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                                >> 1U)) 
                                              && (1U 
                                                  & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))))));
    } else if ((0x00000010U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write 
            = ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                         >> 3U))) && ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))
                                       ? ((1U & ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op)))
                                       : ((1U & ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                                 >> 1U)) 
                                          && ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op)) 
                                              && (1U 
                                                  & (~ 
                                                     (((1U 
                                                        == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3)) 
                                                       & (0U 
                                                          != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func7))) 
                                                      | (((5U 
                                                           == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3)) 
                                                          & (0U 
                                                             != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func7))) 
                                                         & (0x20U 
                                                            != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func7))))))))));
        if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                    if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__jump = 0U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__write_back_source = 3U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__branch = 0U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__second_add_source = 0U;
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__jump = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__write_back_source = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__branch = 0U;
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                    if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_source = 1U;
                    }
                }
            }
        }
        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_read = 0U;
        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_write = 0U;
        if ((8U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
        } else if ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
            if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                if ((1U & (~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op)))) {
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                }
                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source 
                    = ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))
                        ? 4U : 0U);
            } else {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
            }
        } else {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op 
                = ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))
                    ? ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))
                        ? 2U : 0U) : 0U);
            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
        }
    } else {
        if ((8U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
            if ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                    if ((1U & (~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op)))) {
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write = 0U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_read = 0U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_write = 0U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
                    }
                } else {
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_read = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_write = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
                }
            } else {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write = 0U;
                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_read = 0U;
                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_write = 0U;
                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
            }
        } else {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write 
                = ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                             >> 2U))) && ((1U & ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))));
            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_read 
                = ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                             >> 2U))) && ((1U & ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))));
            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_write = 0U;
            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
        }
        if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                    if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__write_back_source = 1U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__branch = 0U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_source = 1U;
                    }
                }
            }
        }
    }
    vlSelfRef.cpu_test_harness__DOT__core__DOT__read_reg1 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__read_data1;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__read_reg2 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__read_data2;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__fence_i 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__fence_i;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__trap_cause 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__trap_cause;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__reg_write 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__write_back_source 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__write_back_source;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control_trap_valid 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__trap_valid;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__second_add_source 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__second_add_source;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__fence 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__fence;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__mem_read_enable 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_read;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__mem_write 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_write;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_control = 0U;
    if ((0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op))) {
        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_control = 0U;
    } else if ((1U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op))) {
        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_control 
            = ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3))
                ? ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3))
                    ? 7U : 5U) : ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3))
                                   ? 0U : 1U));
    } else if ((2U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op))) {
        if ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3))) {
            if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3))) {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_control 
                    = ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3))
                        ? 2U : 3U);
            } else if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3))) {
                if ((0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func7))) {
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_control = 6U;
                } else if ((0x20U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func7))) {
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_control = 9U;
                }
            } else {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_control = 8U;
            }
        } else {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_control 
                = ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3))
                    ? ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3))
                        ? 7U : 5U) : ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3))
                                       ? 4U : ((0x33U 
                                                == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))
                                                ? (
                                                   (0x20U 
                                                    == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func7))
                                                    ? 1U
                                                    : 0U)
                                                : 0U)));
        }
    } else {
        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_control = 0U;
    }
    vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_source 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_source;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__imm_source 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src1 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__read_reg1;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__reg_read 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__read_reg2;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__shift_amount 
        = (0x0000001fU & ((0x13U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__op))
                           ? (vlSelfRef.cpu_test_harness__DOT__core__DOT__instruction 
                              >> 0x00000014U) : (vlSelfRef.cpu_test_harness__DOT__core__DOT__read_reg2 
                                                 & (- (IData)(
                                                              (0x33U 
                                                               == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__op)))))));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__trap_valid 
        = ((~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__i_cache_stall)) 
           & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control_trap_valid));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__flush 
        = ((~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__i_cache_stall)) 
           & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__fence));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_read_enable 
        = ((~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__i_cache_stall)) 
           & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__mem_read_enable));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_write_enable 
        = ((~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__i_cache_stall)) 
           & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__mem_write));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_control 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_control;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__imm_source 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__imm_source;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__shamt 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__shift_amount;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__read_enable 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_read_enable;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__write_enable 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_write_enable;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_control 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_control;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__immediate 
        = ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__imm_source))
            ? (0xfffff000U & ((- (IData)((1U & (~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__imm_source))))) 
                              & ((vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src 
                                  << 7U) & (- (IData)(
                                                      (1U 
                                                       & (~ 
                                                          ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__imm_source) 
                                                           >> 1U))))))))
            : ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__imm_source))
                ? ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__imm_source))
                    ? (((- (IData)((1U & (vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src 
                                          >> 0x00000018U)))) 
                        << 0x00000014U) | ((((0x000001feU 
                                              & (vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src 
                                                 >> 4U)) 
                                             | (1U 
                                                & (vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src 
                                                   >> 0x0000000dU))) 
                                            << 0x0000000bU) 
                                           | (0x000007feU 
                                              & (vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src 
                                                 >> 0x0000000dU))))
                    : (((- (IData)((1U & (vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src 
                                          >> 0x00000018U)))) 
                        << 0x0000000cU) | ((0x00000800U 
                                            & (vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src 
                                               << 0x0000000bU)) 
                                           | ((0x000007e0U 
                                               & (vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src 
                                                  >> 0x0000000dU)) 
                                              | (0x0000001eU 
                                                 & vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src)))))
                : (((- (IData)((1U & (vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src 
                                      >> 0x00000018U)))) 
                    << 0x0000000cU) | (0x00000fffU 
                                       & ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__imm_source))
                                           ? ((0x00000fe0U 
                                               & (vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src 
                                                  >> 0x0000000dU)) 
                                              | (0x0000001fU 
                                                 & vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src))
                                           : (vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src 
                                              >> 0x0000000dU))))));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__immediate 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__immediate;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__pc_plus_second_add 
        = ((0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__second_add_source))
            ? (vlSelfRef.cpu_test_harness__DOT__core__DOT__pc 
               + vlSelfRef.cpu_test_harness__DOT__core__DOT__immediate)
            : ((1U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__second_add_source))
                ? vlSelfRef.cpu_test_harness__DOT__core__DOT__immediate
                : (0xfffffffeU & ((- (IData)((2U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__second_add_source)))) 
                                  & (vlSelfRef.cpu_test_harness__DOT__core__DOT__immediate 
                                     + vlSelfRef.cpu_test_harness__DOT__core__DOT__read_reg1)))));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_src2 
        = ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_source)
            ? vlSelfRef.cpu_test_harness__DOT__core__DOT__immediate
            : vlSelfRef.cpu_test_harness__DOT__core__DOT__read_reg2);
    vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src2 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_src2;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__unsigned_less 
        = (vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src1 
           < vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src2);
    if ((8U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_control))) {
        if ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_control))) {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_result = 0U;
        } else if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_control))) {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_result = 0U;
        } else if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_control))) {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_result 
                = (vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src1 
                   >> (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__shamt));
            if ((vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src1 
                 >> 0x1fU)) {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_result 
                    = (vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_result 
                       | VL_SHIFTL_III(32,32,32, (IData)(0xffffffffU), 
                                       ((IData)(0x00000020U) 
                                        - (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__shamt))));
            }
        } else {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_result 
                = (vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src1 
                   ^ vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src2);
        }
    } else {
        vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_result 
            = ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_control))
                ? ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_control))
                    ? ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_control))
                        ? (vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src1 
                           < vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src2)
                        : (vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src1 
                           >> (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__shamt)))
                    : ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_control))
                        ? (VL_LTS_III(32, vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src1, vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src2)
                            ? 1U : 0U) : (vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src1 
                                          << (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__shamt))))
                : ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_control))
                    ? ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_control))
                        ? (vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src1 
                           | vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src2)
                        : (vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src1 
                           & vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src2))
                    : ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_control))
                        ? ((IData)(1U) + (vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src1 
                                          + (~ vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src2)))
                        : (vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src1 
                           + vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src2))));
    }
    vlSelfRef.cpu_test_harness__DOT__core__DOT__unsigned_less 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__unsigned_less;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__zero 
        = (0U == vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_result);
    vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__last_bit 
        = (1U & vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_result);
    vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_result 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_result;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_unsigned_less 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__unsigned_less;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_zero 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__zero;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__last_bit 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__last_bit;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__alu_result_address 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_result;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__address 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_result;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_unsigned_less 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_unsigned_less;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_zero 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_zero;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_last_bit 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__last_bit;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__offset 
        = (3U & vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__alu_result_address);
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__req_index 
        = (0x0000007fU & (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__address 
                          >> 2U));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__req_block_tag 
        = (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__address 
           >> 9U);
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_last_bit 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_last_bit;
    if ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__f3))) {
        if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__f3) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__f3))) {
                if ((0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__offset))) {
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__data 
                        = (0x0000ffffU & vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__reg_read);
                } else if ((2U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__offset))) {
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__data 
                        = (0xffff0000U & VL_SHIFTL_III(32,32,32, vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__reg_read, 0x00000010U));
                }
            } else {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__data 
                    = ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__offset))
                        ? ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__offset))
                            ? (0xff000000U & VL_SHIFTL_III(32,32,32, vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__reg_read, 0x00000018U))
                            : (0x00ff0000U & VL_SHIFTL_III(32,32,32, vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__reg_read, 0x00000010U)))
                        : ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__offset))
                            ? (0x0000ff00U & VL_SHIFTL_III(32,32,32, vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__reg_read, 8U))
                            : (0x000000ffU & vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__reg_read)));
            }
        }
        vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__byte_enable 
            = ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__f3))
                ? 0U : ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__f3))
                         ? ((0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__offset))
                             ? 3U : ((2U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__offset))
                                      ? 0x0cU : 0U))
                         : ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__offset))
                             ? ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__offset))
                                 ? 8U : 4U) : ((1U 
                                                & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__offset))
                                                ? 2U
                                                : 1U))));
    } else if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__f3))) {
        if ((1U & (~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__f3)))) {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__data 
                = vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__reg_read;
        }
        vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__byte_enable 
            = ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__f3))
                ? 0U : ((0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__offset))
                         ? 0x0fU : 0U));
    } else if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__f3))) {
        if ((0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__offset))) {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__data 
                = (0x0000ffffU & vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__reg_read);
            vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__byte_enable = 3U;
        } else if ((2U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__offset))) {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__data 
                = (0xffff0000U & VL_SHIFTL_III(32,32,32, vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__reg_read, 0x00000010U));
            vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__byte_enable = 0x0cU;
        } else {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__byte_enable = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__offset))) {
        if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__offset))) {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__data 
                = (0xff000000U & VL_SHIFTL_III(32,32,32, vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__reg_read, 0x00000018U));
            vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__byte_enable = 8U;
        } else {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__data 
                = (0x00ff0000U & VL_SHIFTL_III(32,32,32, vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__reg_read, 0x00000010U));
            vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__byte_enable = 4U;
        }
    } else if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__offset))) {
        vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__data 
            = (0x0000ff00U & VL_SHIFTL_III(32,32,32, vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__reg_read, 8U));
        vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__byte_enable = 2U;
    } else {
        vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__data 
            = (0x000000ffU & vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__reg_read);
        vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__byte_enable = 1U;
    }
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__hit 
        = ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_valid) 
           & (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__req_block_tag 
              == vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_block_tag));
    __Vtableidx2 = ((((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_zero) 
                      << 6U) | ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_last_bit) 
                                << 5U)) | (((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__branch) 
                                            << 4U) 
                                           | (((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_unsigned_less) 
                                               << 3U) 
                                              | (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3))));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__assert_branch 
        = Vtop__ConstPool__TABLE_h039306e2_0[__Vtableidx2];
    vlSelfRef.cpu_test_harness__DOT__core__DOT__mem_write_data 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__data;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__mem_byte_enable 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__byte_enable;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__pc_source 
        = ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__jump) 
           | (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__assert_branch));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__write_data 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__mem_write_data;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__be_mask 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__mem_byte_enable;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__byte_enable 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__mem_byte_enable;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__pc_source 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__pc_source;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__valid 
        = (0U != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__be_mask));
    __Vtableidx1 = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__byte_enable;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__byte_enable_mask 
        = Vtop__ConstPool__TABLE_h523ce058_0[__Vtableidx1];
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__actual_write_enable 
        = ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__write_enable) 
           & (0U != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__byte_enable)));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__mem_read_write_back_valid 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__valid;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_state 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__state;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_cache_valid 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_valid;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_cache_dirty 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_dirty;
    vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.wlast = 0U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_set_ptr 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__set_ptr;
    if (VL_UNLIKELY(((8U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__state))))) {
        VL_WRITEF_NX("CACHE FSM STATE ERROR\n",0);
    } else if ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__state))) {
        if (VL_UNLIKELY(((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__state))))) {
            VL_WRITEF_NX("CACHE FSM STATE ERROR\n",0);
        } else if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__state))) {
            if (vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rvalid) {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_set_ptr 
                    = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__set_ptr)));
                if (vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rlast) {
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_state = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_cache_valid = 1U;
                }
            }
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.awvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.wvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.bready = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.arvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rready = 1U;
        } else {
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.araddr 
                = (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__req_block_tag 
                   << 9U);
            if (vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.arready) {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_state = 5U;
            }
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.awvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.wvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.bready = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.arvalid = 1U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rready = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__state))) {
            if (((IData)(vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.bvalid) 
                 & (0U == (IData)(vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.bresp)))) {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_cache_dirty = 0U;
                vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_state 
                    = ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__flush_pending)
                        ? 0U : 4U);
            } else if (VL_UNLIKELY((((IData)(vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.bvalid) 
                                     & (0U != (IData)(vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.bresp)))))) {
                VL_WRITEF_NX("ERROR WRITING TO MAIN MEMORY\n",0);
            }
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.awvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.wvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.bready = 1U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.arvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rready = 0U;
        } else {
            if (vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.wready) {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_set_ptr 
                    = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__set_ptr)));
            }
            if ((0x7fU == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__set_ptr))) {
                vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.wlast = 1U;
                if (vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.wready) {
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_state = 3U;
                }
            }
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.awvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.wvalid = 1U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.bready = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.arvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rready = 0U;
        }
    } else if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__state))) {
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.awaddr 
            = (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_block_tag 
               << 9U);
        if (vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.awready) {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_state = 2U;
        }
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.awvalid = 1U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.wvalid = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.bready = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.arvalid = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rready = 0U;
    } else {
        if (VL_UNLIKELY((((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__read_enable) 
                          & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__write_enable))))) {
            VL_WRITEF_NX("E : CAN't READ WRITE AT THE SAME TIME\n",0);
        } else if ((((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__flush) 
                     & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_valid)) 
                    & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_dirty))) {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_state = 1U;
        } else if (((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__hit) 
                    & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__read_enable))) {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__read_data 
                = (((0U == (0x0000001fU & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__req_index), 5U)))
                     ? 0U : (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data
                             [(((IData)(0x0000001fU) 
                                + (0x00000fffU & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__req_index), 5U))) 
                               >> 5U)] << ((IData)(0x00000020U) 
                                           - (0x0000001fU 
                                              & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__req_index), 5U))))) 
                   | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data
                      [(0x0000007fU & (VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__req_index), 5U) 
                                       >> 5U))] >> 
                      (0x0000001fU & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__req_index), 5U))));
        } else if (((~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__hit)) 
                    & ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__read_enable) 
                       ^ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__actual_write_enable)))) {
            if (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_dirty) {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_state = 1U;
            } else if ((1U & (~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_dirty)))) {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_state = 4U;
            }
        }
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.awvalid = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.wvalid = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.bready = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.arvalid = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rready = 0U;
        vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_set_ptr = 0U;
    }
    vlSelfRef.cpu_test_harness__DOT__core__DOT__wb_valid 
        = ((1U & ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__write_back_source) 
                  >> 1U)) || ((1U & (~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__write_back_source))) 
                              || (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__mem_read_write_back_valid)));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_set_ptr_out 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_set_ptr;
    vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wlast = 0U;
    vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awvalid = 0U;
    vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wvalid = 0U;
    vlSymsp->TOP__cpu_test_harness__DOT__m_axi.bready = 0U;
    vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arvalid = 0U;
    vlSymsp->TOP__cpu_test_harness__DOT__m_axi.rready = 0U;
    vlSymsp->TOP__cpu_test_harness__DOT__m_axi.araddr = 0U;
    vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awaddr = 0U;
    if ((0U != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__arbitrer__DOT__i_cache_state))) {
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wlast 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.wlast;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awvalid 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.awvalid;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wvalid 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.wvalid;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.bready 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.bready;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arvalid 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.arvalid;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.rready 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rready;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.araddr 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.araddr;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awaddr 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.awaddr;
    } else if (((0U != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__arbitrer__DOT__d_cache_state)) 
                & (0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__arbitrer__DOT__i_cache_state)))) {
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wlast 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.wlast;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awvalid 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.awvalid;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wvalid 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.wvalid;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.bready 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.bready;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arvalid 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.arvalid;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.rready 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rready;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.araddr 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.araddr;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awaddr 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.awaddr;
    }
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__comb_stall 
        = ((0U != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_state)) 
           | ((~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__hit)) 
              & ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__read_enable) 
                 | (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__actual_write_enable))));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__mem_read 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__read_data;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_next_set_ptr 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_set_ptr_out;
    vlSelfRef.cpu_test_harness__DOT__m_axi_wlast = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wlast;
    vlSelfRef.cpu_test_harness__DOT__m_axi_awvalid 
        = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awvalid;
    vlSelfRef.cpu_test_harness__DOT__m_axi_wvalid = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wvalid;
    vlSelfRef.cpu_test_harness__DOT__m_axi_bready = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.bready;
    vlSelfRef.cpu_test_harness__DOT__m_axi_arvalid 
        = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arvalid;
    vlSelfRef.cpu_test_harness__DOT__m_axi_rready = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.rready;
    vlSelfRef.cpu_test_harness__DOT__m_axi_araddr = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.araddr;
    vlSelfRef.cpu_test_harness__DOT__m_axi_awaddr = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awaddr;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_stall 
        = ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__comb_stall) 
           | (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__seq_stall));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__mem_data 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__mem_read;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__debug_d_next_set_ptr 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_next_set_ptr;
    vlSelfRef.m_axi_wlast = vlSelfRef.cpu_test_harness__DOT__m_axi_wlast;
    vlSelfRef.m_axi_awvalid = vlSelfRef.cpu_test_harness__DOT__m_axi_awvalid;
    vlSelfRef.m_axi_wvalid = vlSelfRef.cpu_test_harness__DOT__m_axi_wvalid;
    vlSelfRef.m_axi_bready = vlSelfRef.cpu_test_harness__DOT__m_axi_bready;
    vlSelfRef.m_axi_arvalid = vlSelfRef.cpu_test_harness__DOT__m_axi_arvalid;
    vlSelfRef.m_axi_rready = vlSelfRef.cpu_test_harness__DOT__m_axi_rready;
    vlSelfRef.m_axi_araddr = vlSelfRef.cpu_test_harness__DOT__m_axi_araddr;
    vlSelfRef.m_axi_awaddr = vlSelfRef.cpu_test_harness__DOT__m_axi_awaddr;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__d_cache_stall 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_stall;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__mask_apply__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 4U, vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__mask_apply__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__masked_data 
            = (((~ ((IData)(0x000000ffU) << (0x0000001fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__mask_apply__DOT__unnamedblk1__DOT__i)))) 
                & vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__masked_data) 
               | (0x00000000ffffffffULL & (((1U & ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__be_mask) 
                                                   >> 
                                                   (3U 
                                                    & vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__mask_apply__DOT__unnamedblk1__DOT__i)))
                                             ? (0x000000ffU 
                                                & (vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__mem_data 
                                                   >> 
                                                   (0x0000001fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__mask_apply__DOT__unnamedblk1__DOT__i))))
                                             : 0U) 
                                           << (0x0000001fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__mask_apply__DOT__unnamedblk1__DOT__i)))));
        vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__mask_apply__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__mask_apply__DOT__unnamedblk1__DOT__i);
    }
    vlSelfRef.cpu_test_harness__DOT__core__DOT__debug_d_cache_stall 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__d_cache_stall;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__write_enable 
        = ((~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__i_cache_stall)) 
           & ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reg_write) 
              & ((~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__d_cache_stall) 
                     | (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__trap_valid))) 
                 & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__wb_valid))));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__pc_next 
        = (((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__trap_valid) 
            | ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__i_cache_stall) 
               | ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__d_cache_stall) 
                  | ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__fence_i_request) 
                     | ((~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache_flush_done)) 
                        & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__fence))))))
            ? vlSelfRef.cpu_test_harness__DOT__core__DOT__pc
            : ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__pc_source)
                ? vlSelfRef.cpu_test_harness__DOT__core__DOT__pc_plus_second_add
                : vlSelfRef.cpu_test_harness__DOT__core__DOT__pc_plus_four));
    __VdfgRegularize_hebeb780c_0_3 = ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__f3))
                                       ? ((3U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__be_mask))
                                           ? vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__masked_data
                                           : ((0x0cU 
                                               == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__be_mask))
                                               ? VL_SHIFTR_III(32,32,32, vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__masked_data, 0x00000010U)
                                               : vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__masked_data))
                                       : ((8U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__be_mask))
                                           ? ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__be_mask))
                                               ? vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__masked_data
                                               : ((2U 
                                                   & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__be_mask))
                                                   ? vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__masked_data
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__be_mask))
                                                    ? vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__masked_data
                                                    : 
                                                   VL_SHIFTR_III(32,32,32, vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__masked_data, 0x00000018U))))
                                           : ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__be_mask))
                                               ? ((2U 
                                                   & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__be_mask))
                                                   ? vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__masked_data
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__be_mask))
                                                    ? vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__masked_data
                                                    : 
                                                   VL_SHIFTR_III(32,32,32, vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__masked_data, 0x00000010U)))
                                               : ((2U 
                                                   & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__be_mask))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__be_mask))
                                                    ? vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__masked_data
                                                    : 
                                                   VL_SHIFTR_III(32,32,32, vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__masked_data, 8U))
                                                   : vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__masked_data))));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__debug_pc_next 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__pc_next;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__raw_data 
        = ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__f3))
            ? (__VdfgRegularize_hebeb780c_0_3 & (- (IData)(
                                                           (1U 
                                                            & (~ 
                                                               ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__f3) 
                                                                >> 1U))))))
            : ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__f3))
                ? (vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__masked_data 
                   & (- (IData)((1U & (~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__f3))))))
                : __VdfgRegularize_hebeb780c_0_3));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__wb_data 
        = ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__f3))
            ? vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__raw_data
            : ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__f3))
                ? ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__sign_extend)
                    ? (((- (IData)((1U & (vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__raw_data 
                                          >> 0x0000000fU)))) 
                        << 0x00000010U) | (0x0000ffffU 
                                           & vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__raw_data))
                    : vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__raw_data)
                : ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__sign_extend)
                    ? (((- (IData)((1U & (vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__raw_data 
                                          >> 7U)))) 
                        << 8U) | (0x000000ffU & vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__raw_data))
                    : vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__raw_data)));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__mem_read_write_back_data 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__wb_data;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__write_back_data 
        = ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__write_back_source))
            ? ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__write_back_source))
                ? vlSelfRef.cpu_test_harness__DOT__core__DOT__pc_plus_second_add
                : vlSelfRef.cpu_test_harness__DOT__core__DOT__pc_plus_four)
            : ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__write_back_source))
                ? vlSelfRef.cpu_test_harness__DOT__core__DOT__mem_read_write_back_data
                : vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_result));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__write_data 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__write_back_data;
}

void Vtop_axi_if___ico_sequent__TOP__cpu_test_harness__DOT__m_axi__0(Vtop_axi_if* vlSelf);
void Vtop_axi_if___ico_sequent__TOP__cpu_test_harness__DOT__core__DOT__m_axi_data__0(Vtop_axi_if* vlSelf);
void Vtop_axi_if___ico_sequent__TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst__0(Vtop_axi_if* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
        Vtop_axi_if___ico_sequent__TOP__cpu_test_harness__DOT__m_axi__0((&vlSymsp->TOP__cpu_test_harness__DOT__m_axi));
        Vtop_axi_if___ico_sequent__TOP__cpu_test_harness__DOT__core__DOT__m_axi_data__0((&vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data));
        Vtop_axi_if___ico_sequent__TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst__0((&vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst));
        Vtop___024root___ico_sequent__TOP__1(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers_vec__ico(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vtop___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_triggers_vec__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers_vec__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                       << 5U) 
                                                      | (((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__clk) 
                                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cpu_test_harness__DOT__core__DOT__regfile__DOT__clk__0))) 
                                                         << 4U)) 
                                                     | (((((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cpu_test_harness__DOT__core__DOT__data_cache__DOT__clk__0))) 
                                                          << 3U) 
                                                         | (((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__clk) 
                                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__clk__0))) 
                                                            << 2U)) 
                                                        | ((((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__clk) 
                                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cpu_test_harness__DOT__core__DOT__clk__0))) 
                                                            << 1U) 
                                                           | ((IData)(vlSelfRef.cpu_test_harness__DOT__clk) 
                                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cpu_test_harness__DOT__clk__0))))))));
    vlSelfRef.__Vtrigprevexpr___TOP__cpu_test_harness__DOT__clk__0 
        = vlSelfRef.cpu_test_harness__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__cpu_test_harness__DOT__core__DOT__clk__0 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__clk__0 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__cpu_test_harness__DOT__core__DOT__data_cache__DOT__clk__0 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__cpu_test_harness__DOT__core__DOT__regfile__DOT__clk__0 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__clk;
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtop___024root___act_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    IData/*31:0*/ __VdfgRegularize_hebeb780c_0_3;
    __VdfgRegularize_hebeb780c_0_3 = 0;
    IData/*31:0*/ __Vilp1;
    // Body
    vlSelfRef.clk = vlSelfRef.cpu_test_harness__DOT__clk;
    vlSelfRef.rst_n = vlSelfRef.cpu_test_harness__DOT__rst_n;
    vlSelfRef.aresetn = vlSelfRef.cpu_test_harness__DOT__aresetn;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__flush_done 
        = ((~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_dirty)) 
           & (0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__state)));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__invalidate_done 
        = ((~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_valid)) 
           & (0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__state)));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__invalidate_done 
        = ((~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_valid)) 
           & (0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__state)));
    vlSelfRef.cpu_test_harness__DOT__aclk = vlSelfRef.cpu_test_harness__DOT__clk;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__rst_n 
        = vlSelfRef.cpu_test_harness__DOT__rst_n;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__clk 
        = vlSelfRef.cpu_test_harness__DOT__clk;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__flush_done 
        = ((~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_dirty)) 
           & (0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__state)));
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x0000007fU)) {
        vlSelfRef.cpu_test_harness__DOT__data_memory__DOT__mem[__Vilp1] 
            = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data
            [__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__hit 
        = ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_valid) 
           & (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__req_block_tag 
              == vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_block_tag));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache_invalidate_done 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__invalidate_done;
    vlSelfRef.aclk = vlSelfRef.cpu_test_harness__DOT__aclk;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__rst_n 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__rst_n;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__rst_n 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__rst_n;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__rst_n 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__rst_n;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__clk 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__clk;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__clk 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__clk;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__clk 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__clk;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__aclk 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__clk;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__aclk 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__clk;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache_flush_done 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__flush_done;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_state 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__state;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_cache_valid 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_valid;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_cache_dirty 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_dirty;
    vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.wlast = 0U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_set_ptr 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__set_ptr;
    if (VL_UNLIKELY(((8U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__state))))) {
        VL_WRITEF_NX("CACHE FSM STATE ERROR\n",0);
    } else if ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__state))) {
        if (VL_UNLIKELY(((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__state))))) {
            VL_WRITEF_NX("CACHE FSM STATE ERROR\n",0);
        } else if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__state))) {
            if (vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rvalid) {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_set_ptr 
                    = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__set_ptr)));
                if (vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rlast) {
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_state = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_cache_valid = 1U;
                }
            }
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.awvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.wvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.bready = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.arvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rready = 1U;
        } else {
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.araddr 
                = (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__req_block_tag 
                   << 9U);
            if (vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.arready) {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_state = 5U;
            }
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.awvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.wvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.bready = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.arvalid = 1U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rready = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__state))) {
            if (((IData)(vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.bvalid) 
                 & (0U == (IData)(vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.bresp)))) {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_cache_dirty = 0U;
                vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_state 
                    = ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__flush_pending)
                        ? 0U : 4U);
            } else if (VL_UNLIKELY((((IData)(vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.bvalid) 
                                     & (0U != (IData)(vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.bresp)))))) {
                VL_WRITEF_NX("ERROR WRITING TO MAIN MEMORY\n",0);
            }
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.awvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.wvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.bready = 1U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.arvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rready = 0U;
        } else {
            if (vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.wready) {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_set_ptr 
                    = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__set_ptr)));
            }
            if ((0x7fU == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__set_ptr))) {
                vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.wlast = 1U;
                if (vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.wready) {
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_state = 3U;
                }
            }
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.awvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.wvalid = 1U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.bready = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.arvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rready = 0U;
        }
    } else if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__state))) {
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.awaddr 
            = (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_block_tag 
               << 9U);
        if (vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.awready) {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_state = 2U;
        }
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.awvalid = 1U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.wvalid = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.bready = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.arvalid = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rready = 0U;
    } else {
        if (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__invalidate) {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_state = 0U;
        } else if (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__hit) {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__read_data 
                = (((0U == (0x0000001fU & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__req_index), 5U)))
                     ? 0U : (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data
                             [(((IData)(0x0000001fU) 
                                + (0x00000fffU & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__req_index), 5U))) 
                               >> 5U)] << ((IData)(0x00000020U) 
                                           - (0x0000001fU 
                                              & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__req_index), 5U))))) 
                   | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data
                      [(0x0000007fU & (VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__req_index), 5U) 
                                       >> 5U))] >> 
                      (0x0000001fU & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__req_index), 5U))));
        } else if ((1U & (~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__hit)))) {
            if (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_dirty) {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_state = 1U;
            } else if ((1U & (~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_dirty)))) {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_state = 4U;
            }
        }
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.awvalid = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.wvalid = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.bready = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.arvalid = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rready = 0U;
        vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_set_ptr = 0U;
    }
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_set_ptr_out 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_set_ptr;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__comb_stall 
        = (1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__hit) 
                    & (0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_state)))));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instruction 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__read_data;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_next_set_ptr 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_set_ptr_out;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_stall 
        = ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__comb_stall) 
           | (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__seq_stall));
    vlSelfRef.cpu_test_harness__DOT__instruction = vlSelfRef.cpu_test_harness__DOT__core__DOT__instruction;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__debug_instruction 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__instruction;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__shamt 
        = (0x0000001fU & (vlSelfRef.cpu_test_harness__DOT__core__DOT__instruction 
                          >> 0x00000014U));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__dest_reg 
        = (0x0000001fU & (vlSelfRef.cpu_test_harness__DOT__core__DOT__instruction 
                          >> 7U));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__system_imm 
        = (vlSelfRef.cpu_test_harness__DOT__core__DOT__instruction 
           >> 0x00000014U);
    vlSelfRef.cpu_test_harness__DOT__core__DOT__func7 
        = (vlSelfRef.cpu_test_harness__DOT__core__DOT__instruction 
           >> 0x00000019U);
    vlSelfRef.cpu_test_harness__DOT__core__DOT__source_reg1 
        = (0x0000001fU & (vlSelfRef.cpu_test_harness__DOT__core__DOT__instruction 
                          >> 0x0000000fU));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__raw_imm 
        = (vlSelfRef.cpu_test_harness__DOT__core__DOT__instruction 
           >> 7U);
    vlSelfRef.cpu_test_harness__DOT__core__DOT__f3 
        = (7U & (vlSelfRef.cpu_test_harness__DOT__core__DOT__instruction 
                 >> 0x0000000cU));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__source_reg2 
        = (0x0000001fU & (vlSelfRef.cpu_test_harness__DOT__core__DOT__instruction 
                          >> 0x00000014U));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__op 
        = (0x0000007fU & vlSelfRef.cpu_test_harness__DOT__core__DOT__instruction);
    vlSelfRef.cpu_test_harness__DOT__core__DOT__debug_i_next_set_ptr 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_next_set_ptr;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__i_cache_stall 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_stall;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__shamt 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__shamt;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__address3 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__dest_reg;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__system_imm 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__system_imm;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func7 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__func7;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__address1 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__source_reg1;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__raw_imm;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__f3 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__f3;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__f3 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__f3;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__f3;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__address2 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__source_reg2;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__op;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__debug_i_cache_stall 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__i_cache_stall;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__read_data1 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers
        [vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__address1];
    vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__sign_extend 
        = (1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__f3) 
                    >> 2U)));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__read_data2 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers
        [vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__address2];
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__fence_i = 0U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__trap_cause = 0U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write = 0U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__jump = 0U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__write_back_source = 0U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__trap_valid = 0U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__branch = 0U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__second_add_source = 0U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__fence = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                    if ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                        if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                            if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                                if ((0U != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3))) {
                                    if ((1U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3))) {
                                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__fence_i = 1U;
                                    }
                                }
                                if ((0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3))) {
                                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__fence = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_read = 0U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_write = 0U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_source = 0U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
    if ((0x00000040U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
        if ((0x00000020U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
            if ((0x00000010U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                            if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                                if (((0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3)) 
                                     & (0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__system_imm)))) {
                                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__trap_cause = 0x0bU;
                                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__trap_valid = 1U;
                                } else if (((0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3)) 
                                            & (1U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__system_imm)))) {
                                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__trap_cause = 3U;
                                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__trap_valid = 1U;
                                }
                            }
                        }
                    }
                }
                if ((8U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_read = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_write = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
                } else if ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_read = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_write = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
                } else if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                    if ((1U & (~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op)))) {
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write = 0U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_read = 0U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_write = 0U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
                    }
                } else {
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_read = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_write = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
                }
            } else {
                if ((8U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                    if ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                        if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                            if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write = 1U;
                                if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                              >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                                  >> 3U)))) {
                                        if ((0U != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3))) {
                                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write = 0U;
                                        }
                                    }
                                }
                                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 3U;
                                if ((8U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 3U;
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                                   >> 3U)))) {
                                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
                                }
                            } else {
                                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write = 0U;
                                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
                            }
                            if ((1U & (~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op)))) {
                                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                            }
                        } else {
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write = 0U;
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
                        }
                    } else {
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write = 0U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
                    }
                } else if ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                    if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                        if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write = 1U;
                            if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                              >> 3U)))) {
                                    if ((0U != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3))) {
                                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write = 0U;
                                    }
                                }
                            }
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 3U;
                            if ((8U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 3U;
                            } else if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                                 >> 3U)))) {
                                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
                            }
                        } else {
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write = 0U;
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
                        }
                        if ((1U & (~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op)))) {
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                        }
                    } else {
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write = 0U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
                    }
                } else {
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write = 0U;
                    if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                        if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 1U;
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 2U;
                        } else {
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
                        }
                    } else {
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
                    }
                }
                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_read = 0U;
                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_write = 0U;
            }
            if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                    if ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                        if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                            if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__jump = 1U;
                                if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                              >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                                  >> 3U)))) {
                                        if ((0U != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3))) {
                                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__jump = 0U;
                                        }
                                    }
                                }
                                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__write_back_source = 2U;
                                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__branch = 0U;
                                if ((8U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__second_add_source = 0U;
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                                   >> 3U)))) {
                                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__second_add_source = 2U;
                                }
                                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_source = 0U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                    if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                        if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__jump = 1U;
                            if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                              >> 3U)))) {
                                    if ((0U != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3))) {
                                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__jump = 0U;
                                    }
                                }
                            }
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__write_back_source = 2U;
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__branch = 0U;
                            if ((8U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__second_add_source = 0U;
                            } else if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                                 >> 3U)))) {
                                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__second_add_source = 2U;
                            }
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_source = 0U;
                        }
                    }
                } else if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                    if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__branch = 1U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_source = 0U;
                    }
                }
            }
        } else {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write = 0U;
            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_read = 0U;
            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_write = 0U;
            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
        }
    } else if ((0x00000020U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write 
            = ((1U & ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                      >> 4U)) && ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                            >> 3U))) 
                                  && ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))
                                       ? ((1U & ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op)))
                                       : ((1U & ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))))));
        if ((0x00000010U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
            if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                    if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                        if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__jump = 0U;
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__write_back_source = 3U;
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__branch = 0U;
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__second_add_source = 1U;
                        }
                    }
                } else if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                    if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__write_back_source = 0U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__branch = 0U;
                    }
                }
                if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                        if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_source = 0U;
                        }
                    }
                }
            }
            if ((8U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
            } else if ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                    if ((1U & (~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op)))) {
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                    }
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source 
                        = ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))
                            ? 4U : 0U);
                } else {
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
                }
            } else if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op 
                    = ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))
                        ? 2U : 0U);
                if ((1U & (~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op)))) {
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
                }
            } else {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
            }
        } else {
            if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                        if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__branch = 0U;
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_source = 1U;
                        }
                    }
                }
            }
            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source 
                = ((8U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))
                    ? 0U : ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))
                             ? 0U : ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))
                                      ? ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))
                                          ? 1U : 0U)
                                      : 0U)));
        }
        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_read = 0U;
        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_write 
            = ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                         >> 4U))) && ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                                >> 3U))) 
                                      && ((1U & (~ 
                                                 ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                                  >> 2U))) 
                                          && ((1U & 
                                               ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                                >> 1U)) 
                                              && (1U 
                                                  & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))))));
    } else if ((0x00000010U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write 
            = ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                         >> 3U))) && ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))
                                       ? ((1U & ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op)))
                                       : ((1U & ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                                 >> 1U)) 
                                          && ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op)) 
                                              && (1U 
                                                  & (~ 
                                                     (((1U 
                                                        == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3)) 
                                                       & (0U 
                                                          != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func7))) 
                                                      | (((5U 
                                                           == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3)) 
                                                          & (0U 
                                                             != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func7))) 
                                                         & (0x20U 
                                                            != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func7))))))))));
        if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                    if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__jump = 0U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__write_back_source = 3U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__branch = 0U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__second_add_source = 0U;
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__jump = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__write_back_source = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__branch = 0U;
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                    if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_source = 1U;
                    }
                }
            }
        }
        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_read = 0U;
        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_write = 0U;
        if ((8U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
        } else if ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
            if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                if ((1U & (~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op)))) {
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                }
                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source 
                    = ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))
                        ? 4U : 0U);
            } else {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
            }
        } else {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op 
                = ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))
                    ? ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))
                        ? 2U : 0U) : 0U);
            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
        }
    } else {
        if ((8U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
            if ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                    if ((1U & (~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op)))) {
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write = 0U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_read = 0U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_write = 0U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
                    }
                } else {
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_read = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_write = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
                }
            } else {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write = 0U;
                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_read = 0U;
                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_write = 0U;
                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
            }
        } else {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write 
                = ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                             >> 2U))) && ((1U & ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))));
            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_read 
                = ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                             >> 2U))) && ((1U & ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))));
            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_write = 0U;
            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
        }
        if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                    if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__write_back_source = 1U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__branch = 0U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_source = 1U;
                    }
                }
            }
        }
    }
    vlSelfRef.cpu_test_harness__DOT__core__DOT__read_reg1 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__read_data1;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__read_reg2 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__read_data2;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__fence_i 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__fence_i;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__trap_cause 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__trap_cause;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__reg_write 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__write_back_source 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__write_back_source;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control_trap_valid 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__trap_valid;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__second_add_source 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__second_add_source;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__fence 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__fence;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__mem_read_enable 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_read;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__mem_write 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_write;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_control = 0U;
    if ((0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op))) {
        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_control = 0U;
    } else if ((1U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op))) {
        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_control 
            = ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3))
                ? ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3))
                    ? 7U : 5U) : ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3))
                                   ? 0U : 1U));
    } else if ((2U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op))) {
        if ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3))) {
            if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3))) {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_control 
                    = ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3))
                        ? 2U : 3U);
            } else if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3))) {
                if ((0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func7))) {
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_control = 6U;
                } else if ((0x20U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func7))) {
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_control = 9U;
                }
            } else {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_control = 8U;
            }
        } else {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_control 
                = ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3))
                    ? ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3))
                        ? 7U : 5U) : ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3))
                                       ? 4U : ((0x33U 
                                                == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))
                                                ? (
                                                   (0x20U 
                                                    == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func7))
                                                    ? 1U
                                                    : 0U)
                                                : 0U)));
        }
    } else {
        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_control = 0U;
    }
    vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_source 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_source;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__imm_source 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src1 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__read_reg1;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__reg_read 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__read_reg2;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__shift_amount 
        = (0x0000001fU & ((0x13U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__op))
                           ? (vlSelfRef.cpu_test_harness__DOT__core__DOT__instruction 
                              >> 0x00000014U) : (vlSelfRef.cpu_test_harness__DOT__core__DOT__read_reg2 
                                                 & (- (IData)(
                                                              (0x33U 
                                                               == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__op)))))));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__trap_valid 
        = ((~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__i_cache_stall)) 
           & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control_trap_valid));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__flush 
        = ((~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__i_cache_stall)) 
           & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__fence));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_read_enable 
        = ((~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__i_cache_stall)) 
           & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__mem_read_enable));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_write_enable 
        = ((~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__i_cache_stall)) 
           & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__mem_write));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_control 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_control;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__imm_source 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__imm_source;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__shamt 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__shift_amount;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__read_enable 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_read_enable;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__write_enable 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_write_enable;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_control 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_control;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__immediate 
        = ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__imm_source))
            ? (0xfffff000U & ((- (IData)((1U & (~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__imm_source))))) 
                              & ((vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src 
                                  << 7U) & (- (IData)(
                                                      (1U 
                                                       & (~ 
                                                          ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__imm_source) 
                                                           >> 1U))))))))
            : ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__imm_source))
                ? ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__imm_source))
                    ? (((- (IData)((1U & (vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src 
                                          >> 0x00000018U)))) 
                        << 0x00000014U) | ((((0x000001feU 
                                              & (vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src 
                                                 >> 4U)) 
                                             | (1U 
                                                & (vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src 
                                                   >> 0x0000000dU))) 
                                            << 0x0000000bU) 
                                           | (0x000007feU 
                                              & (vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src 
                                                 >> 0x0000000dU))))
                    : (((- (IData)((1U & (vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src 
                                          >> 0x00000018U)))) 
                        << 0x0000000cU) | ((0x00000800U 
                                            & (vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src 
                                               << 0x0000000bU)) 
                                           | ((0x000007e0U 
                                               & (vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src 
                                                  >> 0x0000000dU)) 
                                              | (0x0000001eU 
                                                 & vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src)))))
                : (((- (IData)((1U & (vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src 
                                      >> 0x00000018U)))) 
                    << 0x0000000cU) | (0x00000fffU 
                                       & ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__imm_source))
                                           ? ((0x00000fe0U 
                                               & (vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src 
                                                  >> 0x0000000dU)) 
                                              | (0x0000001fU 
                                                 & vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src))
                                           : (vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src 
                                              >> 0x0000000dU))))));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__immediate 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__immediate;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__pc_plus_second_add 
        = ((0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__second_add_source))
            ? (vlSelfRef.cpu_test_harness__DOT__core__DOT__pc 
               + vlSelfRef.cpu_test_harness__DOT__core__DOT__immediate)
            : ((1U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__second_add_source))
                ? vlSelfRef.cpu_test_harness__DOT__core__DOT__immediate
                : (0xfffffffeU & ((- (IData)((2U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__second_add_source)))) 
                                  & (vlSelfRef.cpu_test_harness__DOT__core__DOT__immediate 
                                     + vlSelfRef.cpu_test_harness__DOT__core__DOT__read_reg1)))));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_src2 
        = ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_source)
            ? vlSelfRef.cpu_test_harness__DOT__core__DOT__immediate
            : vlSelfRef.cpu_test_harness__DOT__core__DOT__read_reg2);
    vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src2 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_src2;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__unsigned_less 
        = (vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src1 
           < vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src2);
    if ((8U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_control))) {
        if ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_control))) {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_result = 0U;
        } else if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_control))) {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_result = 0U;
        } else if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_control))) {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_result 
                = (vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src1 
                   >> (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__shamt));
            if ((vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src1 
                 >> 0x1fU)) {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_result 
                    = (vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_result 
                       | VL_SHIFTL_III(32,32,32, (IData)(0xffffffffU), 
                                       ((IData)(0x00000020U) 
                                        - (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__shamt))));
            }
        } else {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_result 
                = (vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src1 
                   ^ vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src2);
        }
    } else {
        vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_result 
            = ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_control))
                ? ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_control))
                    ? ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_control))
                        ? (vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src1 
                           < vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src2)
                        : (vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src1 
                           >> (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__shamt)))
                    : ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_control))
                        ? (VL_LTS_III(32, vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src1, vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src2)
                            ? 1U : 0U) : (vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src1 
                                          << (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__shamt))))
                : ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_control))
                    ? ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_control))
                        ? (vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src1 
                           | vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src2)
                        : (vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src1 
                           & vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src2))
                    : ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_control))
                        ? ((IData)(1U) + (vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src1 
                                          + (~ vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src2)))
                        : (vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src1 
                           + vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src2))));
    }
    vlSelfRef.cpu_test_harness__DOT__core__DOT__unsigned_less 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__unsigned_less;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__zero 
        = (0U == vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_result);
    vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__last_bit 
        = (1U & vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_result);
    vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_result 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_result;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_unsigned_less 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__unsigned_less;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_zero 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__zero;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__last_bit 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__last_bit;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__alu_result_address 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_result;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__address 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_result;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_unsigned_less 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_unsigned_less;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_zero 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_zero;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_last_bit 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__last_bit;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__offset 
        = (3U & vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__alu_result_address);
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__req_index 
        = (0x0000007fU & (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__address 
                          >> 2U));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__req_block_tag 
        = (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__address 
           >> 9U);
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_last_bit 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_last_bit;
    if ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__f3))) {
        if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__f3) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__f3))) {
                if ((0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__offset))) {
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__data 
                        = (0x0000ffffU & vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__reg_read);
                } else if ((2U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__offset))) {
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__data 
                        = (0xffff0000U & VL_SHIFTL_III(32,32,32, vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__reg_read, 0x00000010U));
                }
            } else {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__data 
                    = ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__offset))
                        ? ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__offset))
                            ? (0xff000000U & VL_SHIFTL_III(32,32,32, vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__reg_read, 0x00000018U))
                            : (0x00ff0000U & VL_SHIFTL_III(32,32,32, vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__reg_read, 0x00000010U)))
                        : ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__offset))
                            ? (0x0000ff00U & VL_SHIFTL_III(32,32,32, vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__reg_read, 8U))
                            : (0x000000ffU & vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__reg_read)));
            }
        }
        vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__byte_enable 
            = ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__f3))
                ? 0U : ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__f3))
                         ? ((0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__offset))
                             ? 3U : ((2U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__offset))
                                      ? 0x0cU : 0U))
                         : ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__offset))
                             ? ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__offset))
                                 ? 8U : 4U) : ((1U 
                                                & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__offset))
                                                ? 2U
                                                : 1U))));
    } else if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__f3))) {
        if ((1U & (~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__f3)))) {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__data 
                = vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__reg_read;
        }
        vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__byte_enable 
            = ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__f3))
                ? 0U : ((0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__offset))
                         ? 0x0fU : 0U));
    } else if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__f3))) {
        if ((0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__offset))) {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__data 
                = (0x0000ffffU & vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__reg_read);
            vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__byte_enable = 3U;
        } else if ((2U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__offset))) {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__data 
                = (0xffff0000U & VL_SHIFTL_III(32,32,32, vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__reg_read, 0x00000010U));
            vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__byte_enable = 0x0cU;
        } else {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__byte_enable = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__offset))) {
        if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__offset))) {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__data 
                = (0xff000000U & VL_SHIFTL_III(32,32,32, vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__reg_read, 0x00000018U));
            vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__byte_enable = 8U;
        } else {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__data 
                = (0x00ff0000U & VL_SHIFTL_III(32,32,32, vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__reg_read, 0x00000010U));
            vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__byte_enable = 4U;
        }
    } else if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__offset))) {
        vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__data 
            = (0x0000ff00U & VL_SHIFTL_III(32,32,32, vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__reg_read, 8U));
        vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__byte_enable = 2U;
    } else {
        vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__data 
            = (0x000000ffU & vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__reg_read);
        vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__byte_enable = 1U;
    }
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__hit 
        = ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_valid) 
           & (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__req_block_tag 
              == vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_block_tag));
    __Vtableidx2 = ((((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_zero) 
                      << 6U) | ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_last_bit) 
                                << 5U)) | (((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__branch) 
                                            << 4U) 
                                           | (((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_unsigned_less) 
                                               << 3U) 
                                              | (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3))));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__assert_branch 
        = Vtop__ConstPool__TABLE_h039306e2_0[__Vtableidx2];
    vlSelfRef.cpu_test_harness__DOT__core__DOT__mem_write_data 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__data;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__mem_byte_enable 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__byte_enable;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__pc_source 
        = ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__jump) 
           | (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__assert_branch));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__write_data 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__mem_write_data;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__be_mask 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__mem_byte_enable;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__byte_enable 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__mem_byte_enable;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__pc_source 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__pc_source;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__valid 
        = (0U != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__be_mask));
    __Vtableidx1 = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__byte_enable;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__byte_enable_mask 
        = Vtop__ConstPool__TABLE_h523ce058_0[__Vtableidx1];
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__actual_write_enable 
        = ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__write_enable) 
           & (0U != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__byte_enable)));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__mem_read_write_back_valid 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__valid;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_state 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__state;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_cache_valid 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_valid;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_cache_dirty 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_dirty;
    vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.wlast = 0U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_set_ptr 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__set_ptr;
    if (VL_UNLIKELY(((8U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__state))))) {
        VL_WRITEF_NX("CACHE FSM STATE ERROR\n",0);
    } else if ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__state))) {
        if (VL_UNLIKELY(((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__state))))) {
            VL_WRITEF_NX("CACHE FSM STATE ERROR\n",0);
        } else if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__state))) {
            if (vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rvalid) {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_set_ptr 
                    = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__set_ptr)));
                if (vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rlast) {
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_state = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_cache_valid = 1U;
                }
            }
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.awvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.wvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.bready = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.arvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rready = 1U;
        } else {
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.araddr 
                = (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__req_block_tag 
                   << 9U);
            if (vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.arready) {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_state = 5U;
            }
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.awvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.wvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.bready = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.arvalid = 1U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rready = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__state))) {
            if (((IData)(vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.bvalid) 
                 & (0U == (IData)(vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.bresp)))) {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_cache_dirty = 0U;
                vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_state 
                    = ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__flush_pending)
                        ? 0U : 4U);
            } else if (VL_UNLIKELY((((IData)(vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.bvalid) 
                                     & (0U != (IData)(vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.bresp)))))) {
                VL_WRITEF_NX("ERROR WRITING TO MAIN MEMORY\n",0);
            }
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.awvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.wvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.bready = 1U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.arvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rready = 0U;
        } else {
            if (vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.wready) {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_set_ptr 
                    = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__set_ptr)));
            }
            if ((0x7fU == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__set_ptr))) {
                vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.wlast = 1U;
                if (vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.wready) {
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_state = 3U;
                }
            }
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.awvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.wvalid = 1U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.bready = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.arvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rready = 0U;
        }
    } else if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__state))) {
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.awaddr 
            = (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_block_tag 
               << 9U);
        if (vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.awready) {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_state = 2U;
        }
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.awvalid = 1U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.wvalid = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.bready = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.arvalid = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rready = 0U;
    } else {
        if (VL_UNLIKELY((((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__read_enable) 
                          & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__write_enable))))) {
            VL_WRITEF_NX("E : CAN't READ WRITE AT THE SAME TIME\n",0);
        } else if ((((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__flush) 
                     & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_valid)) 
                    & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_dirty))) {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_state = 1U;
        } else if (((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__hit) 
                    & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__read_enable))) {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__read_data 
                = (((0U == (0x0000001fU & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__req_index), 5U)))
                     ? 0U : (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data
                             [(((IData)(0x0000001fU) 
                                + (0x00000fffU & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__req_index), 5U))) 
                               >> 5U)] << ((IData)(0x00000020U) 
                                           - (0x0000001fU 
                                              & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__req_index), 5U))))) 
                   | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data
                      [(0x0000007fU & (VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__req_index), 5U) 
                                       >> 5U))] >> 
                      (0x0000001fU & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__req_index), 5U))));
        } else if (((~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__hit)) 
                    & ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__read_enable) 
                       ^ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__actual_write_enable)))) {
            if (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_dirty) {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_state = 1U;
            } else if ((1U & (~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_dirty)))) {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_state = 4U;
            }
        }
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.awvalid = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.wvalid = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.bready = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.arvalid = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rready = 0U;
        vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_set_ptr = 0U;
    }
    vlSelfRef.cpu_test_harness__DOT__core__DOT__wb_valid 
        = ((1U & ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__write_back_source) 
                  >> 1U)) || ((1U & (~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__write_back_source))) 
                              || (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__mem_read_write_back_valid)));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_set_ptr_out 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_set_ptr;
    vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wlast = 0U;
    vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awvalid = 0U;
    vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wvalid = 0U;
    vlSymsp->TOP__cpu_test_harness__DOT__m_axi.bready = 0U;
    vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arvalid = 0U;
    vlSymsp->TOP__cpu_test_harness__DOT__m_axi.rready = 0U;
    vlSymsp->TOP__cpu_test_harness__DOT__m_axi.araddr = 0U;
    vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awaddr = 0U;
    if ((0U != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__arbitrer__DOT__i_cache_state))) {
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wlast 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.wlast;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awvalid 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.awvalid;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wvalid 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.wvalid;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.bready 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.bready;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arvalid 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.arvalid;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.rready 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rready;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.araddr 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.araddr;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awaddr 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.awaddr;
    } else if (((0U != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__arbitrer__DOT__d_cache_state)) 
                & (0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__arbitrer__DOT__i_cache_state)))) {
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wlast 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.wlast;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awvalid 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.awvalid;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wvalid 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.wvalid;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.bready 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.bready;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arvalid 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.arvalid;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.rready 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rready;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.araddr 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.araddr;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awaddr 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.awaddr;
    }
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__comb_stall 
        = ((0U != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_state)) 
           | ((~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__hit)) 
              & ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__read_enable) 
                 | (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__actual_write_enable))));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__mem_read 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__read_data;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_next_set_ptr 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_set_ptr_out;
    vlSelfRef.cpu_test_harness__DOT__m_axi_wlast = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wlast;
    vlSelfRef.cpu_test_harness__DOT__m_axi_awvalid 
        = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awvalid;
    vlSelfRef.cpu_test_harness__DOT__m_axi_wvalid = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wvalid;
    vlSelfRef.cpu_test_harness__DOT__m_axi_bready = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.bready;
    vlSelfRef.cpu_test_harness__DOT__m_axi_arvalid 
        = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arvalid;
    vlSelfRef.cpu_test_harness__DOT__m_axi_rready = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.rready;
    vlSelfRef.cpu_test_harness__DOT__m_axi_araddr = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.araddr;
    vlSelfRef.cpu_test_harness__DOT__m_axi_awaddr = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awaddr;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_stall 
        = ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__comb_stall) 
           | (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__seq_stall));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__mem_data 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__mem_read;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__debug_d_next_set_ptr 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_next_set_ptr;
    vlSelfRef.m_axi_wlast = vlSelfRef.cpu_test_harness__DOT__m_axi_wlast;
    vlSelfRef.m_axi_awvalid = vlSelfRef.cpu_test_harness__DOT__m_axi_awvalid;
    vlSelfRef.m_axi_wvalid = vlSelfRef.cpu_test_harness__DOT__m_axi_wvalid;
    vlSelfRef.m_axi_bready = vlSelfRef.cpu_test_harness__DOT__m_axi_bready;
    vlSelfRef.m_axi_arvalid = vlSelfRef.cpu_test_harness__DOT__m_axi_arvalid;
    vlSelfRef.m_axi_rready = vlSelfRef.cpu_test_harness__DOT__m_axi_rready;
    vlSelfRef.m_axi_araddr = vlSelfRef.cpu_test_harness__DOT__m_axi_araddr;
    vlSelfRef.m_axi_awaddr = vlSelfRef.cpu_test_harness__DOT__m_axi_awaddr;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__d_cache_stall 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_stall;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__mask_apply__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 4U, vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__mask_apply__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__masked_data 
            = (((~ ((IData)(0x000000ffU) << (0x0000001fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__mask_apply__DOT__unnamedblk1__DOT__i)))) 
                & vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__masked_data) 
               | (0x00000000ffffffffULL & (((1U & ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__be_mask) 
                                                   >> 
                                                   (3U 
                                                    & vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__mask_apply__DOT__unnamedblk1__DOT__i)))
                                             ? (0x000000ffU 
                                                & (vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__mem_data 
                                                   >> 
                                                   (0x0000001fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__mask_apply__DOT__unnamedblk1__DOT__i))))
                                             : 0U) 
                                           << (0x0000001fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__mask_apply__DOT__unnamedblk1__DOT__i)))));
        vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__mask_apply__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__mask_apply__DOT__unnamedblk1__DOT__i);
    }
    vlSelfRef.cpu_test_harness__DOT__core__DOT__debug_d_cache_stall 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__d_cache_stall;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__write_enable 
        = ((~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__i_cache_stall)) 
           & ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reg_write) 
              & ((~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__d_cache_stall) 
                     | (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__trap_valid))) 
                 & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__wb_valid))));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__pc_next 
        = (((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__trap_valid) 
            | ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__i_cache_stall) 
               | ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__d_cache_stall) 
                  | ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__fence_i_request) 
                     | ((~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache_flush_done)) 
                        & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__fence))))))
            ? vlSelfRef.cpu_test_harness__DOT__core__DOT__pc
            : ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__pc_source)
                ? vlSelfRef.cpu_test_harness__DOT__core__DOT__pc_plus_second_add
                : vlSelfRef.cpu_test_harness__DOT__core__DOT__pc_plus_four));
    __VdfgRegularize_hebeb780c_0_3 = ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__f3))
                                       ? ((3U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__be_mask))
                                           ? vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__masked_data
                                           : ((0x0cU 
                                               == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__be_mask))
                                               ? VL_SHIFTR_III(32,32,32, vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__masked_data, 0x00000010U)
                                               : vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__masked_data))
                                       : ((8U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__be_mask))
                                           ? ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__be_mask))
                                               ? vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__masked_data
                                               : ((2U 
                                                   & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__be_mask))
                                                   ? vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__masked_data
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__be_mask))
                                                    ? vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__masked_data
                                                    : 
                                                   VL_SHIFTR_III(32,32,32, vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__masked_data, 0x00000018U))))
                                           : ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__be_mask))
                                               ? ((2U 
                                                   & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__be_mask))
                                                   ? vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__masked_data
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__be_mask))
                                                    ? vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__masked_data
                                                    : 
                                                   VL_SHIFTR_III(32,32,32, vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__masked_data, 0x00000010U)))
                                               : ((2U 
                                                   & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__be_mask))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__be_mask))
                                                    ? vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__masked_data
                                                    : 
                                                   VL_SHIFTR_III(32,32,32, vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__masked_data, 8U))
                                                   : vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__masked_data))));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__debug_pc_next 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__pc_next;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__raw_data 
        = ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__f3))
            ? (__VdfgRegularize_hebeb780c_0_3 & (- (IData)(
                                                           (1U 
                                                            & (~ 
                                                               ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__f3) 
                                                                >> 1U))))))
            : ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__f3))
                ? (vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__masked_data 
                   & (- (IData)((1U & (~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__f3))))))
                : __VdfgRegularize_hebeb780c_0_3));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__wb_data 
        = ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__f3))
            ? vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__raw_data
            : ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__f3))
                ? ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__sign_extend)
                    ? (((- (IData)((1U & (vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__raw_data 
                                          >> 0x0000000fU)))) 
                        << 0x00000010U) | (0x0000ffffU 
                                           & vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__raw_data))
                    : vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__raw_data)
                : ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__sign_extend)
                    ? (((- (IData)((1U & (vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__raw_data 
                                          >> 7U)))) 
                        << 8U) | (0x000000ffU & vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__raw_data))
                    : vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__raw_data)));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__mem_read_write_back_data 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__wb_data;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__write_back_data 
        = ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__write_back_source))
            ? ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__write_back_source))
                ? vlSelfRef.cpu_test_harness__DOT__core__DOT__pc_plus_second_add
                : vlSelfRef.cpu_test_harness__DOT__core__DOT__pc_plus_four)
            : ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__write_back_source))
                ? vlSelfRef.cpu_test_harness__DOT__core__DOT__mem_read_write_back_data
                : vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_result));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__write_data 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__write_back_data;
}

void Vtop___024root___act_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wdata = 0U;
    if ((0U != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__arbitrer__DOT__i_cache_state))) {
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wdata 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.wdata;
    } else if (((0U != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__arbitrer__DOT__d_cache_state)) 
                & (0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__arbitrer__DOT__i_cache_state)))) {
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wdata 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.wdata;
    }
    vlSelfRef.cpu_test_harness__DOT__m_axi_wdata = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wdata;
    vlSelfRef.m_axi_wdata = vlSelfRef.cpu_test_harness__DOT__m_axi_wdata;
}

void Vtop_axi_if___act_sequent__TOP__cpu_test_harness__DOT__m_axi__0(Vtop_axi_if* vlSelf);

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000020ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtop___024root___act_sequent__TOP__0(vlSelf);
        Vtop_axi_if___act_sequent__TOP__cpu_test_harness__DOT__m_axi__0((&vlSymsp->TOP__cpu_test_harness__DOT__m_axi));
        Vtop_axi_if___ico_sequent__TOP__cpu_test_harness__DOT__core__DOT__m_axi_data__0((&vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data));
        Vtop_axi_if___ico_sequent__TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst__0((&vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst));
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wdata = 0U;
        if ((0U != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__arbitrer__DOT__i_cache_state))) {
            vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wdata 
                = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.wdata;
        } else if (((0U != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__arbitrer__DOT__d_cache_state)) 
                    & (0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__arbitrer__DOT__i_cache_state)))) {
            vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wdata 
                = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.wdata;
        }
        vlSelfRef.cpu_test_harness__DOT__m_axi_wdata 
            = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wdata;
        vlSelfRef.m_axi_wdata = vlSelfRef.cpu_test_harness__DOT__m_axi_wdata;
    }
}

extern const VlWide<128>/*4095:0*/ Vtop__ConstPool__CONST_h6e0f3f36_0;

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*22:0*/ __Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_block_tag;
    __Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_block_tag = 0;
    IData/*22:0*/ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_block_tag;
    __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_block_tag = 0;
    CData/*0:0*/ __Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_valid;
    __Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_valid = 0;
    CData/*0:0*/ __Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_dirty;
    __Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_dirty = 0;
    CData/*0:0*/ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_dirty;
    __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_dirty = 0;
    VlWide<128>/*4095:0*/ __Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data;
    VL_ZERO_W(4096, __Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data);
    VlWide<128>/*4095:0*/ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data;
    VL_ZERO_W(4096, __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data);
    CData/*0:0*/ __Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__flush_pending;
    __Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__flush_pending = 0;
    // Body
    __Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__flush_pending 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__flush_pending;
    __Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_valid 
        = ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__rst_n) 
           && (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_cache_valid));
    if (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__rst_n) {
        __Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_dirty 
            = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_cache_dirty;
        __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_dirty = 1U;
        if ((((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__hit) 
              & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__write_enable)) 
             & (0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__state)))) {
            __Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_dirty = 1U;
            __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_dirty = 1U;
            VL_ASSIGNSEL_WI(4096, 32, (0x00000fffU 
                                       & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__req_index), 5U)), __Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data, 
                            (((((0U == (0x0000001fU 
                                        & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__req_index), 5U)))
                                 ? 0U : (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data
                                         [(((IData)(0x0000001fU) 
                                            + (0x00000fffU 
                                               & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__req_index), 5U))) 
                                           >> 5U)] 
                                         << ((IData)(0x00000020U) 
                                             - (0x0000001fU 
                                                & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__req_index), 5U))))) 
                               | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data
                                  [(0x0000007fU & (
                                                   VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__req_index), 5U) 
                                                   >> 5U))] 
                                  >> (0x0000001fU & 
                                      VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__req_index), 5U)))) 
                              & (~ vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__byte_enable_mask)) 
                             | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__write_data 
                                & vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__byte_enable_mask)));
            VL_ASSIGNSEL_WI(4096, 32, (0x00000fffU 
                                       & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__req_index), 5U)), __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data, 0xffffffffU);
        } else if ((((IData)(vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rvalid) 
                     & (5U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__state))) 
                    & (IData)(vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rready))) {
            if (((IData)(vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rready) 
                 & (IData)(vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rlast))) {
                __Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_dirty = 0U;
                __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_dirty = 1U;
            }
            VL_ASSIGNSEL_WI(4096, 32, (0x00000fffU 
                                       & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__set_ptr), 5U)), __Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data, vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rdata);
            VL_ASSIGNSEL_WI(4096, 32, (0x00000fffU 
                                       & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__set_ptr), 5U)), __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data, 0xffffffffU);
        }
        if ((1U & (~ (((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__hit) 
                       & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__write_enable)) 
                      & (0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__state)))))) {
            if ((((IData)(vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rvalid) 
                  & (5U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__state))) 
                 & (IData)(vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rready))) {
                if (((IData)(vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rready) 
                     & (IData)(vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rlast))) {
                    __Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_block_tag 
                        = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__req_block_tag;
                    __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_block_tag = 0x007fffffU;
                }
            }
        }
        if (((((0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__state)) 
               & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__flush)) 
              & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_valid)) 
             & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_dirty))) {
            __Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__flush_pending = 1U;
        } else if (((((3U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__state)) 
                      & (IData)(vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.bvalid)) 
                     & (0U == (IData)(vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.bresp))) 
                    & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__flush_pending))) {
            __Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__flush_pending = 0U;
        }
        vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__set_ptr 
            = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_set_ptr;
        vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__state 
            = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_state;
    } else {
        __Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_dirty = 0U;
        __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_dirty = 1U;
        __Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__flush_pending = 0U;
        vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__set_ptr = 0U;
        vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__state = 0U;
    }
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__seq_stall 
        = ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__rst_n) 
           && (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__comb_stall));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_block_tag 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_block_tag 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_block_tag) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_block_tag 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_block_tag)));
    __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_block_tag = 0U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[0U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[0U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[0U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[0U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[0U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[1U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[1U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[1U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[1U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[1U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[2U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[2U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[2U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[2U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[2U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[3U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[3U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[3U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[3U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[3U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[4U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[4U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[4U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[4U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[4U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[5U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[5U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[5U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[5U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[5U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[6U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[6U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[6U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[6U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[6U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[7U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[7U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[7U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[7U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[7U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[8U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[8U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[8U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[8U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[8U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[9U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[9U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[9U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[9U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[9U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[10U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[10U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[10U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[10U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[10U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[11U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[11U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[11U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[11U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[11U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[12U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[12U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[12U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[12U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[12U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[13U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[13U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[13U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[13U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[13U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[14U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[14U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[14U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[14U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[14U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[15U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[15U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[15U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[15U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[15U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[16U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[16U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[16U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[16U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[16U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[17U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[17U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[17U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[17U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[17U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[18U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[18U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[18U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[18U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[18U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[19U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[19U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[19U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[19U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[19U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[20U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[20U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[20U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[20U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[20U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[21U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[21U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[21U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[21U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[21U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[22U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[22U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[22U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[22U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[22U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[23U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[23U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[23U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[23U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[23U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[24U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[24U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[24U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[24U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[24U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[25U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[25U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[25U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[25U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[25U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[26U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[26U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[26U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[26U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[26U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[27U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[27U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[27U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[27U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[27U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[28U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[28U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[28U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[28U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[28U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[29U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[29U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[29U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[29U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[29U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[30U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[30U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[30U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[30U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[30U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[31U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[31U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[31U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[31U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[31U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[32U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[32U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[32U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[32U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[32U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[33U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[33U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[33U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[33U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[33U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[34U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[34U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[34U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[34U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[34U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[35U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[35U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[35U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[35U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[35U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[36U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[36U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[36U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[36U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[36U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[37U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[37U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[37U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[37U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[37U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[38U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[38U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[38U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[38U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[38U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[39U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[39U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[39U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[39U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[39U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[40U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[40U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[40U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[40U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[40U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[41U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[41U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[41U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[41U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[41U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[42U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[42U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[42U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[42U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[42U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[43U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[43U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[43U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[43U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[43U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[44U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[44U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[44U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[44U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[44U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[45U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[45U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[45U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[45U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[45U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[46U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[46U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[46U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[46U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[46U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[47U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[47U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[47U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[47U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[47U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[48U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[48U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[48U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[48U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[48U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[49U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[49U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[49U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[49U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[49U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[50U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[50U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[50U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[50U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[50U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[51U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[51U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[51U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[51U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[51U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[52U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[52U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[52U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[52U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[52U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[53U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[53U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[53U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[53U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[53U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[54U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[54U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[54U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[54U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[54U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[55U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[55U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[55U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[55U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[55U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[56U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[56U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[56U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[56U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[56U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[57U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[57U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[57U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[57U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[57U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[58U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[58U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[58U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[58U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[58U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[59U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[59U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[59U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[59U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[59U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[60U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[60U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[60U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[60U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[60U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[61U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[61U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[61U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[61U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[61U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[62U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[62U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[62U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[62U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[62U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[63U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[63U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[63U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[63U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[63U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[64U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[64U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[64U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[64U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[64U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[65U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[65U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[65U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[65U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[65U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[66U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[66U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[66U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[66U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[66U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[67U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[67U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[67U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[67U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[67U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[68U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[68U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[68U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[68U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[68U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[69U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[69U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[69U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[69U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[69U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[70U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[70U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[70U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[70U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[70U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[71U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[71U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[71U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[71U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[71U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[72U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[72U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[72U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[72U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[72U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[73U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[73U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[73U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[73U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[73U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[74U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[74U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[74U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[74U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[74U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[75U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[75U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[75U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[75U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[75U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[76U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[76U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[76U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[76U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[76U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[77U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[77U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[77U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[77U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[77U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[78U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[78U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[78U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[78U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[78U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[79U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[79U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[79U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[79U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[79U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[80U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[80U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[80U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[80U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[80U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[81U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[81U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[81U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[81U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[81U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[82U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[82U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[82U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[82U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[82U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[83U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[83U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[83U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[83U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[83U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[84U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[84U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[84U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[84U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[84U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[85U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[85U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[85U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[85U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[85U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[86U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[86U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[86U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[86U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[86U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[87U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[87U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[87U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[87U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[87U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[88U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[88U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[88U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[88U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[88U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[89U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[89U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[89U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[89U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[89U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[90U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[90U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[90U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[90U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[90U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[91U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[91U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[91U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[91U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[91U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[92U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[92U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[92U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[92U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[92U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[93U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[93U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[93U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[93U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[93U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[94U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[94U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[94U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[94U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[94U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[95U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[95U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[95U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[95U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[95U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[96U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[96U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[96U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[96U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[96U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[97U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[97U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[97U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[97U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[97U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[98U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[98U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[98U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[98U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[98U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[99U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[99U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[99U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[99U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[99U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[100U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[100U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[100U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[100U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[100U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[101U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[101U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[101U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[101U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[101U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[102U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[102U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[102U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[102U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[102U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[103U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[103U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[103U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[103U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[103U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[104U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[104U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[104U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[104U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[104U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[105U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[105U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[105U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[105U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[105U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[106U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[106U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[106U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[106U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[106U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[107U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[107U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[107U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[107U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[107U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[108U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[108U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[108U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[108U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[108U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[109U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[109U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[109U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[109U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[109U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[110U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[110U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[110U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[110U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[110U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[111U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[111U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[111U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[111U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[111U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[112U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[112U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[112U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[112U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[112U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[113U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[113U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[113U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[113U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[113U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[114U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[114U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[114U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[114U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[114U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[115U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[115U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[115U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[115U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[115U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[116U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[116U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[116U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[116U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[116U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[117U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[117U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[117U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[117U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[117U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[118U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[118U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[118U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[118U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[118U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[119U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[119U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[119U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[119U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[119U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[120U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[120U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[120U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[120U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[120U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[121U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[121U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[121U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[121U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[121U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[122U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[122U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[122U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[122U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[122U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[123U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[123U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[123U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[123U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[123U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[124U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[124U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[124U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[124U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[124U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[125U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[125U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[125U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[125U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[125U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[126U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[126U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[126U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[126U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[126U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[127U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[127U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[127U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[127U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data[127U])));
    VL_ASSIGN_W(4096, __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data, Vtop__ConstPool__CONST_h6e0f3f36_0);
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__flush_pending 
        = __Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__flush_pending;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_dirty 
        = (((IData)(__Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_dirty) 
            & (IData)(__VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_dirty)) 
           | ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_dirty) 
              & (~ (IData)(__VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_dirty))));
    __VdlyMask__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_dirty = 0U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_valid 
        = __Vdly__cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_valid;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__set_ptr_out 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__set_ptr;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_state 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__state;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_set_ptr 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__set_ptr_out;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__d_cache_state 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_state;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__debug_d_set_ptr 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_set_ptr;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__debug_d_cache_state 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__d_cache_state;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__arbitrer__DOT__d_cache_state 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__d_cache_state;
}

void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.cpu_test_harness__DOT__core__DOT__rst_n) {
        if (((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__fence_i_request) 
             & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache_invalidate_done))) {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__fence_i_request = 0U;
        } else if (((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__fence_i) 
                    & (~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__i_cache_stall)))) {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__fence_i_request = 1U;
        }
        vlSelfRef.cpu_test_harness__DOT__core__DOT__pc 
            = vlSelfRef.cpu_test_harness__DOT__core__DOT__pc_next;
    } else {
        vlSelfRef.cpu_test_harness__DOT__core__DOT__fence_i_request = 0U;
        vlSelfRef.cpu_test_harness__DOT__core__DOT__pc = 0U;
    }
    vlSelfRef.cpu_test_harness__DOT__pc = vlSelfRef.cpu_test_harness__DOT__core__DOT__pc;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__debug_pc 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__pc;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__trap_pc 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__pc;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__pc_plus_four 
        = ((IData)(4U) + vlSelfRef.cpu_test_harness__DOT__core__DOT__pc);
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__address 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__pc;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__req_index 
        = (0x0000007fU & (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__address 
                          >> 2U));
}

void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__cpu_test_harness__DOT__read_active;
    __Vdly__cpu_test_harness__DOT__read_active = 0;
    IData/*31:0*/ __Vdly__cpu_test_harness__DOT__read_addr;
    __Vdly__cpu_test_harness__DOT__read_addr = 0;
    CData/*7:0*/ __Vdly__cpu_test_harness__DOT__read_count;
    __Vdly__cpu_test_harness__DOT__read_count = 0;
    CData/*7:0*/ __Vdly__cpu_test_harness__DOT__read_length;
    __Vdly__cpu_test_harness__DOT__read_length = 0;
    CData/*0:0*/ __Vdly__cpu_test_harness__DOT__write_active;
    __Vdly__cpu_test_harness__DOT__write_active = 0;
    IData/*31:0*/ __Vdly__cpu_test_harness__DOT__write_addr;
    __Vdly__cpu_test_harness__DOT__write_addr = 0;
    CData/*7:0*/ __Vdly__cpu_test_harness__DOT__write_count;
    __Vdly__cpu_test_harness__DOT__write_count = 0;
    CData/*0:0*/ __Vdly__cpu_test_harness__DOT__bvalid_reg;
    __Vdly__cpu_test_harness__DOT__bvalid_reg = 0;
    CData/*7:0*/ __VdlyVal__cpu_test_harness__DOT__ram__v0;
    __VdlyVal__cpu_test_harness__DOT__ram__v0 = 0;
    SData/*10:0*/ __VdlyDim0__cpu_test_harness__DOT__ram__v0;
    __VdlyDim0__cpu_test_harness__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__cpu_test_harness__DOT__ram__v0;
    __VdlySet__cpu_test_harness__DOT__ram__v0 = 0;
    CData/*7:0*/ __VdlyVal__cpu_test_harness__DOT__ram__v1;
    __VdlyVal__cpu_test_harness__DOT__ram__v1 = 0;
    SData/*10:0*/ __VdlyDim0__cpu_test_harness__DOT__ram__v1;
    __VdlyDim0__cpu_test_harness__DOT__ram__v1 = 0;
    CData/*0:0*/ __VdlySet__cpu_test_harness__DOT__ram__v1;
    __VdlySet__cpu_test_harness__DOT__ram__v1 = 0;
    CData/*7:0*/ __VdlyVal__cpu_test_harness__DOT__ram__v2;
    __VdlyVal__cpu_test_harness__DOT__ram__v2 = 0;
    SData/*10:0*/ __VdlyDim0__cpu_test_harness__DOT__ram__v2;
    __VdlyDim0__cpu_test_harness__DOT__ram__v2 = 0;
    CData/*0:0*/ __VdlySet__cpu_test_harness__DOT__ram__v2;
    __VdlySet__cpu_test_harness__DOT__ram__v2 = 0;
    CData/*7:0*/ __VdlyVal__cpu_test_harness__DOT__ram__v3;
    __VdlyVal__cpu_test_harness__DOT__ram__v3 = 0;
    SData/*10:0*/ __VdlyDim0__cpu_test_harness__DOT__ram__v3;
    __VdlyDim0__cpu_test_harness__DOT__ram__v3 = 0;
    CData/*0:0*/ __VdlySet__cpu_test_harness__DOT__ram__v3;
    __VdlySet__cpu_test_harness__DOT__ram__v3 = 0;
    // Body
    __Vdly__cpu_test_harness__DOT__write_addr = vlSelfRef.cpu_test_harness__DOT__write_addr;
    __Vdly__cpu_test_harness__DOT__write_count = vlSelfRef.cpu_test_harness__DOT__write_count;
    __VdlySet__cpu_test_harness__DOT__ram__v0 = 0U;
    __VdlySet__cpu_test_harness__DOT__ram__v1 = 0U;
    __VdlySet__cpu_test_harness__DOT__ram__v2 = 0U;
    __VdlySet__cpu_test_harness__DOT__ram__v3 = 0U;
    __Vdly__cpu_test_harness__DOT__bvalid_reg = vlSelfRef.cpu_test_harness__DOT__bvalid_reg;
    __Vdly__cpu_test_harness__DOT__write_active = vlSelfRef.cpu_test_harness__DOT__write_active;
    __Vdly__cpu_test_harness__DOT__read_addr = vlSelfRef.cpu_test_harness__DOT__read_addr;
    __Vdly__cpu_test_harness__DOT__read_count = vlSelfRef.cpu_test_harness__DOT__read_count;
    __Vdly__cpu_test_harness__DOT__read_length = vlSelfRef.cpu_test_harness__DOT__read_length;
    __Vdly__cpu_test_harness__DOT__read_active = vlSelfRef.cpu_test_harness__DOT__read_active;
    if (vlSelfRef.cpu_test_harness__DOT__rst_n) {
        if (((~ (IData)(vlSelfRef.cpu_test_harness__DOT__write_active)) 
             & (IData)(vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awvalid))) {
            __Vdly__cpu_test_harness__DOT__write_active = 1U;
            __Vdly__cpu_test_harness__DOT__write_addr 
                = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awaddr;
            __Vdly__cpu_test_harness__DOT__write_count = 0U;
        } else if (((IData)(vlSelfRef.cpu_test_harness__DOT__write_active) 
                    & (IData)(vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wvalid))) {
            if ((1U & (IData)(vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wstrb))) {
                __VdlyVal__cpu_test_harness__DOT__ram__v0 
                    = (0x000000ffU & vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wdata);
                __VdlyDim0__cpu_test_harness__DOT__ram__v0 
                    = (0x000007ffU & (vlSelfRef.cpu_test_harness__DOT__write_addr 
                                      >> 2U));
                __VdlySet__cpu_test_harness__DOT__ram__v0 = 1U;
            }
            if ((2U & (IData)(vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wstrb))) {
                __VdlyVal__cpu_test_harness__DOT__ram__v1 
                    = (0x000000ffU & (vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wdata 
                                      >> 8U));
                __VdlyDim0__cpu_test_harness__DOT__ram__v1 
                    = (0x000007ffU & (vlSelfRef.cpu_test_harness__DOT__write_addr 
                                      >> 2U));
                __VdlySet__cpu_test_harness__DOT__ram__v1 = 1U;
            }
            if ((4U & (IData)(vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wstrb))) {
                __VdlyVal__cpu_test_harness__DOT__ram__v2 
                    = (0x000000ffU & (vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wdata 
                                      >> 0x10U));
                __VdlyDim0__cpu_test_harness__DOT__ram__v2 
                    = (0x000007ffU & (vlSelfRef.cpu_test_harness__DOT__write_addr 
                                      >> 2U));
                __VdlySet__cpu_test_harness__DOT__ram__v2 = 1U;
            }
            if ((8U & (IData)(vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wstrb))) {
                __VdlyVal__cpu_test_harness__DOT__ram__v3 
                    = (vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wdata 
                       >> 0x18U);
                __VdlyDim0__cpu_test_harness__DOT__ram__v3 
                    = (0x000007ffU & (vlSelfRef.cpu_test_harness__DOT__write_addr 
                                      >> 2U));
                __VdlySet__cpu_test_harness__DOT__ram__v3 = 1U;
            }
            if (vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wlast) {
                __Vdly__cpu_test_harness__DOT__write_active = 0U;
                __Vdly__cpu_test_harness__DOT__bvalid_reg = 1U;
            } else {
                __Vdly__cpu_test_harness__DOT__write_count 
                    = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.cpu_test_harness__DOT__write_count)));
                __Vdly__cpu_test_harness__DOT__write_addr 
                    = ((IData)(4U) + vlSelfRef.cpu_test_harness__DOT__write_addr);
            }
        }
        if (((IData)(vlSelfRef.cpu_test_harness__DOT__bvalid_reg) 
             & (IData)(vlSymsp->TOP__cpu_test_harness__DOT__m_axi.bready))) {
            __Vdly__cpu_test_harness__DOT__bvalid_reg = 0U;
        }
        if (((~ (IData)(vlSelfRef.cpu_test_harness__DOT__read_active)) 
             & (IData)(vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arvalid))) {
            __Vdly__cpu_test_harness__DOT__read_active = 1U;
            __Vdly__cpu_test_harness__DOT__read_addr 
                = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.araddr;
            __Vdly__cpu_test_harness__DOT__read_count = 0U;
            __Vdly__cpu_test_harness__DOT__read_length 
                = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arlen;
        } else if (((IData)(vlSelfRef.cpu_test_harness__DOT__read_active) 
                    & (IData)(vlSymsp->TOP__cpu_test_harness__DOT__m_axi.rready))) {
            if (((IData)(vlSelfRef.cpu_test_harness__DOT__read_count) 
                 == (IData)(vlSelfRef.cpu_test_harness__DOT__read_length))) {
                __Vdly__cpu_test_harness__DOT__read_active = 0U;
            } else {
                __Vdly__cpu_test_harness__DOT__read_count 
                    = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.cpu_test_harness__DOT__read_count)));
                __Vdly__cpu_test_harness__DOT__read_addr 
                    = ((IData)(4U) + vlSelfRef.cpu_test_harness__DOT__read_addr);
            }
        }
    } else {
        __Vdly__cpu_test_harness__DOT__bvalid_reg = 0U;
        __Vdly__cpu_test_harness__DOT__write_active = 0U;
        __Vdly__cpu_test_harness__DOT__write_addr = 0U;
        __Vdly__cpu_test_harness__DOT__write_count = 0U;
        __Vdly__cpu_test_harness__DOT__read_active = 0U;
        __Vdly__cpu_test_harness__DOT__read_addr = 0U;
        __Vdly__cpu_test_harness__DOT__read_count = 0U;
        __Vdly__cpu_test_harness__DOT__read_length = 0U;
    }
    vlSelfRef.cpu_test_harness__DOT__write_addr = __Vdly__cpu_test_harness__DOT__write_addr;
    vlSelfRef.cpu_test_harness__DOT__write_count = __Vdly__cpu_test_harness__DOT__write_count;
    if (__VdlySet__cpu_test_harness__DOT__ram__v0) {
        vlSelfRef.cpu_test_harness__DOT__ram[__VdlyDim0__cpu_test_harness__DOT__ram__v0] 
            = ((0xffffff00U & vlSelfRef.cpu_test_harness__DOT__ram
                [__VdlyDim0__cpu_test_harness__DOT__ram__v0]) 
               | (IData)(__VdlyVal__cpu_test_harness__DOT__ram__v0));
    }
    if (__VdlySet__cpu_test_harness__DOT__ram__v1) {
        vlSelfRef.cpu_test_harness__DOT__ram[__VdlyDim0__cpu_test_harness__DOT__ram__v1] 
            = ((0xffff00ffU & vlSelfRef.cpu_test_harness__DOT__ram
                [__VdlyDim0__cpu_test_harness__DOT__ram__v1]) 
               | ((IData)(__VdlyVal__cpu_test_harness__DOT__ram__v1) 
                  << 8U));
    }
    if (__VdlySet__cpu_test_harness__DOT__ram__v2) {
        vlSelfRef.cpu_test_harness__DOT__ram[__VdlyDim0__cpu_test_harness__DOT__ram__v2] 
            = ((0xff00ffffU & vlSelfRef.cpu_test_harness__DOT__ram
                [__VdlyDim0__cpu_test_harness__DOT__ram__v2]) 
               | ((IData)(__VdlyVal__cpu_test_harness__DOT__ram__v2) 
                  << 0x00000010U));
    }
    if (__VdlySet__cpu_test_harness__DOT__ram__v3) {
        vlSelfRef.cpu_test_harness__DOT__ram[__VdlyDim0__cpu_test_harness__DOT__ram__v3] 
            = ((0x00ffffffU & vlSelfRef.cpu_test_harness__DOT__ram
                [__VdlyDim0__cpu_test_harness__DOT__ram__v3]) 
               | ((IData)(__VdlyVal__cpu_test_harness__DOT__ram__v3) 
                  << 0x00000018U));
    }
    vlSelfRef.cpu_test_harness__DOT__bvalid_reg = __Vdly__cpu_test_harness__DOT__bvalid_reg;
    vlSelfRef.cpu_test_harness__DOT__write_active = __Vdly__cpu_test_harness__DOT__write_active;
    vlSelfRef.cpu_test_harness__DOT__read_addr = __Vdly__cpu_test_harness__DOT__read_addr;
    vlSelfRef.cpu_test_harness__DOT__read_count = __Vdly__cpu_test_harness__DOT__read_count;
    vlSelfRef.cpu_test_harness__DOT__read_length = __Vdly__cpu_test_harness__DOT__read_length;
    vlSelfRef.cpu_test_harness__DOT__read_active = __Vdly__cpu_test_harness__DOT__read_active;
    vlSymsp->TOP__cpu_test_harness__DOT__m_axi.rdata 
        = vlSelfRef.cpu_test_harness__DOT__ram[(0x000007ffU 
                                                & (vlSelfRef.cpu_test_harness__DOT__read_addr 
                                                   >> 2U))];
}

void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<128>/*4095:0*/ __Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data;
    VL_ZERO_W(4096, __Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data);
    VlWide<128>/*4095:0*/ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data;
    VL_ZERO_W(4096, __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data);
    CData/*0:0*/ __Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_valid;
    __Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_valid = 0;
    CData/*0:0*/ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_valid;
    __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_valid = 0;
    CData/*0:0*/ __Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_dirty;
    __Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_dirty = 0;
    CData/*0:0*/ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_dirty;
    __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_dirty = 0;
    IData/*22:0*/ __Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_block_tag;
    __Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_block_tag = 0;
    IData/*22:0*/ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_block_tag;
    __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_block_tag = 0;
    // Body
    if (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__rst_n) {
        __Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_dirty 
            = vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_cache_dirty;
        __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_dirty = 1U;
        if ((((IData)(vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rvalid) 
              & (5U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__state))) 
             & (IData)(vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rready))) {
            if (((IData)(vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rready) 
                 & (IData)(vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rlast))) {
                __Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_dirty = 0U;
                __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_dirty = 1U;
                __Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_block_tag 
                    = vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__req_block_tag;
                __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_block_tag = 0x007fffffU;
            }
            VL_ASSIGNSEL_WI(4096, 32, (0x00000fffU 
                                       & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__set_ptr), 5U)), __Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data, vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rdata);
            VL_ASSIGNSEL_WI(4096, 32, (0x00000fffU 
                                       & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__set_ptr), 5U)), __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data, 0xffffffffU);
        }
        __Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_valid 
            = vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_cache_valid;
        __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_valid = 1U;
        if (((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__invalidate) 
             & (0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__state)))) {
            __Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_valid = 0U;
            __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_valid = 1U;
        }
        if (((((3U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__state)) 
               & (IData)(vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.bvalid)) 
              & (0U == (IData)(vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.bresp))) 
             & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__flush_pending))) {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__flush_pending = 0U;
        }
        vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__set_ptr 
            = vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_set_ptr;
        vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__state 
            = vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_state;
    } else {
        __Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_dirty = 0U;
        __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_dirty = 1U;
        __Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_valid = 0U;
        __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_valid = 1U;
        vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__flush_pending = 0U;
        vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__set_ptr = 0U;
        vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__state = 0U;
    }
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__seq_stall 
        = ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__rst_n) 
           && (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__comb_stall));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_dirty 
        = (((IData)(__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_dirty) 
            & (IData)(__VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_dirty)) 
           | ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_dirty) 
              & (~ (IData)(__VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_dirty))));
    __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_dirty = 0U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_valid 
        = (((IData)(__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_valid) 
            & (IData)(__VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_valid)) 
           | ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_valid) 
              & (~ (IData)(__VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_valid))));
    __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_valid = 0U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[0U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[0U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[0U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[0U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[0U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[1U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[1U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[1U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[1U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[1U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[2U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[2U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[2U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[2U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[2U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[3U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[3U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[3U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[3U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[3U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[4U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[4U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[4U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[4U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[4U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[5U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[5U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[5U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[5U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[5U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[6U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[6U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[6U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[6U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[6U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[7U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[7U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[7U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[7U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[7U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[8U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[8U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[8U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[8U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[8U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[9U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[9U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[9U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[9U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[9U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[10U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[10U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[10U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[10U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[10U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[11U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[11U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[11U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[11U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[11U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[12U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[12U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[12U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[12U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[12U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[13U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[13U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[13U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[13U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[13U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[14U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[14U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[14U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[14U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[14U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[15U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[15U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[15U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[15U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[15U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[16U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[16U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[16U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[16U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[16U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[17U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[17U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[17U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[17U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[17U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[18U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[18U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[18U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[18U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[18U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[19U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[19U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[19U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[19U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[19U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[20U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[20U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[20U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[20U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[20U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[21U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[21U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[21U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[21U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[21U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[22U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[22U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[22U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[22U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[22U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[23U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[23U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[23U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[23U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[23U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[24U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[24U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[24U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[24U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[24U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[25U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[25U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[25U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[25U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[25U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[26U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[26U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[26U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[26U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[26U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[27U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[27U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[27U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[27U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[27U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[28U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[28U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[28U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[28U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[28U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[29U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[29U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[29U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[29U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[29U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[30U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[30U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[30U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[30U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[30U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[31U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[31U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[31U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[31U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[31U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[32U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[32U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[32U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[32U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[32U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[33U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[33U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[33U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[33U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[33U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[34U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[34U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[34U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[34U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[34U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[35U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[35U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[35U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[35U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[35U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[36U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[36U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[36U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[36U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[36U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[37U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[37U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[37U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[37U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[37U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[38U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[38U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[38U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[38U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[38U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[39U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[39U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[39U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[39U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[39U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[40U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[40U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[40U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[40U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[40U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[41U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[41U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[41U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[41U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[41U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[42U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[42U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[42U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[42U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[42U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[43U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[43U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[43U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[43U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[43U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[44U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[44U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[44U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[44U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[44U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[45U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[45U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[45U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[45U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[45U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[46U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[46U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[46U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[46U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[46U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[47U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[47U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[47U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[47U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[47U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[48U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[48U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[48U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[48U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[48U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[49U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[49U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[49U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[49U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[49U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[50U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[50U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[50U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[50U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[50U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[51U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[51U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[51U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[51U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[51U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[52U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[52U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[52U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[52U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[52U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[53U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[53U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[53U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[53U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[53U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[54U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[54U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[54U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[54U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[54U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[55U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[55U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[55U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[55U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[55U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[56U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[56U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[56U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[56U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[56U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[57U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[57U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[57U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[57U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[57U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[58U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[58U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[58U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[58U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[58U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[59U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[59U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[59U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[59U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[59U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[60U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[60U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[60U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[60U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[60U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[61U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[61U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[61U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[61U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[61U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[62U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[62U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[62U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[62U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[62U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[63U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[63U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[63U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[63U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[63U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[64U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[64U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[64U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[64U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[64U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[65U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[65U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[65U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[65U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[65U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[66U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[66U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[66U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[66U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[66U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[67U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[67U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[67U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[67U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[67U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[68U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[68U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[68U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[68U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[68U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[69U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[69U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[69U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[69U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[69U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[70U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[70U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[70U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[70U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[70U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[71U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[71U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[71U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[71U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[71U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[72U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[72U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[72U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[72U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[72U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[73U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[73U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[73U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[73U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[73U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[74U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[74U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[74U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[74U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[74U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[75U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[75U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[75U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[75U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[75U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[76U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[76U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[76U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[76U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[76U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[77U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[77U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[77U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[77U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[77U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[78U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[78U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[78U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[78U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[78U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[79U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[79U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[79U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[79U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[79U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[80U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[80U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[80U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[80U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[80U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[81U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[81U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[81U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[81U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[81U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[82U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[82U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[82U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[82U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[82U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[83U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[83U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[83U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[83U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[83U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[84U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[84U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[84U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[84U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[84U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[85U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[85U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[85U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[85U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[85U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[86U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[86U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[86U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[86U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[86U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[87U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[87U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[87U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[87U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[87U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[88U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[88U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[88U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[88U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[88U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[89U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[89U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[89U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[89U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[89U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[90U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[90U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[90U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[90U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[90U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[91U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[91U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[91U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[91U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[91U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[92U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[92U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[92U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[92U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[92U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[93U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[93U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[93U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[93U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[93U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[94U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[94U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[94U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[94U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[94U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[95U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[95U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[95U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[95U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[95U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[96U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[96U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[96U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[96U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[96U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[97U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[97U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[97U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[97U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[97U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[98U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[98U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[98U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[98U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[98U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[99U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[99U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[99U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[99U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[99U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[100U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[100U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[100U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[100U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[100U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[101U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[101U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[101U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[101U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[101U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[102U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[102U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[102U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[102U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[102U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[103U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[103U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[103U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[103U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[103U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[104U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[104U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[104U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[104U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[104U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[105U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[105U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[105U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[105U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[105U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[106U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[106U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[106U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[106U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[106U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[107U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[107U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[107U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[107U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[107U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[108U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[108U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[108U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[108U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[108U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[109U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[109U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[109U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[109U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[109U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[110U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[110U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[110U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[110U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[110U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[111U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[111U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[111U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[111U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[111U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[112U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[112U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[112U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[112U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[112U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[113U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[113U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[113U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[113U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[113U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[114U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[114U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[114U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[114U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[114U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[115U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[115U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[115U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[115U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[115U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[116U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[116U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[116U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[116U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[116U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[117U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[117U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[117U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[117U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[117U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[118U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[118U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[118U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[118U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[118U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[119U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[119U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[119U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[119U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[119U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[120U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[120U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[120U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[120U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[120U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[121U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[121U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[121U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[121U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[121U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[122U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[122U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[122U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[122U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[122U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[123U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[123U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[123U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[123U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[123U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[124U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[124U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[124U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[124U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[124U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[125U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[125U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[125U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[125U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[125U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[126U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[126U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[126U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[126U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[126U])));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[127U] 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[127U] 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[127U]) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[127U] 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data[127U])));
    VL_ASSIGN_W(4096, __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data, Vtop__ConstPool__CONST_h6e0f3f36_0);
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_block_tag 
        = ((__Vdly__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_block_tag 
            & __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_block_tag) 
           | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_block_tag 
              & (~ __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_block_tag)));
    __VdlyMask__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_block_tag = 0U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__set_ptr_out 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__set_ptr;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_state 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__state;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_set_ptr 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__set_ptr_out;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__i_cache_state 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_state;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__debug_i_set_ptr 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_set_ptr;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__debug_i_cache_state 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__i_cache_state;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__arbitrer__DOT__i_cache_state 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__i_cache_state;
    vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.bid = 0U;
    vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rid = 0U;
    vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rresp = 0U;
    vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.bresp = 0U;
    if ((0U != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__arbitrer__DOT__i_cache_state))) {
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.bid 
            = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.bid;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rid 
            = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.rid;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rresp 
            = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.rresp;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.bresp 
            = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.bresp;
    }
}

void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.clk = vlSelfRef.cpu_test_harness__DOT__clk;
    vlSelfRef.rst_n = vlSelfRef.cpu_test_harness__DOT__rst_n;
    vlSelfRef.aresetn = vlSelfRef.cpu_test_harness__DOT__aresetn;
    vlSelfRef.cpu_test_harness__DOT__aclk = vlSelfRef.cpu_test_harness__DOT__clk;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__rst_n 
        = vlSelfRef.cpu_test_harness__DOT__rst_n;
    vlSelfRef.aclk = vlSelfRef.cpu_test_harness__DOT__aclk;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__rst_n 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__rst_n;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__rst_n 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__rst_n;
}

void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdlyVal__cpu_test_harness__DOT__core__DOT__regfile__DOT__registers__v0;
    __VdlyVal__cpu_test_harness__DOT__core__DOT__regfile__DOT__registers__v0 = 0;
    CData/*4:0*/ __VdlyDim0__cpu_test_harness__DOT__core__DOT__regfile__DOT__registers__v0;
    __VdlyDim0__cpu_test_harness__DOT__core__DOT__regfile__DOT__registers__v0 = 0;
    CData/*4:0*/ __VdlyDim0__cpu_test_harness__DOT__core__DOT__regfile__DOT__registers__v1;
    __VdlyDim0__cpu_test_harness__DOT__core__DOT__regfile__DOT__registers__v1 = 0;
    // Body
    if (vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__rst_n) {
        if (((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__write_enable) 
             & (0U != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__address3)))) {
            __VdlyVal__cpu_test_harness__DOT__core__DOT__regfile__DOT__registers__v0 
                = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__write_data;
            __VdlyDim0__cpu_test_harness__DOT__core__DOT__regfile__DOT__registers__v0 
                = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__address3;
            vlSelfRef.__VdlyCommitQueuecpu_test_harness__DOT__core__DOT__regfile__DOT__registers.enqueue(__VdlyVal__cpu_test_harness__DOT__core__DOT__regfile__DOT__registers__v0, (IData)(__VdlyDim0__cpu_test_harness__DOT__core__DOT__regfile__DOT__registers__v0));
        }
    } else {
        vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 0x00000020U, vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__unnamedblk1__DOT__i)) {
            __VdlyDim0__cpu_test_harness__DOT__core__DOT__regfile__DOT__registers__v1 
                = (0x0000001fU & vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__unnamedblk1__DOT__i);
            vlSelfRef.__VdlyCommitQueuecpu_test_harness__DOT__core__DOT__regfile__DOT__registers.enqueue(0U, (IData)(__VdlyDim0__cpu_test_harness__DOT__core__DOT__regfile__DOT__registers__v1));
            vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__unnamedblk1__DOT__i);
        }
    }
    vlSelfRef.__VdlyCommitQueuecpu_test_harness__DOT__core__DOT__regfile__DOT__registers.commit(vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers);
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[0U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[0U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[1U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[1U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[2U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[2U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[3U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[3U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[4U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[4U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[5U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[5U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[6U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[6U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[7U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[7U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[8U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[8U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[9U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[9U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[10U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[10U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[11U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[11U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[12U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[12U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[13U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[13U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[14U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[14U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[15U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[15U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[16U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[16U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[17U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[17U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[18U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[18U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[19U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[19U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[20U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[20U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[21U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[21U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[22U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[22U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[23U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[23U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[24U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[24U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[25U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[25U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[26U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[26U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[27U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[27U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[28U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[28U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[29U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[29U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[30U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[30U];
    vlSelfRef.cpu_test_harness__DOT__regfile__DOT__registers[31U] 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[31U];
}

void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vilp1;
    // Body
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x0000007fU)) {
        vlSelfRef.cpu_test_harness__DOT__data_memory__DOT__mem[__Vilp1] 
            = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data
            [__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__invalidate_done 
        = ((~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_valid)) 
           & (0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__state)));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__flush_done 
        = ((~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_dirty)) 
           & (0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__state)));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache_flush_done 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__flush_done;
}

void Vtop___024root___nba_sequent__TOP__6(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__invalidate 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__fence_i_request;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__req_block_tag 
        = (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__address 
           >> 9U);
}

void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__flush_done 
        = ((~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_dirty)) 
           & (0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__state)));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__invalidate_done 
        = ((~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_valid)) 
           & (0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__state)));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache_invalidate_done 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__invalidate_done;
}

void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rdata = 0U;
    vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.awready = 0U;
    vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.wready = 0U;
    vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.bvalid = 0U;
    vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.arready = 0U;
    vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rlast = 0U;
    vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rvalid = 0U;
    if ((0U != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__arbitrer__DOT__i_cache_state))) {
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rdata 
            = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.rdata;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.awready 
            = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awready;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.wready 
            = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wready;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.bvalid 
            = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.bvalid;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.arready 
            = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arready;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rlast 
            = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.rlast;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rvalid 
            = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.rvalid;
    }
}

void Vtop___024root___nba_comb__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.bid = 0U;
    vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rid = 0U;
    vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rresp = 0U;
    vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awlen = 0x7fU;
    vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awsize = 2U;
    vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awburst = 1U;
    vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arlen = 0x7fU;
    vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arsize = 2U;
    vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arburst = 1U;
    vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awid = 0U;
    vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arid = 0U;
    vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wstrb = 0x0fU;
    if ((0U != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__arbitrer__DOT__i_cache_state))) {
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awlen 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.awlen;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awsize 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.awsize;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awburst 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.awburst;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arlen 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.arlen;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arsize 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.arsize;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arburst 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.arburst;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awid 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.awid;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arid 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.arid;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wstrb 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.wstrb;
    } else if (((0U != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__arbitrer__DOT__d_cache_state)) 
                & (0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__arbitrer__DOT__i_cache_state)))) {
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awlen 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.awlen;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awsize 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.awsize;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awburst 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.awburst;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arlen 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.arlen;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arsize 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.arsize;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arburst 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.arburst;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awid 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.awid;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arid 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.arid;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wstrb 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.wstrb;
    }
    vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.bresp = 0U;
    if ((0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__arbitrer__DOT__i_cache_state))) {
        if (((0U != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__arbitrer__DOT__d_cache_state)) 
             & (0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__arbitrer__DOT__i_cache_state)))) {
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.bid 
                = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.bid;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rid 
                = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.rid;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rresp 
                = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.rresp;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.bresp 
                = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.bresp;
        }
    }
    vlSelfRef.cpu_test_harness__DOT__m_axi_awlen = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awlen;
    vlSelfRef.cpu_test_harness__DOT__m_axi_awsize = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awsize;
    vlSelfRef.cpu_test_harness__DOT__m_axi_awburst 
        = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awburst;
    vlSelfRef.cpu_test_harness__DOT__m_axi_arlen = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arlen;
    vlSelfRef.cpu_test_harness__DOT__m_axi_arsize = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arsize;
    vlSelfRef.cpu_test_harness__DOT__m_axi_arburst 
        = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arburst;
    vlSelfRef.cpu_test_harness__DOT__m_axi_awid = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awid;
    vlSelfRef.cpu_test_harness__DOT__m_axi_arid = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arid;
    vlSelfRef.cpu_test_harness__DOT__m_axi_wstrb = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wstrb;
    vlSelfRef.m_axi_awlen = vlSelfRef.cpu_test_harness__DOT__m_axi_awlen;
    vlSelfRef.m_axi_awsize = vlSelfRef.cpu_test_harness__DOT__m_axi_awsize;
    vlSelfRef.m_axi_awburst = vlSelfRef.cpu_test_harness__DOT__m_axi_awburst;
    vlSelfRef.m_axi_arlen = vlSelfRef.cpu_test_harness__DOT__m_axi_arlen;
    vlSelfRef.m_axi_arsize = vlSelfRef.cpu_test_harness__DOT__m_axi_arsize;
    vlSelfRef.m_axi_arburst = vlSelfRef.cpu_test_harness__DOT__m_axi_arburst;
    vlSelfRef.m_axi_awid = vlSelfRef.cpu_test_harness__DOT__m_axi_awid;
    vlSelfRef.m_axi_arid = vlSelfRef.cpu_test_harness__DOT__m_axi_arid;
    vlSelfRef.m_axi_wstrb = vlSelfRef.cpu_test_harness__DOT__m_axi_wstrb;
}

void Vtop___024root___nba_comb__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rdata = 0U;
    vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.awready = 0U;
    vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.wready = 0U;
    vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.bvalid = 0U;
    vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.arready = 0U;
    vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rlast = 0U;
    vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rvalid = 0U;
    if ((0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__arbitrer__DOT__i_cache_state))) {
        if (((0U != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__arbitrer__DOT__d_cache_state)) 
             & (0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__arbitrer__DOT__i_cache_state)))) {
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rdata 
                = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.rdata;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.awready 
                = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awready;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.wready 
                = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wready;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.bvalid 
                = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.bvalid;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.arready 
                = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arready;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rlast 
                = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.rlast;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rvalid 
                = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.rvalid;
        }
    }
}

void Vtop___024root___nba_sequent__TOP__7(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__rst_n 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__rst_n;
}

void Vtop___024root___nba_comb__TOP__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__hit 
        = ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_valid) 
           & (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__req_block_tag 
              == vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_block_tag));
}

void Vtop___024root___nba_comb__TOP__7(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_state 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__state;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_cache_valid 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_valid;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_cache_dirty 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_dirty;
    vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.wlast = 0U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_set_ptr 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__set_ptr;
    if (VL_UNLIKELY(((8U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__state))))) {
        VL_WRITEF_NX("CACHE FSM STATE ERROR\n",0);
    } else if ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__state))) {
        if (VL_UNLIKELY(((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__state))))) {
            VL_WRITEF_NX("CACHE FSM STATE ERROR\n",0);
        } else if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__state))) {
            if (vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rvalid) {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_set_ptr 
                    = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__set_ptr)));
                if (vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rlast) {
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_state = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_cache_valid = 1U;
                }
            }
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.awvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.wvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.bready = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.arvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rready = 1U;
        } else {
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.araddr 
                = (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__req_block_tag 
                   << 9U);
            if (vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.arready) {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_state = 5U;
            }
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.awvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.wvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.bready = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.arvalid = 1U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rready = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__state))) {
            if (((IData)(vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.bvalid) 
                 & (0U == (IData)(vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.bresp)))) {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_cache_dirty = 0U;
                vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_state 
                    = ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__flush_pending)
                        ? 0U : 4U);
            } else if (VL_UNLIKELY((((IData)(vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.bvalid) 
                                     & (0U != (IData)(vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.bresp)))))) {
                VL_WRITEF_NX("ERROR WRITING TO MAIN MEMORY\n",0);
            }
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.awvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.wvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.bready = 1U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.arvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rready = 0U;
        } else {
            if (vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.wready) {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_set_ptr 
                    = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__set_ptr)));
            }
            if ((0x7fU == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__set_ptr))) {
                vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.wlast = 1U;
                if (vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.wready) {
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_state = 3U;
                }
            }
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.awvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.wvalid = 1U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.bready = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.arvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rready = 0U;
        }
    } else if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__state))) {
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.awaddr 
            = (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_block_tag 
               << 9U);
        if (vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.awready) {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_state = 2U;
        }
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.awvalid = 1U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.wvalid = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.bready = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.arvalid = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rready = 0U;
    } else {
        if (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__invalidate) {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_state = 0U;
        } else if (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__hit) {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__read_data 
                = (((0U == (0x0000001fU & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__req_index), 5U)))
                     ? 0U : (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data
                             [(((IData)(0x0000001fU) 
                                + (0x00000fffU & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__req_index), 5U))) 
                               >> 5U)] << ((IData)(0x00000020U) 
                                           - (0x0000001fU 
                                              & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__req_index), 5U))))) 
                   | (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data
                      [(0x0000007fU & (VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__req_index), 5U) 
                                       >> 5U))] >> 
                      (0x0000001fU & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__req_index), 5U))));
        } else if ((1U & (~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__hit)))) {
            if (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_dirty) {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_state = 1U;
            } else if ((1U & (~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_dirty)))) {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_state = 4U;
            }
        }
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.awvalid = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.wvalid = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.bready = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.arvalid = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rready = 0U;
        vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_set_ptr = 0U;
    }
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_set_ptr_out 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_set_ptr;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__comb_stall 
        = (1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__hit) 
                    & (0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_state)))));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instruction 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__read_data;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_next_set_ptr 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_set_ptr_out;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_stall 
        = ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__comb_stall) 
           | (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__seq_stall));
    vlSelfRef.cpu_test_harness__DOT__instruction = vlSelfRef.cpu_test_harness__DOT__core__DOT__instruction;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__debug_instruction 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__instruction;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__shamt 
        = (0x0000001fU & (vlSelfRef.cpu_test_harness__DOT__core__DOT__instruction 
                          >> 0x00000014U));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__dest_reg 
        = (0x0000001fU & (vlSelfRef.cpu_test_harness__DOT__core__DOT__instruction 
                          >> 7U));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__system_imm 
        = (vlSelfRef.cpu_test_harness__DOT__core__DOT__instruction 
           >> 0x00000014U);
    vlSelfRef.cpu_test_harness__DOT__core__DOT__func7 
        = (vlSelfRef.cpu_test_harness__DOT__core__DOT__instruction 
           >> 0x00000019U);
    vlSelfRef.cpu_test_harness__DOT__core__DOT__source_reg1 
        = (0x0000001fU & (vlSelfRef.cpu_test_harness__DOT__core__DOT__instruction 
                          >> 0x0000000fU));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__raw_imm 
        = (vlSelfRef.cpu_test_harness__DOT__core__DOT__instruction 
           >> 7U);
    vlSelfRef.cpu_test_harness__DOT__core__DOT__f3 
        = (7U & (vlSelfRef.cpu_test_harness__DOT__core__DOT__instruction 
                 >> 0x0000000cU));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__source_reg2 
        = (0x0000001fU & (vlSelfRef.cpu_test_harness__DOT__core__DOT__instruction 
                          >> 0x00000014U));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__op 
        = (0x0000007fU & vlSelfRef.cpu_test_harness__DOT__core__DOT__instruction);
    vlSelfRef.cpu_test_harness__DOT__core__DOT__debug_i_next_set_ptr 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_next_set_ptr;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__i_cache_stall 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_stall;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__shamt 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__shamt;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__address3 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__dest_reg;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__system_imm 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__system_imm;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func7 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__func7;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__address1 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__source_reg1;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__raw_imm;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__f3 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__f3;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__f3 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__f3;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__f3;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__address2 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__source_reg2;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__op;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__debug_i_cache_stall 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__i_cache_stall;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__sign_extend 
        = (1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__f3) 
                    >> 2U)));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__fence_i = 0U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__trap_cause = 0U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write = 0U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__jump = 0U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__write_back_source = 0U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__trap_valid = 0U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__branch = 0U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__second_add_source = 0U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__fence = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                    if ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                        if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                            if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                                if ((0U != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3))) {
                                    if ((1U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3))) {
                                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__fence_i = 1U;
                                    }
                                }
                                if ((0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3))) {
                                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__fence = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_read = 0U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_write = 0U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_source = 0U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
    if ((0x00000040U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
        if ((0x00000020U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
            if ((0x00000010U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                            if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                                if (((0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3)) 
                                     & (0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__system_imm)))) {
                                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__trap_cause = 0x0bU;
                                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__trap_valid = 1U;
                                } else if (((0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3)) 
                                            & (1U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__system_imm)))) {
                                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__trap_cause = 3U;
                                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__trap_valid = 1U;
                                }
                            }
                        }
                    }
                }
                if ((8U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_read = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_write = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
                } else if ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_read = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_write = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
                } else if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                    if ((1U & (~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op)))) {
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write = 0U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_read = 0U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_write = 0U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
                    }
                } else {
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_read = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_write = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
                }
            } else {
                if ((8U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                    if ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                        if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                            if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write = 1U;
                                if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                              >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                                  >> 3U)))) {
                                        if ((0U != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3))) {
                                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write = 0U;
                                        }
                                    }
                                }
                                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 3U;
                                if ((8U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 3U;
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                                   >> 3U)))) {
                                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
                                }
                            } else {
                                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write = 0U;
                                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
                            }
                            if ((1U & (~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op)))) {
                                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                            }
                        } else {
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write = 0U;
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
                        }
                    } else {
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write = 0U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
                    }
                } else if ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                    if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                        if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write = 1U;
                            if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                              >> 3U)))) {
                                    if ((0U != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3))) {
                                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write = 0U;
                                    }
                                }
                            }
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 3U;
                            if ((8U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 3U;
                            } else if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                                 >> 3U)))) {
                                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
                            }
                        } else {
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write = 0U;
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
                        }
                        if ((1U & (~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op)))) {
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                        }
                    } else {
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write = 0U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
                    }
                } else {
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write = 0U;
                    if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                        if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 1U;
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 2U;
                        } else {
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
                        }
                    } else {
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
                    }
                }
                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_read = 0U;
                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_write = 0U;
            }
            if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                    if ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                        if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                            if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__jump = 1U;
                                if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                              >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                                  >> 3U)))) {
                                        if ((0U != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3))) {
                                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__jump = 0U;
                                        }
                                    }
                                }
                                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__write_back_source = 2U;
                                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__branch = 0U;
                                if ((8U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__second_add_source = 0U;
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                                   >> 3U)))) {
                                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__second_add_source = 2U;
                                }
                                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_source = 0U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                    if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                        if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__jump = 1U;
                            if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                              >> 3U)))) {
                                    if ((0U != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3))) {
                                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__jump = 0U;
                                    }
                                }
                            }
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__write_back_source = 2U;
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__branch = 0U;
                            if ((8U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__second_add_source = 0U;
                            } else if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                                 >> 3U)))) {
                                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__second_add_source = 2U;
                            }
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_source = 0U;
                        }
                    }
                } else if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                    if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__branch = 1U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_source = 0U;
                    }
                }
            }
        } else {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write = 0U;
            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_read = 0U;
            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_write = 0U;
            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
        }
    } else if ((0x00000020U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write 
            = ((1U & ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                      >> 4U)) && ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                            >> 3U))) 
                                  && ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))
                                       ? ((1U & ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op)))
                                       : ((1U & ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))))));
        if ((0x00000010U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
            if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                    if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                        if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__jump = 0U;
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__write_back_source = 3U;
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__branch = 0U;
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__second_add_source = 1U;
                        }
                    }
                } else if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                    if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__write_back_source = 0U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__branch = 0U;
                    }
                }
                if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                        if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_source = 0U;
                        }
                    }
                }
            }
            if ((8U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
            } else if ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                    if ((1U & (~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op)))) {
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                    }
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source 
                        = ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))
                            ? 4U : 0U);
                } else {
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
                }
            } else if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op 
                    = ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))
                        ? 2U : 0U);
                if ((1U & (~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op)))) {
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
                }
            } else {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
            }
        } else {
            if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                        if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__branch = 0U;
                            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_source = 1U;
                        }
                    }
                }
            }
            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source 
                = ((8U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))
                    ? 0U : ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))
                             ? 0U : ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))
                                      ? ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))
                                          ? 1U : 0U)
                                      : 0U)));
        }
        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_read = 0U;
        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_write 
            = ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                         >> 4U))) && ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                                >> 3U))) 
                                      && ((1U & (~ 
                                                 ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                                  >> 2U))) 
                                          && ((1U & 
                                               ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                                >> 1U)) 
                                              && (1U 
                                                  & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))))));
    } else if ((0x00000010U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write 
            = ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                         >> 3U))) && ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))
                                       ? ((1U & ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op)))
                                       : ((1U & ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                                 >> 1U)) 
                                          && ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op)) 
                                              && (1U 
                                                  & (~ 
                                                     (((1U 
                                                        == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3)) 
                                                       & (0U 
                                                          != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func7))) 
                                                      | (((5U 
                                                           == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3)) 
                                                          & (0U 
                                                             != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func7))) 
                                                         & (0x20U 
                                                            != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func7))))))))));
        if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                    if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__jump = 0U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__write_back_source = 3U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__branch = 0U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__second_add_source = 0U;
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__jump = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__write_back_source = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__branch = 0U;
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                    if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_source = 1U;
                    }
                }
            }
        }
        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_read = 0U;
        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_write = 0U;
        if ((8U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
        } else if ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
            if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                if ((1U & (~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op)))) {
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                }
                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source 
                    = ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))
                        ? 4U : 0U);
            } else {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
            }
        } else {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op 
                = ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))
                    ? ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))
                        ? 2U : 0U) : 0U);
            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
        }
    } else {
        if ((8U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
            if ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                    if ((1U & (~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op)))) {
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write = 0U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_read = 0U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_write = 0U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
                    }
                } else {
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_read = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_write = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
                }
            } else {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write = 0U;
                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_read = 0U;
                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_write = 0U;
                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
            }
        } else {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write 
                = ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                             >> 2U))) && ((1U & ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))));
            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_read 
                = ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                             >> 2U))) && ((1U & ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))));
            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_write = 0U;
            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = 0U;
            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = 0U;
        }
        if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                    if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))) {
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__write_back_source = 1U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__branch = 0U;
                        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_source = 1U;
                    }
                }
            }
        }
    }
    vlSelfRef.cpu_test_harness__DOT__core__DOT__fence_i 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__fence_i;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__trap_cause 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__trap_cause;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__reg_write 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__reg_write;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__write_back_source 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__write_back_source;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control_trap_valid 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__trap_valid;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__second_add_source 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__second_add_source;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__fence 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__fence;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__mem_read_enable 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_read;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__mem_write 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__mem_write;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_control = 0U;
    if ((0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op))) {
        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_control = 0U;
    } else if ((1U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op))) {
        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_control 
            = ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3))
                ? ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3))
                    ? 7U : 5U) : ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3))
                                   ? 0U : 1U));
    } else if ((2U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_op))) {
        if ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3))) {
            if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3))) {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_control 
                    = ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3))
                        ? 2U : 3U);
            } else if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3))) {
                if ((0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func7))) {
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_control = 6U;
                } else if ((0x20U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func7))) {
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_control = 9U;
                }
            } else {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_control = 8U;
            }
        } else {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_control 
                = ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3))
                    ? ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3))
                        ? 7U : 5U) : ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3))
                                       ? 4U : ((0x33U 
                                                == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__op))
                                                ? (
                                                   (0x20U 
                                                    == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func7))
                                                    ? 1U
                                                    : 0U)
                                                : 0U)));
        }
    } else {
        vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_control = 0U;
    }
    vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_source 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_source;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__imm_source 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__imm_source;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__trap_valid 
        = ((~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__i_cache_stall)) 
           & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control_trap_valid));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__flush 
        = ((~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__i_cache_stall)) 
           & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__fence));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_read_enable 
        = ((~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__i_cache_stall)) 
           & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__mem_read_enable));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_write_enable 
        = ((~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__i_cache_stall)) 
           & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__mem_write));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_control 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_control;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__imm_source 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__imm_source;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__read_enable 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_read_enable;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__write_enable 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_write_enable;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_control 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_control;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__immediate 
        = ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__imm_source))
            ? (0xfffff000U & ((- (IData)((1U & (~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__imm_source))))) 
                              & ((vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src 
                                  << 7U) & (- (IData)(
                                                      (1U 
                                                       & (~ 
                                                          ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__imm_source) 
                                                           >> 1U))))))))
            : ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__imm_source))
                ? ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__imm_source))
                    ? (((- (IData)((1U & (vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src 
                                          >> 0x00000018U)))) 
                        << 0x00000014U) | ((((0x000001feU 
                                              & (vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src 
                                                 >> 4U)) 
                                             | (1U 
                                                & (vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src 
                                                   >> 0x0000000dU))) 
                                            << 0x0000000bU) 
                                           | (0x000007feU 
                                              & (vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src 
                                                 >> 0x0000000dU))))
                    : (((- (IData)((1U & (vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src 
                                          >> 0x00000018U)))) 
                        << 0x0000000cU) | ((0x00000800U 
                                            & (vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src 
                                               << 0x0000000bU)) 
                                           | ((0x000007e0U 
                                               & (vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src 
                                                  >> 0x0000000dU)) 
                                              | (0x0000001eU 
                                                 & vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src)))))
                : (((- (IData)((1U & (vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src 
                                      >> 0x00000018U)))) 
                    << 0x0000000cU) | (0x00000fffU 
                                       & ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__imm_source))
                                           ? ((0x00000fe0U 
                                               & (vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src 
                                                  >> 0x0000000dU)) 
                                              | (0x0000001fU 
                                                 & vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src))
                                           : (vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src 
                                              >> 0x0000000dU))))));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__immediate 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__sign_extender__DOT__immediate;
}

void Vtop___024root___nba_comb__TOP__8(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__read_data1 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers
        [vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__address1];
    vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__read_data2 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__registers
        [vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__address2];
    vlSelfRef.cpu_test_harness__DOT__core__DOT__read_reg1 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__read_data1;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__read_reg2 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__read_data2;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src1 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__read_reg1;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__pc_plus_second_add 
        = ((0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__second_add_source))
            ? (vlSelfRef.cpu_test_harness__DOT__core__DOT__pc 
               + vlSelfRef.cpu_test_harness__DOT__core__DOT__immediate)
            : ((1U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__second_add_source))
                ? vlSelfRef.cpu_test_harness__DOT__core__DOT__immediate
                : (0xfffffffeU & ((- (IData)((2U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__second_add_source)))) 
                                  & (vlSelfRef.cpu_test_harness__DOT__core__DOT__immediate 
                                     + vlSelfRef.cpu_test_harness__DOT__core__DOT__read_reg1)))));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__reg_read 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__read_reg2;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__shift_amount 
        = (0x0000001fU & ((0x13U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__op))
                           ? (vlSelfRef.cpu_test_harness__DOT__core__DOT__instruction 
                              >> 0x00000014U) : (vlSelfRef.cpu_test_harness__DOT__core__DOT__read_reg2 
                                                 & (- (IData)(
                                                              (0x33U 
                                                               == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__op)))))));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_src2 
        = ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_source)
            ? vlSelfRef.cpu_test_harness__DOT__core__DOT__immediate
            : vlSelfRef.cpu_test_harness__DOT__core__DOT__read_reg2);
    vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__shamt 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__shift_amount;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src2 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_src2;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__unsigned_less 
        = (vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src1 
           < vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src2);
    if ((8U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_control))) {
        if ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_control))) {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_result = 0U;
        } else if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_control))) {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_result = 0U;
        } else if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_control))) {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_result 
                = (vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src1 
                   >> (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__shamt));
            if ((vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src1 
                 >> 0x1fU)) {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_result 
                    = (vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_result 
                       | VL_SHIFTL_III(32,32,32, (IData)(0xffffffffU), 
                                       ((IData)(0x00000020U) 
                                        - (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__shamt))));
            }
        } else {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_result 
                = (vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src1 
                   ^ vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src2);
        }
    } else {
        vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_result 
            = ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_control))
                ? ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_control))
                    ? ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_control))
                        ? (vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src1 
                           < vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src2)
                        : (vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src1 
                           >> (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__shamt)))
                    : ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_control))
                        ? (VL_LTS_III(32, vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src1, vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src2)
                            ? 1U : 0U) : (vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src1 
                                          << (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__shamt))))
                : ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_control))
                    ? ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_control))
                        ? (vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src1 
                           | vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src2)
                        : (vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src1 
                           & vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src2))
                    : ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_control))
                        ? ((IData)(1U) + (vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src1 
                                          + (~ vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src2)))
                        : (vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src1 
                           + vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src2))));
    }
    vlSelfRef.cpu_test_harness__DOT__core__DOT__unsigned_less 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__unsigned_less;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__zero 
        = (0U == vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_result);
    vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__last_bit 
        = (1U & vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_result);
    vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_result 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_result;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_unsigned_less 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__unsigned_less;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_zero 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__zero;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__last_bit 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_inst__DOT__last_bit;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__alu_result_address 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_result;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__address 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_result;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_unsigned_less 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_unsigned_less;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_zero 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_zero;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_last_bit 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__last_bit;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__offset 
        = (3U & vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__alu_result_address);
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__req_index 
        = (0x0000007fU & (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__address 
                          >> 2U));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__req_block_tag 
        = (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__address 
           >> 9U);
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_last_bit 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_last_bit;
    if ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__f3))) {
        if ((1U & (~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__f3) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__f3))) {
                if ((0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__offset))) {
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__data 
                        = (0x0000ffffU & vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__reg_read);
                } else if ((2U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__offset))) {
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__data 
                        = (0xffff0000U & VL_SHIFTL_III(32,32,32, vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__reg_read, 0x00000010U));
                }
            } else {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__data 
                    = ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__offset))
                        ? ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__offset))
                            ? (0xff000000U & VL_SHIFTL_III(32,32,32, vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__reg_read, 0x00000018U))
                            : (0x00ff0000U & VL_SHIFTL_III(32,32,32, vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__reg_read, 0x00000010U)))
                        : ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__offset))
                            ? (0x0000ff00U & VL_SHIFTL_III(32,32,32, vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__reg_read, 8U))
                            : (0x000000ffU & vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__reg_read)));
            }
        }
        vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__byte_enable 
            = ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__f3))
                ? 0U : ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__f3))
                         ? ((0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__offset))
                             ? 3U : ((2U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__offset))
                                      ? 0x0cU : 0U))
                         : ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__offset))
                             ? ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__offset))
                                 ? 8U : 4U) : ((1U 
                                                & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__offset))
                                                ? 2U
                                                : 1U))));
    } else if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__f3))) {
        if ((1U & (~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__f3)))) {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__data 
                = vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__reg_read;
        }
        vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__byte_enable 
            = ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__f3))
                ? 0U : ((0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__offset))
                         ? 0x0fU : 0U));
    } else if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__f3))) {
        if ((0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__offset))) {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__data 
                = (0x0000ffffU & vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__reg_read);
            vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__byte_enable = 3U;
        } else if ((2U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__offset))) {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__data 
                = (0xffff0000U & VL_SHIFTL_III(32,32,32, vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__reg_read, 0x00000010U));
            vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__byte_enable = 0x0cU;
        } else {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__byte_enable = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__offset))) {
        if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__offset))) {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__data 
                = (0xff000000U & VL_SHIFTL_III(32,32,32, vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__reg_read, 0x00000018U));
            vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__byte_enable = 8U;
        } else {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__data 
                = (0x00ff0000U & VL_SHIFTL_III(32,32,32, vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__reg_read, 0x00000010U));
            vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__byte_enable = 4U;
        }
    } else if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__offset))) {
        vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__data 
            = (0x0000ff00U & VL_SHIFTL_III(32,32,32, vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__reg_read, 8U));
        vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__byte_enable = 2U;
    } else {
        vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__data 
            = (0x000000ffU & vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__reg_read);
        vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__byte_enable = 1U;
    }
    __Vtableidx2 = ((((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_zero) 
                      << 6U) | ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_last_bit) 
                                << 5U)) | (((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__branch) 
                                            << 4U) 
                                           | (((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__alu_unsigned_less) 
                                               << 3U) 
                                              | (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__func3))));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__assert_branch 
        = Vtop__ConstPool__TABLE_h039306e2_0[__Vtableidx2];
    vlSelfRef.cpu_test_harness__DOT__core__DOT__mem_write_data 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__data;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__mem_byte_enable 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__byte_enable;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__pc_source 
        = ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__jump) 
           | (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__assert_branch));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__write_data 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__mem_write_data;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__be_mask 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__mem_byte_enable;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__byte_enable 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__mem_byte_enable;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__pc_source 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__control__DOT__pc_source;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__valid 
        = (0U != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__be_mask));
    __Vtableidx1 = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__byte_enable;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__byte_enable_mask 
        = Vtop__ConstPool__TABLE_h523ce058_0[__Vtableidx1];
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__actual_write_enable 
        = ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__write_enable) 
           & (0U != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__byte_enable)));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__mem_read_write_back_valid 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__valid;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__wb_valid 
        = ((1U & ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__write_back_source) 
                  >> 1U)) || ((1U & (~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__write_back_source))) 
                              || (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__mem_read_write_back_valid)));
}

void Vtop___024root___nba_comb__TOP__9(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__9\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdfgRegularize_hebeb780c_0_3;
    __VdfgRegularize_hebeb780c_0_3 = 0;
    // Body
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__hit 
        = ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_valid) 
           & (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__req_block_tag 
              == vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_block_tag));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_state 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__state;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_cache_valid 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_valid;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_cache_dirty 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_dirty;
    vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.wlast = 0U;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_set_ptr 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__set_ptr;
    if (VL_UNLIKELY(((8U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__state))))) {
        VL_WRITEF_NX("CACHE FSM STATE ERROR\n",0);
    } else if ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__state))) {
        if (VL_UNLIKELY(((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__state))))) {
            VL_WRITEF_NX("CACHE FSM STATE ERROR\n",0);
        } else if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__state))) {
            if (vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rvalid) {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_set_ptr 
                    = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__set_ptr)));
                if (vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rlast) {
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_state = 0U;
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_cache_valid = 1U;
                }
            }
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.awvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.wvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.bready = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.arvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rready = 1U;
        } else {
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.araddr 
                = (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__req_block_tag 
                   << 9U);
            if (vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.arready) {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_state = 5U;
            }
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.awvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.wvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.bready = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.arvalid = 1U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rready = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__state))) {
            if (((IData)(vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.bvalid) 
                 & (0U == (IData)(vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.bresp)))) {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_cache_dirty = 0U;
                vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_state 
                    = ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__flush_pending)
                        ? 0U : 4U);
            } else if (VL_UNLIKELY((((IData)(vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.bvalid) 
                                     & (0U != (IData)(vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.bresp)))))) {
                VL_WRITEF_NX("ERROR WRITING TO MAIN MEMORY\n",0);
            }
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.awvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.wvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.bready = 1U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.arvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rready = 0U;
        } else {
            if (vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.wready) {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_set_ptr 
                    = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__set_ptr)));
            }
            if ((0x7fU == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__set_ptr))) {
                vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.wlast = 1U;
                if (vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.wready) {
                    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_state = 3U;
                }
            }
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.awvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.wvalid = 1U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.bready = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.arvalid = 0U;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rready = 0U;
        }
    } else if ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__state))) {
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.awaddr 
            = (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_block_tag 
               << 9U);
        if (vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.awready) {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_state = 2U;
        }
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.awvalid = 1U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.wvalid = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.bready = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.arvalid = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rready = 0U;
    } else {
        if (VL_UNLIKELY((((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__read_enable) 
                          & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__write_enable))))) {
            VL_WRITEF_NX("E : CAN't READ WRITE AT THE SAME TIME\n",0);
        } else if ((((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__flush) 
                     & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_valid)) 
                    & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_dirty))) {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_state = 1U;
        } else if (((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__hit) 
                    & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__read_enable))) {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__read_data 
                = (((0U == (0x0000001fU & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__req_index), 5U)))
                     ? 0U : (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data
                             [(((IData)(0x0000001fU) 
                                + (0x00000fffU & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__req_index), 5U))) 
                               >> 5U)] << ((IData)(0x00000020U) 
                                           - (0x0000001fU 
                                              & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__req_index), 5U))))) 
                   | (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data
                      [(0x0000007fU & (VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__req_index), 5U) 
                                       >> 5U))] >> 
                      (0x0000001fU & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__req_index), 5U))));
        } else if (((~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__hit)) 
                    & ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__read_enable) 
                       ^ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__actual_write_enable)))) {
            if (vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_dirty) {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_state = 1U;
            } else if ((1U & (~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_dirty)))) {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_state = 4U;
            }
        }
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.awvalid = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.wvalid = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.bready = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.arvalid = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rready = 0U;
        vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_set_ptr = 0U;
    }
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_set_ptr_out 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_set_ptr;
    vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wlast = 0U;
    vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awvalid = 0U;
    vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wvalid = 0U;
    vlSymsp->TOP__cpu_test_harness__DOT__m_axi.bready = 0U;
    vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arvalid = 0U;
    vlSymsp->TOP__cpu_test_harness__DOT__m_axi.rready = 0U;
    vlSymsp->TOP__cpu_test_harness__DOT__m_axi.araddr = 0U;
    vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awaddr = 0U;
    if ((0U != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__arbitrer__DOT__i_cache_state))) {
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wlast 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.wlast;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awvalid 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.awvalid;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wvalid 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.wvalid;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.bready 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.bready;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arvalid 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.arvalid;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.rready 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rready;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.araddr 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.araddr;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awaddr 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.awaddr;
    } else if (((0U != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__arbitrer__DOT__d_cache_state)) 
                & (0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__arbitrer__DOT__i_cache_state)))) {
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wlast 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.wlast;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awvalid 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.awvalid;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wvalid 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.wvalid;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.bready 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.bready;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arvalid 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.arvalid;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.rready 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rready;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.araddr 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.araddr;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awaddr 
            = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.awaddr;
    }
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__comb_stall 
        = ((0U != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_state)) 
           | ((~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__hit)) 
              & ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__read_enable) 
                 | (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__actual_write_enable))));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__mem_read 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__read_data;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_next_set_ptr 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_set_ptr_out;
    vlSelfRef.cpu_test_harness__DOT__m_axi_wlast = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wlast;
    vlSelfRef.cpu_test_harness__DOT__m_axi_awvalid 
        = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awvalid;
    vlSelfRef.cpu_test_harness__DOT__m_axi_wvalid = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wvalid;
    vlSelfRef.cpu_test_harness__DOT__m_axi_bready = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.bready;
    vlSelfRef.cpu_test_harness__DOT__m_axi_arvalid 
        = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arvalid;
    vlSelfRef.cpu_test_harness__DOT__m_axi_rready = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.rready;
    vlSelfRef.cpu_test_harness__DOT__m_axi_araddr = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.araddr;
    vlSelfRef.cpu_test_harness__DOT__m_axi_awaddr = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awaddr;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_stall 
        = ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__comb_stall) 
           | (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__seq_stall));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__mem_data 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__mem_read;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__debug_d_next_set_ptr 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_next_set_ptr;
    vlSelfRef.m_axi_wlast = vlSelfRef.cpu_test_harness__DOT__m_axi_wlast;
    vlSelfRef.m_axi_awvalid = vlSelfRef.cpu_test_harness__DOT__m_axi_awvalid;
    vlSelfRef.m_axi_wvalid = vlSelfRef.cpu_test_harness__DOT__m_axi_wvalid;
    vlSelfRef.m_axi_bready = vlSelfRef.cpu_test_harness__DOT__m_axi_bready;
    vlSelfRef.m_axi_arvalid = vlSelfRef.cpu_test_harness__DOT__m_axi_arvalid;
    vlSelfRef.m_axi_rready = vlSelfRef.cpu_test_harness__DOT__m_axi_rready;
    vlSelfRef.m_axi_araddr = vlSelfRef.cpu_test_harness__DOT__m_axi_araddr;
    vlSelfRef.m_axi_awaddr = vlSelfRef.cpu_test_harness__DOT__m_axi_awaddr;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__d_cache_stall 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_stall;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__mask_apply__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 4U, vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__mask_apply__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__masked_data 
            = (((~ ((IData)(0x000000ffU) << (0x0000001fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__mask_apply__DOT__unnamedblk1__DOT__i)))) 
                & vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__masked_data) 
               | (0x00000000ffffffffULL & (((1U & ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__be_mask) 
                                                   >> 
                                                   (3U 
                                                    & vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__mask_apply__DOT__unnamedblk1__DOT__i)))
                                             ? (0x000000ffU 
                                                & (vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__mem_data 
                                                   >> 
                                                   (0x0000001fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__mask_apply__DOT__unnamedblk1__DOT__i))))
                                             : 0U) 
                                           << (0x0000001fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__mask_apply__DOT__unnamedblk1__DOT__i)))));
        vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__mask_apply__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__mask_apply__DOT__unnamedblk1__DOT__i);
    }
    vlSelfRef.cpu_test_harness__DOT__core__DOT__debug_d_cache_stall 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__d_cache_stall;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__write_enable 
        = ((~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__i_cache_stall)) 
           & ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reg_write) 
              & ((~ ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__d_cache_stall) 
                     | (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__trap_valid))) 
                 & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__wb_valid))));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__pc_next 
        = (((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__trap_valid) 
            | ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__i_cache_stall) 
               | ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__d_cache_stall) 
                  | ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__fence_i_request) 
                     | ((~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache_flush_done)) 
                        & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__fence))))))
            ? vlSelfRef.cpu_test_harness__DOT__core__DOT__pc
            : ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__pc_source)
                ? vlSelfRef.cpu_test_harness__DOT__core__DOT__pc_plus_second_add
                : vlSelfRef.cpu_test_harness__DOT__core__DOT__pc_plus_four));
    __VdfgRegularize_hebeb780c_0_3 = ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__f3))
                                       ? ((3U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__be_mask))
                                           ? vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__masked_data
                                           : ((0x0cU 
                                               == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__be_mask))
                                               ? VL_SHIFTR_III(32,32,32, vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__masked_data, 0x00000010U)
                                               : vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__masked_data))
                                       : ((8U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__be_mask))
                                           ? ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__be_mask))
                                               ? vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__masked_data
                                               : ((2U 
                                                   & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__be_mask))
                                                   ? vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__masked_data
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__be_mask))
                                                    ? vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__masked_data
                                                    : 
                                                   VL_SHIFTR_III(32,32,32, vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__masked_data, 0x00000018U))))
                                           : ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__be_mask))
                                               ? ((2U 
                                                   & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__be_mask))
                                                   ? vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__masked_data
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__be_mask))
                                                    ? vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__masked_data
                                                    : 
                                                   VL_SHIFTR_III(32,32,32, vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__masked_data, 0x00000010U)))
                                               : ((2U 
                                                   & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__be_mask))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__be_mask))
                                                    ? vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__masked_data
                                                    : 
                                                   VL_SHIFTR_III(32,32,32, vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__masked_data, 8U))
                                                   : vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__masked_data))));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__debug_pc_next 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__pc_next;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__raw_data 
        = ((4U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__f3))
            ? (__VdfgRegularize_hebeb780c_0_3 & (- (IData)(
                                                           (1U 
                                                            & (~ 
                                                               ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__f3) 
                                                                >> 1U))))))
            : ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__f3))
                ? (vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__masked_data 
                   & (- (IData)((1U & (~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__f3))))))
                : __VdfgRegularize_hebeb780c_0_3));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__wb_data 
        = ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__f3))
            ? vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__raw_data
            : ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__f3))
                ? ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__sign_extend)
                    ? (((- (IData)((1U & (vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__raw_data 
                                          >> 0x0000000fU)))) 
                        << 0x00000010U) | (0x0000ffffU 
                                           & vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__raw_data))
                    : vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__raw_data)
                : ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__sign_extend)
                    ? (((- (IData)((1U & (vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__raw_data 
                                          >> 7U)))) 
                        << 8U) | (0x000000ffU & vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__raw_data))
                    : vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__raw_data)));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__mem_read_write_back_data 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__reader_inst__DOT__wb_data;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__write_back_data 
        = ((2U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__write_back_source))
            ? ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__write_back_source))
                ? vlSelfRef.cpu_test_harness__DOT__core__DOT__pc_plus_second_add
                : vlSelfRef.cpu_test_harness__DOT__core__DOT__pc_plus_four)
            : ((1U & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__write_back_source))
                ? vlSelfRef.cpu_test_harness__DOT__core__DOT__mem_read_write_back_data
                : vlSelfRef.cpu_test_harness__DOT__core__DOT__alu_result));
    vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__write_data 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__write_back_data;
}

void Vtop_axi_if___nba_sequent__TOP__cpu_test_harness__DOT__m_axi__0(Vtop_axi_if* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vinline__nba_comb__TOP__0___Vilp1;
    // Body
    if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        if (vlSelfRef.cpu_test_harness__DOT__core__DOT__rst_n) {
            if (((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__fence_i_request) 
                 & (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache_invalidate_done))) {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__fence_i_request = 0U;
            } else if (((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__fence_i) 
                        & (~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__i_cache_stall)))) {
                vlSelfRef.cpu_test_harness__DOT__core__DOT__fence_i_request = 1U;
            }
            vlSelfRef.cpu_test_harness__DOT__core__DOT__pc 
                = vlSelfRef.cpu_test_harness__DOT__core__DOT__pc_next;
        } else {
            vlSelfRef.cpu_test_harness__DOT__core__DOT__fence_i_request = 0U;
            vlSelfRef.cpu_test_harness__DOT__core__DOT__pc = 0U;
        }
        vlSelfRef.cpu_test_harness__DOT__pc = vlSelfRef.cpu_test_harness__DOT__core__DOT__pc;
        vlSelfRef.cpu_test_harness__DOT__core__DOT__debug_pc 
            = vlSelfRef.cpu_test_harness__DOT__core__DOT__pc;
        vlSelfRef.cpu_test_harness__DOT__core__DOT__trap_pc 
            = vlSelfRef.cpu_test_harness__DOT__core__DOT__pc;
        vlSelfRef.cpu_test_harness__DOT__core__DOT__pc_plus_four 
            = ((IData)(4U) + vlSelfRef.cpu_test_harness__DOT__core__DOT__pc);
        vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__address 
            = vlSelfRef.cpu_test_harness__DOT__core__DOT__pc;
        vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__req_index 
            = (0x0000007fU & (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__address 
                              >> 2U));
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
        Vtop_axi_if___nba_sequent__TOP__cpu_test_harness__DOT__m_axi__0((&vlSymsp->TOP__cpu_test_harness__DOT__m_axi));
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.clk = vlSelfRef.cpu_test_harness__DOT__clk;
        vlSelfRef.rst_n = vlSelfRef.cpu_test_harness__DOT__rst_n;
        vlSelfRef.aresetn = vlSelfRef.cpu_test_harness__DOT__aresetn;
        vlSelfRef.cpu_test_harness__DOT__aclk = vlSelfRef.cpu_test_harness__DOT__clk;
        vlSelfRef.cpu_test_harness__DOT__core__DOT__rst_n 
            = vlSelfRef.cpu_test_harness__DOT__rst_n;
        vlSelfRef.aclk = vlSelfRef.cpu_test_harness__DOT__aclk;
        vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__rst_n 
            = vlSelfRef.cpu_test_harness__DOT__core__DOT__rst_n;
        vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__rst_n 
            = vlSelfRef.cpu_test_harness__DOT__core__DOT__rst_n;
        Vtop_axi_if___act_sequent__TOP__cpu_test_harness__DOT__m_axi__0((&vlSymsp->TOP__cpu_test_harness__DOT__m_axi));
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((0x0000000000000028ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_comb__TOP__0___Vilp1 = 0U;
        while ((__Vinline__nba_comb__TOP__0___Vilp1 
                <= 0x0000007fU)) {
            vlSelfRef.cpu_test_harness__DOT__data_memory__DOT__mem[__Vinline__nba_comb__TOP__0___Vilp1] 
                = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data
                [__Vinline__nba_comb__TOP__0___Vilp1];
            __Vinline__nba_comb__TOP__0___Vilp1 = ((IData)(1U) 
                                                   + __Vinline__nba_comb__TOP__0___Vilp1);
        }
        vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__invalidate_done 
            = ((~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_valid)) 
               & (0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__state)));
        vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__flush_done 
            = ((~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_dirty)) 
               & (0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__state)));
        vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache_flush_done 
            = vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__flush_done;
        Vtop_axi_if___ico_sequent__TOP__cpu_test_harness__DOT__core__DOT__m_axi_data__0((&vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data));
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__invalidate 
            = vlSelfRef.cpu_test_harness__DOT__core__DOT__fence_i_request;
        vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__req_block_tag 
            = (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__address 
               >> 9U);
    }
    if ((0x0000000000000024ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_axi_if___ico_sequent__TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst__0((&vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst));
        vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__flush_done 
            = ((~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_dirty)) 
               & (0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__state)));
        vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__invalidate_done 
            = ((~ (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_valid)) 
               & (0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__state)));
        vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache_invalidate_done 
            = vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__invalidate_done;
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rdata = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.awready = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.wready = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.bvalid = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.arready = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rlast = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rvalid = 0U;
        if ((0U != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__arbitrer__DOT__i_cache_state))) {
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rdata 
                = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.rdata;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.awready 
                = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awready;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.wready 
                = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wready;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.bvalid 
                = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.bvalid;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.arready 
                = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arready;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rlast 
                = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.rlast;
            vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.rvalid 
                = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.rvalid;
        }
    }
    if ((0x000000000000000cULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.bid = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rid = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rresp = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awlen = 0x7fU;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awsize = 2U;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awburst = 1U;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arlen = 0x7fU;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arsize = 2U;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arburst = 1U;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awid = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arid = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wstrb = 0x0fU;
        if ((0U != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__arbitrer__DOT__i_cache_state))) {
            vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awlen 
                = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.awlen;
            vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awsize 
                = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.awsize;
            vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awburst 
                = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.awburst;
            vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arlen 
                = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.arlen;
            vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arsize 
                = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.arsize;
            vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arburst 
                = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.arburst;
            vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awid 
                = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.awid;
            vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arid 
                = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.arid;
            vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wstrb 
                = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.wstrb;
        } else if (((0U != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__arbitrer__DOT__d_cache_state)) 
                    & (0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__arbitrer__DOT__i_cache_state)))) {
            vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awlen 
                = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.awlen;
            vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awsize 
                = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.awsize;
            vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awburst 
                = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.awburst;
            vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arlen 
                = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.arlen;
            vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arsize 
                = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.arsize;
            vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arburst 
                = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.arburst;
            vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awid 
                = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.awid;
            vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arid 
                = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.arid;
            vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wstrb 
                = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.wstrb;
        }
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.bresp = 0U;
        if ((0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__arbitrer__DOT__i_cache_state))) {
            if (((0U != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__arbitrer__DOT__d_cache_state)) 
                 & (0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__arbitrer__DOT__i_cache_state)))) {
                vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.bid 
                    = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.bid;
                vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rid 
                    = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.rid;
                vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rresp 
                    = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.rresp;
                vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.bresp 
                    = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.bresp;
            }
        }
        vlSelfRef.cpu_test_harness__DOT__m_axi_awlen 
            = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awlen;
        vlSelfRef.cpu_test_harness__DOT__m_axi_awsize 
            = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awsize;
        vlSelfRef.cpu_test_harness__DOT__m_axi_awburst 
            = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awburst;
        vlSelfRef.cpu_test_harness__DOT__m_axi_arlen 
            = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arlen;
        vlSelfRef.cpu_test_harness__DOT__m_axi_arsize 
            = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arsize;
        vlSelfRef.cpu_test_harness__DOT__m_axi_arburst 
            = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arburst;
        vlSelfRef.cpu_test_harness__DOT__m_axi_awid 
            = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awid;
        vlSelfRef.cpu_test_harness__DOT__m_axi_arid 
            = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arid;
        vlSelfRef.cpu_test_harness__DOT__m_axi_wstrb 
            = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wstrb;
        vlSelfRef.m_axi_awlen = vlSelfRef.cpu_test_harness__DOT__m_axi_awlen;
        vlSelfRef.m_axi_awsize = vlSelfRef.cpu_test_harness__DOT__m_axi_awsize;
        vlSelfRef.m_axi_awburst = vlSelfRef.cpu_test_harness__DOT__m_axi_awburst;
        vlSelfRef.m_axi_arlen = vlSelfRef.cpu_test_harness__DOT__m_axi_arlen;
        vlSelfRef.m_axi_arsize = vlSelfRef.cpu_test_harness__DOT__m_axi_arsize;
        vlSelfRef.m_axi_arburst = vlSelfRef.cpu_test_harness__DOT__m_axi_arburst;
        vlSelfRef.m_axi_awid = vlSelfRef.cpu_test_harness__DOT__m_axi_awid;
        vlSelfRef.m_axi_arid = vlSelfRef.cpu_test_harness__DOT__m_axi_arid;
        vlSelfRef.m_axi_wstrb = vlSelfRef.cpu_test_harness__DOT__m_axi_wstrb;
    }
    if ((0x000000000000000dULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rdata = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.awready = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.wready = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.bvalid = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.arready = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rlast = 0U;
        vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rvalid = 0U;
        if ((0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__arbitrer__DOT__i_cache_state))) {
            if (((0U != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__arbitrer__DOT__d_cache_state)) 
                 & (0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__arbitrer__DOT__i_cache_state)))) {
                vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rdata 
                    = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.rdata;
                vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.awready 
                    = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.awready;
                vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.wready 
                    = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wready;
                vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.bvalid 
                    = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.bvalid;
                vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.arready 
                    = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.arready;
                vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rlast 
                    = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.rlast;
                vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.rvalid 
                    = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.rvalid;
            }
        }
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__rst_n 
            = vlSelfRef.cpu_test_harness__DOT__core__DOT__rst_n;
    }
    if ((0x0000000000000026ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__hit 
            = ((IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_valid) 
               & (vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__req_block_tag 
                  == vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_block_tag));
    }
    if ((0x000000000000002cULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wdata = 0U;
        if ((0U != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__arbitrer__DOT__i_cache_state))) {
            vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wdata 
                = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst.wdata;
        } else if (((0U != (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__arbitrer__DOT__d_cache_state)) 
                    & (0U == (IData)(vlSelfRef.cpu_test_harness__DOT__core__DOT__arbitrer__DOT__i_cache_state)))) {
            vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wdata 
                = vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data.wdata;
        }
        vlSelfRef.cpu_test_harness__DOT__m_axi_wdata 
            = vlSymsp->TOP__cpu_test_harness__DOT__m_axi.wdata;
        vlSelfRef.m_axi_wdata = vlSelfRef.cpu_test_harness__DOT__m_axi_wdata;
    }
    if ((0x0000000000000027ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__7(vlSelf);
    }
    if ((0x0000000000000037ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__8(vlSelf);
    }
    if ((0x000000000000003fULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__9(vlSelf);
    }
}

void Vtop___024root___timing_resume(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___timing_resume\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000020ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtop___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers_vec__act(vlSelf);
    Vtop___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtop___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtop___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtop___024root___timing_resume(vlSelf);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__inact(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__inact\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("/Users/luokai/Documents/GitHub/RISC-V-project/tb/cpu/cpu_harness.sv", 9, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtop___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        Vtop___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("/Users/luokai/Documents/GitHub/RISC-V-project/tb/cpu/cpu_harness.sv", 9, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vtop___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/Users/luokai/Documents/GitHub/RISC-V-project/tb/cpu/cpu_harness.sv", 9, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("/Users/luokai/Documents/GitHub/RISC-V-project/tb/cpu/cpu_harness.sv", 9, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("/Users/luokai/Documents/GitHub/RISC-V-project/tb/cpu/cpu_harness.sv", 9, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtop___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtop___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtop___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.m_axi_awready & 0xfeU)))) {
        Verilated::overWidthError("m_axi_awready");
    }
    if (VL_UNLIKELY(((vlSelfRef.m_axi_wready & 0xfeU)))) {
        Verilated::overWidthError("m_axi_wready");
    }
    if (VL_UNLIKELY(((vlSelfRef.m_axi_bid & 0xf0U)))) {
        Verilated::overWidthError("m_axi_bid");
    }
    if (VL_UNLIKELY(((vlSelfRef.m_axi_bresp & 0xfcU)))) {
        Verilated::overWidthError("m_axi_bresp");
    }
    if (VL_UNLIKELY(((vlSelfRef.m_axi_bvalid & 0xfeU)))) {
        Verilated::overWidthError("m_axi_bvalid");
    }
    if (VL_UNLIKELY(((vlSelfRef.m_axi_arready & 0xfeU)))) {
        Verilated::overWidthError("m_axi_arready");
    }
    if (VL_UNLIKELY(((vlSelfRef.m_axi_rid & 0xf0U)))) {
        Verilated::overWidthError("m_axi_rid");
    }
    if (VL_UNLIKELY(((vlSelfRef.m_axi_rresp & 0xfcU)))) {
        Verilated::overWidthError("m_axi_rresp");
    }
    if (VL_UNLIKELY(((vlSelfRef.m_axi_rlast & 0xfeU)))) {
        Verilated::overWidthError("m_axi_rlast");
    }
    if (VL_UNLIKELY(((vlSelfRef.m_axi_rvalid & 0xfeU)))) {
        Verilated::overWidthError("m_axi_rvalid");
    }
}
#endif  // VL_DEBUG
