// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
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
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/Users/luokai/Documents/GitHub/RISC-V-project/tb/cpu/cpu_harness.sv", 9, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtop___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtop___024root___eval_triggers_vec__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers_vec__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
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
    vlSelfRef.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__aclk 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__clk;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__clk 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__clk;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__data_cache__DOT__aclk 
        = vlSelfRef.cpu_test_harness__DOT__core__DOT__clk;
    vlSelfRef.cpu_test_harness__DOT__core__DOT__regfile__DOT__clk 
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

void Vtop_axi_if___ico_sequent__TOP__cpu_test_harness__DOT__m_axi__0(Vtop_axi_if* vlSelf);
void Vtop_axi_if___ico_sequent__TOP__cpu_test_harness__DOT__core__DOT__m_axi_data__0(Vtop_axi_if* vlSelf);
void Vtop_axi_if___ico_sequent__TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst__0(Vtop_axi_if* vlSelf);
void Vtop___024root___ico_sequent__TOP__1(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        Vtop_axi_if___ico_sequent__TOP__cpu_test_harness__DOT__m_axi__0((&vlSymsp->TOP__cpu_test_harness__DOT__m_axi));
        Vtop_axi_if___ico_sequent__TOP__cpu_test_harness__DOT__core__DOT__m_axi_data__0((&vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_data));
        Vtop_axi_if___ico_sequent__TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst__0((&vlSymsp->TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst));
        Vtop___024root___ico_sequent__TOP__1(vlSelf);
    }
}

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtop___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge cpu_test_harness.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge cpu_test_harness.core.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge cpu_test_harness.core.instr_cache.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(posedge cpu_test_harness.core.data_cache.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @(posedge cpu_test_harness.core.regfile.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->aclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10553736683680568397ull);
    vlSelf->aresetn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8123012239402083478ull);
    vlSelf->m_axi_awid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1024821634766282054ull);
    vlSelf->m_axi_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13558266821849222593ull);
    vlSelf->m_axi_awlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15527027863330074270ull);
    vlSelf->m_axi_awsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17768164634708584365ull);
    vlSelf->m_axi_awburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16027732775651784324ull);
    vlSelf->m_axi_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17994771565963626208ull);
    vlSelf->m_axi_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16573481163850279297ull);
    vlSelf->m_axi_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1286380785785437420ull);
    vlSelf->m_axi_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15721383833457952779ull);
    vlSelf->m_axi_wlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2914646395814725164ull);
    vlSelf->m_axi_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17462522629772039856ull);
    vlSelf->m_axi_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10076110868751280388ull);
    vlSelf->m_axi_bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11115145799783860064ull);
    vlSelf->m_axi_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3179402000051064225ull);
    vlSelf->m_axi_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17532096651654485089ull);
    vlSelf->m_axi_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 919615779156835605ull);
    vlSelf->m_axi_arid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1810041573633596834ull);
    vlSelf->m_axi_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1846461378547527168ull);
    vlSelf->m_axi_arlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16617312831593392701ull);
    vlSelf->m_axi_arsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17543111694348153197ull);
    vlSelf->m_axi_arburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1752602318331902070ull);
    vlSelf->m_axi_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16153593045339235853ull);
    vlSelf->m_axi_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14657891178303932712ull);
    vlSelf->m_axi_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 134518827027005282ull);
    vlSelf->m_axi_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7098886022588844013ull);
    vlSelf->m_axi_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9891928918972316509ull);
    vlSelf->m_axi_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5192182110111361339ull);
    vlSelf->m_axi_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10047683109683776937ull);
    vlSelf->m_axi_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4323339442303808258ull);
    vlSelf->cpu_test_harness__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17715835701671535299ull);
    vlSelf->cpu_test_harness__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14263922277962158287ull);
    vlSelf->cpu_test_harness__DOT__aclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8989282495280104211ull);
    vlSelf->cpu_test_harness__DOT__aresetn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5331026303109528267ull);
    vlSelf->cpu_test_harness__DOT__m_axi_awid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1074412103390985723ull);
    vlSelf->cpu_test_harness__DOT__m_axi_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14533268339258910598ull);
    vlSelf->cpu_test_harness__DOT__m_axi_awlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11065640176710819966ull);
    vlSelf->cpu_test_harness__DOT__m_axi_awsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10477732938905624830ull);
    vlSelf->cpu_test_harness__DOT__m_axi_awburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6588731736402325968ull);
    vlSelf->cpu_test_harness__DOT__m_axi_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12230449000519260283ull);
    vlSelf->cpu_test_harness__DOT__m_axi_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1625465876034021958ull);
    vlSelf->cpu_test_harness__DOT__m_axi_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13932948906866608150ull);
    vlSelf->cpu_test_harness__DOT__m_axi_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10804329688220825355ull);
    vlSelf->cpu_test_harness__DOT__m_axi_wlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5555496910214489378ull);
    vlSelf->cpu_test_harness__DOT__m_axi_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13584709420778821689ull);
    vlSelf->cpu_test_harness__DOT__m_axi_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13309992710688972855ull);
    vlSelf->cpu_test_harness__DOT__m_axi_bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18188205407074296509ull);
    vlSelf->cpu_test_harness__DOT__m_axi_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7677479177732131765ull);
    vlSelf->cpu_test_harness__DOT__m_axi_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8039274653637905168ull);
    vlSelf->cpu_test_harness__DOT__m_axi_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12976518152361319284ull);
    vlSelf->cpu_test_harness__DOT__m_axi_arid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12443346988677671575ull);
    vlSelf->cpu_test_harness__DOT__m_axi_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13645903728914090479ull);
    vlSelf->cpu_test_harness__DOT__m_axi_arlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3131991307688844115ull);
    vlSelf->cpu_test_harness__DOT__m_axi_arsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 892671866491877079ull);
    vlSelf->cpu_test_harness__DOT__m_axi_arburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 973497879768850211ull);
    vlSelf->cpu_test_harness__DOT__m_axi_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6053881971665522051ull);
    vlSelf->cpu_test_harness__DOT__m_axi_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2157615312848808496ull);
    vlSelf->cpu_test_harness__DOT__m_axi_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 944101938455969537ull);
    vlSelf->cpu_test_harness__DOT__m_axi_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3945387326269369297ull);
    vlSelf->cpu_test_harness__DOT__m_axi_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11744832290560965149ull);
    vlSelf->cpu_test_harness__DOT__m_axi_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4374791312885728235ull);
    vlSelf->cpu_test_harness__DOT__m_axi_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16057280342266097679ull);
    vlSelf->cpu_test_harness__DOT__m_axi_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17917461220440363280ull);
    vlSelf->cpu_test_harness__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18409197608591655628ull);
    vlSelf->cpu_test_harness__DOT__instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3811036804911474019ull);
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->cpu_test_harness__DOT__ram[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14876788484690994511ull);
    }
    vlSelf->cpu_test_harness__DOT__read_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3668708323964287037ull);
    vlSelf->cpu_test_harness__DOT__read_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6663186797548128746ull);
    vlSelf->cpu_test_harness__DOT__read_count = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6851598424473459405ull);
    vlSelf->cpu_test_harness__DOT__read_length = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15710499005372977866ull);
    vlSelf->cpu_test_harness__DOT__write_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 975232402287711556ull);
    vlSelf->cpu_test_harness__DOT__write_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2802617079650199627ull);
    vlSelf->cpu_test_harness__DOT__write_count = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4581014770831833623ull);
    vlSelf->cpu_test_harness__DOT__bvalid_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12470940895123224786ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->cpu_test_harness__DOT__regfile__DOT__registers[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2662202165690183067ull);
    }
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->cpu_test_harness__DOT__data_memory__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13450345606926964619ull);
    }
    vlSelf->cpu_test_harness__DOT__unnamedblk1__DOT__preload_index = 0;
    vlSelf->cpu_test_harness__DOT__core__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2093272019835161728ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1400835668248314014ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__debug_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17267425324615640606ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__debug_pc_next = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9799143037278193532ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__debug_instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13842669395997915789ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__debug_i_cache_state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17001964005070559494ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__debug_d_cache_state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5663579280412880626ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__debug_i_set_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3056068568245503426ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__debug_i_next_set_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11102905924569638223ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__debug_d_set_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6824253257037552244ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__debug_d_next_set_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3914991044661244488ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__debug_i_cache_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16097492398152270877ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__debug_d_cache_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2255373373119917337ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__trap_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15676596004296100308ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__trap_cause = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5530384729737021835ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__trap_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11421267230053225496ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__i_cache_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13712287757558384132ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__d_cache_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16897916850338119403ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__data_cache_flush_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8969235018204625258ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__instr_cache_invalidate_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8784602477750460229ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__data_set_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15820535224455938486ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__data_next_set_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2966151563140772803ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5798162712766582508ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1401601153985302973ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__mem_read = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2672126006827620160ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5499130464133069402ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__mem_write_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7366134180036347399ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__mem_byte_enable = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 626186520122737518ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__mem_read_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3576899992720979612ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__mem_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7816784264266307158ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__data_read_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 176209745283979847ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__data_write_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6564807620811084805ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__control_trap_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13531056932644969670ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__fence_i_request = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12007027010030575334ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__i_cache_state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5564914524970566762ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__d_cache_state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16466517488855860399ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__instr_set_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6303368683691559921ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__instr_next_set_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2933917333779688269ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__pc_next = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 465888512916003810ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__pc_plus_second_add = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7716587809482375619ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__pc_plus_four = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4330656773456527441ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__immediate = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5875967623034589741ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__pc_source = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14635330169715145925ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__second_add_source = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7873874805582429080ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__alu_zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16206267707405474590ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__alu_control = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3419065443394979455ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__imm_source = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5263845331718989825ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__reg_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3527269361448079211ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__alu_source = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3672834673733898408ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__write_back_source = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13941450374331588396ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__fence = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13841828786420464741ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__fence_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1324121616230146142ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__func7 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5511523221008608165ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__shamt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2555911976705784850ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__op = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14897132049738087979ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__f3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15560547792223459915ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__system_imm = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 15763492754495183287ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__alu_last_bit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12704585937962090038ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__alu_unsigned_less = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5676943683045181113ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__source_reg1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14309622580392862250ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__source_reg2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4244177732215047875ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__dest_reg = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11944823467321602036ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__read_reg1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16990239221799575536ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__read_reg2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10976293805702039723ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__wb_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6154190089302876873ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__write_back_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2043365998660331372ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__raw_imm = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 18247243240382130446ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__alu_src2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12727981506929690432ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__shift_amount = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13895988888253787698ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__last_bit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2354250163191664950ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__unsigned_less = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1687638289619632998ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7212526534880935944ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__mem_read_write_back_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15354812455360395462ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__mem_read_write_back_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7253173191860117001ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__instr_cache__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3631719050369193249ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__instr_cache__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13935188342481383774ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__instr_cache__DOT__aclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 117290667330991153ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__instr_cache__DOT__address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13967311083977575083ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__instr_cache__DOT__write_data = 0U;
    ;
    vlSelf->cpu_test_harness__DOT__core__DOT__instr_cache__DOT__read_enable = 1U;
    ;
    vlSelf->cpu_test_harness__DOT__core__DOT__instr_cache__DOT__write_enable = 0U;
    ;
    vlSelf->cpu_test_harness__DOT__core__DOT__instr_cache__DOT__flush = 0U;
    ;
    vlSelf->cpu_test_harness__DOT__core__DOT__instr_cache__DOT__invalidate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8654513964112959596ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__instr_cache__DOT__byte_enable = 0U;
    ;
    vlSelf->cpu_test_harness__DOT__core__DOT__instr_cache__DOT__read_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7673766910279372531ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9327507551428413547ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__instr_cache__DOT__flush_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16691468962063569693ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__instr_cache__DOT__invalidate_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5546299008584366169ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9314994880098574185ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__instr_cache__DOT__set_ptr_out = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6140892923347739923ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_set_ptr_out = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14802607775328379588ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__instr_cache__DOT__actual_write_enable = 0U;
    ;
    vlSelf->cpu_test_harness__DOT__core__DOT__instr_cache__DOT__comb_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4620724663684446111ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__instr_cache__DOT__seq_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11061484899087595769ull);
    VL_SCOPED_RAND_RESET_W(4096, vlSelf->cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data, __VscopeHash, 1262011217899524313ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_block_tag = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 14169438413321691416ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6402403971475694600ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_cache_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18411508769405838713ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_dirty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16068151421895424952ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_cache_dirty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10590733367544860077ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__instr_cache__DOT__req_block_tag = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 710628867137388642ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__instr_cache__DOT__req_index = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2884878902879686136ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__instr_cache__DOT__set_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8429989678837686636ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_set_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1062736744595969744ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__instr_cache__DOT__byte_enable_mask = 0U;
    ;
    vlSelf->cpu_test_harness__DOT__core__DOT__instr_cache__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4911949227232609339ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__instr_cache__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18118773740716190874ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__instr_cache__DOT__next_state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12033278795045570864ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__instr_cache__DOT__flush_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11577456950590611151ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__data_cache__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3943539114865233292ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__data_cache__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4527250754274007839ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__data_cache__DOT__aclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1145703319047939567ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__data_cache__DOT__address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9782423209590985593ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__data_cache__DOT__write_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 250860804453484277ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__data_cache__DOT__read_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1461937641764567562ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__data_cache__DOT__write_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15925766469479230258ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__data_cache__DOT__flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2871318561286944670ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__data_cache__DOT__invalidate = 0U;
    ;
    vlSelf->cpu_test_harness__DOT__core__DOT__data_cache__DOT__byte_enable = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11419268511934570492ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__data_cache__DOT__read_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11136308976512544455ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4339563945109126901ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__data_cache__DOT__flush_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 197471086296605161ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__data_cache__DOT__invalidate_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14841515361652054998ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2398303415563075761ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__data_cache__DOT__set_ptr_out = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4290368657939096536ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_set_ptr_out = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13704507746756713028ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__data_cache__DOT__actual_write_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17123848524630348916ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__data_cache__DOT__comb_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12441563640226920243ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__data_cache__DOT__seq_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17107438600606160762ull);
    VL_SCOPED_RAND_RESET_W(4096, vlSelf->cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data, __VscopeHash, 17261970150342660961ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_block_tag = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 2042760475862566655ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10527250329292459406ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_cache_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14046885426548931169ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_dirty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11077956350503983611ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_cache_dirty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14643225899249146886ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__data_cache__DOT__req_block_tag = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 4882569383505465937ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__data_cache__DOT__req_index = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6751233250201404813ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__data_cache__DOT__set_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11277977346646316586ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_set_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10213183061772838207ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__data_cache__DOT__byte_enable_mask = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15037073733729103756ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__data_cache__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10502080193567308886ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__data_cache__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10889120023138341085ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__data_cache__DOT__next_state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17739906046876757904ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__data_cache__DOT__flush_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 407030428266710138ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__arbitrer__DOT__i_cache_state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17057288602735702725ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__arbitrer__DOT__d_cache_state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 257015224834932790ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__control__DOT__op = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12858543446578796429ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__control__DOT__func3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17101031504761993093ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__control__DOT__func7 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6511386334223045970ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__control__DOT__alu_zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3560891149904099340ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__control__DOT__shamt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11553170318389447555ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__control__DOT__system_imm = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8319522987703064191ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__control__DOT__alu_last_bit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7980915504877517868ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__control__DOT__alu_unsigned_less = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1766565693879861418ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__control__DOT__alu_control = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8576290270213604202ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__control__DOT__imm_source = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2814130547412264111ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__control__DOT__reg_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4203408876739889066ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__control__DOT__mem_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7343468918246843842ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__control__DOT__alu_source = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5574951657500019102ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__control__DOT__write_back_source = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7830914958606992006ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__control__DOT__pc_source = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3186576635448271734ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__control__DOT__second_add_source = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11833758624431894628ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__control__DOT__mem_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4885217202700970791ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__control__DOT__fence = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4280614316666997622ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__control__DOT__fence_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11432675765829346409ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__control__DOT__trap_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16283363779300052972ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__control__DOT__trap_cause = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14245520394090983790ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__control__DOT__alu_op = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15631881502945209970ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__control__DOT__branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17129591688440301966ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__control__DOT__jump = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8053449216917005722ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__control__DOT__assert_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12778734039728635033ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__regfile__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16600526192167005505ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__regfile__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4313511521611905596ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__regfile__DOT__address1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5310988089132216353ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__regfile__DOT__address2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6408513120281920836ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__regfile__DOT__read_data1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2056200051688435671ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__regfile__DOT__read_data2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9472481573836437895ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__regfile__DOT__write_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11154375056833870062ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__regfile__DOT__write_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16690706823582319762ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__regfile__DOT__address3 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9223430117749986636ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->cpu_test_harness__DOT__core__DOT__regfile__DOT__registers[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15000391706393917110ull);
    }
    vlSelf->cpu_test_harness__DOT__core__DOT__regfile__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->cpu_test_harness__DOT__core__DOT__sign_extender__DOT__raw_src = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 14415334519739004180ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__sign_extender__DOT__imm_source = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 472570974994279660ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__sign_extender__DOT__immediate = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2862043803379209138ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_control = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17705665125004139387ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5469728966199865207ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__alu_inst__DOT__src2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6247811321555412140ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__alu_inst__DOT__shamt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5169710512795192316ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__alu_inst__DOT__alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4876107506666436027ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__alu_inst__DOT__zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13774168104651981443ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__alu_inst__DOT__last_bit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3809463302339606270ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__alu_inst__DOT__unsigned_less = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 144763829944447820ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__alu_result_address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7929370307446262420ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__f3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3988221459374834035ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__reg_read = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10898799456822909348ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__byte_enable = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18258084870486879706ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8987953320402542678ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__ls_decoder__DOT__offset = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12532494457414960086ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__reader_inst__DOT__be_mask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15775175653798920502ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__reader_inst__DOT__mem_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6999472460213545005ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__reader_inst__DOT__f3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8930333426992114631ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__reader_inst__DOT__wb_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8908086568848752398ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__reader_inst__DOT__valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13468052666399656217ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__reader_inst__DOT__sign_extend = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15162572292702978019ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__reader_inst__DOT__masked_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5435697434870466081ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__reader_inst__DOT__raw_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9504056994382984223ull);
    vlSelf->cpu_test_harness__DOT__core__DOT__reader_inst__DOT__mask_apply__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__cpu_test_harness__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__cpu_test_harness__DOT__core__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__cpu_test_harness__DOT__core__DOT__instr_cache__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__cpu_test_harness__DOT__core__DOT__data_cache__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__cpu_test_harness__DOT__core__DOT__regfile__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
