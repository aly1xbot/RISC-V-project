// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

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

extern const VlUnpacked<IData/*31:0*/, 16> Vtop__ConstPool__TABLE_h523ce058_0;

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.tb_cache__DOT__dut__DOT__clk = vlSelfRef.tb_cache__DOT__clk;
    vlSelfRef.tb_cache__DOT__dut__DOT__aclk = vlSelfRef.tb_cache__DOT__aclk;
    vlSelfRef.tb_cache__DOT__dut__DOT__rst_n = vlSelfRef.tb_cache__DOT__rst_n;
    vlSelfRef.tb_cache__DOT__dut__DOT__write_data = vlSelfRef.tb_cache__DOT__write_data;
    vlSelfRef.tb_cache__DOT__cache_stall = vlSelfRef.tb_cache__DOT__dut__DOT__cache_stall;
    vlSelfRef.tb_cache__DOT__dut__DOT__next_cache_dirty 
        = vlSelfRef.tb_cache__DOT__dut__DOT__cache_dirty;
    vlSelfRef.tb_cache__DOT__dut__DOT__read_enable 
        = vlSelfRef.tb_cache__DOT__read_enable;
    vlSelfRef.tb_cache__DOT__dut__DOT__byte_enable 
        = vlSelfRef.tb_cache__DOT__byte_enable;
    vlSelfRef.tb_cache__DOT__dut__DOT__write_enable 
        = vlSelfRef.tb_cache__DOT__write_enable;
    vlSelfRef.tb_cache__DOT__dut__DOT__address = vlSelfRef.tb_cache__DOT__address;
    __Vtableidx1 = vlSelfRef.tb_cache__DOT__dut__DOT__byte_enable;
    vlSelfRef.tb_cache__DOT__dut__DOT__byte_enable_mask 
        = Vtop__ConstPool__TABLE_h523ce058_0[__Vtableidx1];
    vlSelfRef.tb_cache__DOT__dut__DOT__actual_write_enable 
        = ((IData)(vlSelfRef.tb_cache__DOT__dut__DOT__write_enable) 
           & (0U != (IData)(vlSelfRef.tb_cache__DOT__dut__DOT__byte_enable)));
    vlSelfRef.tb_cache__DOT__dut__DOT__req_index = 
        (0x0000007fU & (vlSelfRef.tb_cache__DOT__dut__DOT__address 
                        >> 2U));
    vlSelfRef.tb_cache__DOT__dut__DOT__req_block_tag 
        = (vlSelfRef.tb_cache__DOT__dut__DOT__address 
           >> 9U);
    vlSelfRef.tb_cache__DOT__dut__DOT__hit = ((IData)(vlSelfRef.tb_cache__DOT__dut__DOT__cache_valid) 
                                              & (vlSelfRef.tb_cache__DOT__dut__DOT__req_block_tag 
                                                 == vlSelfRef.tb_cache__DOT__dut__DOT__cache_block_tag));
    vlSelfRef.tb_cache__DOT__dut__DOT__next_state = vlSelfRef.tb_cache__DOT__dut__DOT__state;
    vlSelfRef.tb_cache__DOT__dut__DOT__next_cache_valid 
        = vlSelfRef.tb_cache__DOT__dut__DOT__cache_valid;
    vlSymsp->TOP__tb_cache__DOT__axi.wlast = 0U;
    vlSelfRef.tb_cache__DOT__dut__DOT__next_set_ptr 
        = vlSelfRef.tb_cache__DOT__dut__DOT__set_ptr;
    if ((4U & (IData)(vlSelfRef.tb_cache__DOT__dut__DOT__state))) {
        if (VL_UNLIKELY(((2U & (IData)(vlSelfRef.tb_cache__DOT__dut__DOT__state))))) {
            VL_WRITEF_NX("CACHE FSM STATE ERROR\n",0);
        } else if ((1U & (IData)(vlSelfRef.tb_cache__DOT__dut__DOT__state))) {
            if (vlSymsp->TOP__tb_cache__DOT__axi.rvalid) {
                vlSelfRef.tb_cache__DOT__dut__DOT__next_set_ptr 
                    = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.tb_cache__DOT__dut__DOT__set_ptr)));
                if (vlSymsp->TOP__tb_cache__DOT__axi.rlast) {
                    vlSelfRef.tb_cache__DOT__dut__DOT__next_state = 0U;
                    vlSelfRef.tb_cache__DOT__dut__DOT__next_cache_valid = 1U;
                }
            }
            vlSymsp->TOP__tb_cache__DOT__axi.awvalid = 0U;
            vlSymsp->TOP__tb_cache__DOT__axi.wvalid = 0U;
            vlSymsp->TOP__tb_cache__DOT__axi.bready = 0U;
            vlSymsp->TOP__tb_cache__DOT__axi.arvalid = 0U;
            vlSymsp->TOP__tb_cache__DOT__axi.rready = 1U;
        } else {
            vlSymsp->TOP__tb_cache__DOT__axi.araddr 
                = (vlSelfRef.tb_cache__DOT__dut__DOT__req_block_tag 
                   << 9U);
            if (vlSymsp->TOP__tb_cache__DOT__axi.arready) {
                vlSelfRef.tb_cache__DOT__dut__DOT__next_state = 5U;
            }
            vlSymsp->TOP__tb_cache__DOT__axi.awvalid = 0U;
            vlSymsp->TOP__tb_cache__DOT__axi.wvalid = 0U;
            vlSymsp->TOP__tb_cache__DOT__axi.bready = 0U;
            vlSymsp->TOP__tb_cache__DOT__axi.arvalid = 1U;
            vlSymsp->TOP__tb_cache__DOT__axi.rready = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.tb_cache__DOT__dut__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.tb_cache__DOT__dut__DOT__state))) {
            if (((IData)(vlSymsp->TOP__tb_cache__DOT__axi.bvalid) 
                 & (0U == (IData)(vlSymsp->TOP__tb_cache__DOT__axi.bresp)))) {
                vlSelfRef.tb_cache__DOT__dut__DOT__next_state = 4U;
            } else if (VL_UNLIKELY((((IData)(vlSymsp->TOP__tb_cache__DOT__axi.bvalid) 
                                     & (0U != (IData)(vlSymsp->TOP__tb_cache__DOT__axi.bresp)))))) {
                VL_WRITEF_NX("ERROR WRITING TO MAIN MEMORY\n",0);
            }
            vlSymsp->TOP__tb_cache__DOT__axi.awvalid = 0U;
            vlSymsp->TOP__tb_cache__DOT__axi.wvalid = 0U;
            vlSymsp->TOP__tb_cache__DOT__axi.bready = 1U;
            vlSymsp->TOP__tb_cache__DOT__axi.arvalid = 0U;
            vlSymsp->TOP__tb_cache__DOT__axi.rready = 0U;
        } else {
            if (vlSymsp->TOP__tb_cache__DOT__axi.wready) {
                vlSelfRef.tb_cache__DOT__dut__DOT__next_set_ptr 
                    = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.tb_cache__DOT__dut__DOT__set_ptr)));
            }
            if ((0x7fU == (IData)(vlSelfRef.tb_cache__DOT__dut__DOT__set_ptr))) {
                vlSymsp->TOP__tb_cache__DOT__axi.wlast = 1U;
                if (vlSymsp->TOP__tb_cache__DOT__axi.wready) {
                    vlSelfRef.tb_cache__DOT__dut__DOT__next_state = 3U;
                }
            }
            vlSymsp->TOP__tb_cache__DOT__axi.awvalid = 0U;
            vlSymsp->TOP__tb_cache__DOT__axi.wvalid = 1U;
            vlSymsp->TOP__tb_cache__DOT__axi.bready = 0U;
            vlSymsp->TOP__tb_cache__DOT__axi.arvalid = 0U;
            vlSymsp->TOP__tb_cache__DOT__axi.rready = 0U;
        }
    } else if ((1U & (IData)(vlSelfRef.tb_cache__DOT__dut__DOT__state))) {
        vlSymsp->TOP__tb_cache__DOT__axi.awaddr = (vlSelfRef.tb_cache__DOT__dut__DOT__cache_block_tag 
                                                   << 9U);
        if (vlSymsp->TOP__tb_cache__DOT__axi.awready) {
            vlSelfRef.tb_cache__DOT__dut__DOT__next_state = 2U;
        }
        vlSymsp->TOP__tb_cache__DOT__axi.awvalid = 1U;
        vlSymsp->TOP__tb_cache__DOT__axi.wvalid = 0U;
        vlSymsp->TOP__tb_cache__DOT__axi.bready = 0U;
        vlSymsp->TOP__tb_cache__DOT__axi.arvalid = 0U;
        vlSymsp->TOP__tb_cache__DOT__axi.rready = 0U;
    } else {
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_cache__DOT__dut__DOT__read_enable) 
                          & (IData)(vlSelfRef.tb_cache__DOT__dut__DOT__write_enable))))) {
            VL_WRITEF_NX("E : CAN't READ WRITE AT THE SAME TIME\n",0);
        } else if (((IData)(vlSelfRef.tb_cache__DOT__dut__DOT__hit) 
                    & (IData)(vlSelfRef.tb_cache__DOT__dut__DOT__read_enable))) {
            vlSelfRef.tb_cache__DOT__dut__DOT__read_data 
                = (((0U == (0x0000001fU & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.tb_cache__DOT__dut__DOT__req_index), 5U)))
                     ? 0U : (vlSelfRef.tb_cache__DOT__dut__DOT__cache_data
                             [(((IData)(0x0000001fU) 
                                + (0x00000fffU & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.tb_cache__DOT__dut__DOT__req_index), 5U))) 
                               >> 5U)] << ((IData)(0x00000020U) 
                                           - (0x0000001fU 
                                              & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.tb_cache__DOT__dut__DOT__req_index), 5U))))) 
                   | (vlSelfRef.tb_cache__DOT__dut__DOT__cache_data
                      [(0x0000007fU & (VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.tb_cache__DOT__dut__DOT__req_index), 5U) 
                                       >> 5U))] >> 
                      (0x0000001fU & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.tb_cache__DOT__dut__DOT__req_index), 5U))));
        } else if (((IData)(vlSelfRef.tb_cache__DOT__dut__DOT__hit) 
                    & (IData)(vlSelfRef.tb_cache__DOT__dut__DOT__actual_write_enable))) {
            if (vlSelfRef.tb_cache__DOT__dut__DOT__cache_dirty) {
                vlSelfRef.tb_cache__DOT__dut__DOT__next_state = 1U;
            } else if ((1U & (~ (IData)(vlSelfRef.tb_cache__DOT__dut__DOT__cache_dirty)))) {
                vlSelfRef.tb_cache__DOT__dut__DOT__next_state = 4U;
            }
        }
        vlSymsp->TOP__tb_cache__DOT__axi.awvalid = 0U;
        vlSymsp->TOP__tb_cache__DOT__axi.wvalid = 1U;
        vlSymsp->TOP__tb_cache__DOT__axi.bready = 0U;
        vlSymsp->TOP__tb_cache__DOT__axi.arvalid = 0U;
        vlSymsp->TOP__tb_cache__DOT__axi.rready = 0U;
        vlSelfRef.tb_cache__DOT__dut__DOT__next_set_ptr = 0U;
    }
    vlSelfRef.tb_cache__DOT__read_data = vlSelfRef.tb_cache__DOT__dut__DOT__read_data;
}

void Vtop_axi_if___ico_sequent__TOP__tb_cache__DOT__axi__0(Vtop_axi_if* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
        Vtop_axi_if___ico_sequent__TOP__tb_cache__DOT__axi__0((&vlSymsp->TOP__tb_cache__DOT__axi));
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
                                                    ((IData)(vlSelfRef.tb_cache__DOT__dut__DOT__clk) 
                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cache__DOT__dut__DOT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cache__DOT__dut__DOT__clk__0 
        = vlSelfRef.tb_cache__DOT__dut__DOT__clk;
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

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_cache__DOT__dut__DOT__cache_dirty 
        = ((IData)(vlSelfRef.tb_cache__DOT__dut__DOT__rst_n) 
           && (IData)(vlSelfRef.tb_cache__DOT__dut__DOT__next_cache_dirty));
    if (vlSelfRef.tb_cache__DOT__dut__DOT__rst_n) {
        vlSelfRef.tb_cache__DOT__dut__DOT__state = vlSelfRef.tb_cache__DOT__dut__DOT__next_state;
        vlSelfRef.tb_cache__DOT__dut__DOT__set_ptr 
            = vlSelfRef.tb_cache__DOT__dut__DOT__next_set_ptr;
    } else {
        vlSelfRef.tb_cache__DOT__dut__DOT__state = 0U;
        vlSelfRef.tb_cache__DOT__dut__DOT__set_ptr = 0U;
    }
    vlSelfRef.tb_cache__DOT__dut__DOT__cache_valid 
        = ((IData)(vlSelfRef.tb_cache__DOT__dut__DOT__rst_n) 
           && (IData)(vlSelfRef.tb_cache__DOT__dut__DOT__next_cache_valid));
    vlSelfRef.tb_cache__DOT__dut__DOT__next_cache_dirty 
        = vlSelfRef.tb_cache__DOT__dut__DOT__cache_dirty;
    vlSelfRef.tb_cache__DOT__dut__DOT__hit = ((IData)(vlSelfRef.tb_cache__DOT__dut__DOT__cache_valid) 
                                              & (vlSelfRef.tb_cache__DOT__dut__DOT__req_block_tag 
                                                 == vlSelfRef.tb_cache__DOT__dut__DOT__cache_block_tag));
    vlSelfRef.tb_cache__DOT__dut__DOT__next_state = vlSelfRef.tb_cache__DOT__dut__DOT__state;
    vlSelfRef.tb_cache__DOT__dut__DOT__next_cache_valid 
        = vlSelfRef.tb_cache__DOT__dut__DOT__cache_valid;
    vlSymsp->TOP__tb_cache__DOT__axi.wlast = 0U;
    vlSelfRef.tb_cache__DOT__dut__DOT__next_set_ptr 
        = vlSelfRef.tb_cache__DOT__dut__DOT__set_ptr;
    if ((4U & (IData)(vlSelfRef.tb_cache__DOT__dut__DOT__state))) {
        if (VL_UNLIKELY(((2U & (IData)(vlSelfRef.tb_cache__DOT__dut__DOT__state))))) {
            VL_WRITEF_NX("CACHE FSM STATE ERROR\n",0);
        } else if ((1U & (IData)(vlSelfRef.tb_cache__DOT__dut__DOT__state))) {
            if (vlSymsp->TOP__tb_cache__DOT__axi.rvalid) {
                vlSelfRef.tb_cache__DOT__dut__DOT__next_set_ptr 
                    = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.tb_cache__DOT__dut__DOT__set_ptr)));
                if (vlSymsp->TOP__tb_cache__DOT__axi.rlast) {
                    vlSelfRef.tb_cache__DOT__dut__DOT__next_state = 0U;
                    vlSelfRef.tb_cache__DOT__dut__DOT__next_cache_valid = 1U;
                }
            }
            vlSymsp->TOP__tb_cache__DOT__axi.awvalid = 0U;
            vlSymsp->TOP__tb_cache__DOT__axi.wvalid = 0U;
            vlSymsp->TOP__tb_cache__DOT__axi.bready = 0U;
            vlSymsp->TOP__tb_cache__DOT__axi.arvalid = 0U;
            vlSymsp->TOP__tb_cache__DOT__axi.rready = 1U;
        } else {
            vlSymsp->TOP__tb_cache__DOT__axi.araddr 
                = (vlSelfRef.tb_cache__DOT__dut__DOT__req_block_tag 
                   << 9U);
            if (vlSymsp->TOP__tb_cache__DOT__axi.arready) {
                vlSelfRef.tb_cache__DOT__dut__DOT__next_state = 5U;
            }
            vlSymsp->TOP__tb_cache__DOT__axi.awvalid = 0U;
            vlSymsp->TOP__tb_cache__DOT__axi.wvalid = 0U;
            vlSymsp->TOP__tb_cache__DOT__axi.bready = 0U;
            vlSymsp->TOP__tb_cache__DOT__axi.arvalid = 1U;
            vlSymsp->TOP__tb_cache__DOT__axi.rready = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.tb_cache__DOT__dut__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.tb_cache__DOT__dut__DOT__state))) {
            if (((IData)(vlSymsp->TOP__tb_cache__DOT__axi.bvalid) 
                 & (0U == (IData)(vlSymsp->TOP__tb_cache__DOT__axi.bresp)))) {
                vlSelfRef.tb_cache__DOT__dut__DOT__next_state = 4U;
            } else if (VL_UNLIKELY((((IData)(vlSymsp->TOP__tb_cache__DOT__axi.bvalid) 
                                     & (0U != (IData)(vlSymsp->TOP__tb_cache__DOT__axi.bresp)))))) {
                VL_WRITEF_NX("ERROR WRITING TO MAIN MEMORY\n",0);
            }
            vlSymsp->TOP__tb_cache__DOT__axi.awvalid = 0U;
            vlSymsp->TOP__tb_cache__DOT__axi.wvalid = 0U;
            vlSymsp->TOP__tb_cache__DOT__axi.bready = 1U;
            vlSymsp->TOP__tb_cache__DOT__axi.arvalid = 0U;
            vlSymsp->TOP__tb_cache__DOT__axi.rready = 0U;
        } else {
            if (vlSymsp->TOP__tb_cache__DOT__axi.wready) {
                vlSelfRef.tb_cache__DOT__dut__DOT__next_set_ptr 
                    = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.tb_cache__DOT__dut__DOT__set_ptr)));
            }
            if ((0x7fU == (IData)(vlSelfRef.tb_cache__DOT__dut__DOT__set_ptr))) {
                vlSymsp->TOP__tb_cache__DOT__axi.wlast = 1U;
                if (vlSymsp->TOP__tb_cache__DOT__axi.wready) {
                    vlSelfRef.tb_cache__DOT__dut__DOT__next_state = 3U;
                }
            }
            vlSymsp->TOP__tb_cache__DOT__axi.awvalid = 0U;
            vlSymsp->TOP__tb_cache__DOT__axi.wvalid = 1U;
            vlSymsp->TOP__tb_cache__DOT__axi.bready = 0U;
            vlSymsp->TOP__tb_cache__DOT__axi.arvalid = 0U;
            vlSymsp->TOP__tb_cache__DOT__axi.rready = 0U;
        }
    } else if ((1U & (IData)(vlSelfRef.tb_cache__DOT__dut__DOT__state))) {
        vlSymsp->TOP__tb_cache__DOT__axi.awaddr = (vlSelfRef.tb_cache__DOT__dut__DOT__cache_block_tag 
                                                   << 9U);
        if (vlSymsp->TOP__tb_cache__DOT__axi.awready) {
            vlSelfRef.tb_cache__DOT__dut__DOT__next_state = 2U;
        }
        vlSymsp->TOP__tb_cache__DOT__axi.awvalid = 1U;
        vlSymsp->TOP__tb_cache__DOT__axi.wvalid = 0U;
        vlSymsp->TOP__tb_cache__DOT__axi.bready = 0U;
        vlSymsp->TOP__tb_cache__DOT__axi.arvalid = 0U;
        vlSymsp->TOP__tb_cache__DOT__axi.rready = 0U;
    } else {
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_cache__DOT__dut__DOT__read_enable) 
                          & (IData)(vlSelfRef.tb_cache__DOT__dut__DOT__write_enable))))) {
            VL_WRITEF_NX("E : CAN't READ WRITE AT THE SAME TIME\n",0);
        } else if (((IData)(vlSelfRef.tb_cache__DOT__dut__DOT__hit) 
                    & (IData)(vlSelfRef.tb_cache__DOT__dut__DOT__read_enable))) {
            vlSelfRef.tb_cache__DOT__dut__DOT__read_data 
                = (((0U == (0x0000001fU & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.tb_cache__DOT__dut__DOT__req_index), 5U)))
                     ? 0U : (vlSelfRef.tb_cache__DOT__dut__DOT__cache_data
                             [(((IData)(0x0000001fU) 
                                + (0x00000fffU & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.tb_cache__DOT__dut__DOT__req_index), 5U))) 
                               >> 5U)] << ((IData)(0x00000020U) 
                                           - (0x0000001fU 
                                              & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.tb_cache__DOT__dut__DOT__req_index), 5U))))) 
                   | (vlSelfRef.tb_cache__DOT__dut__DOT__cache_data
                      [(0x0000007fU & (VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.tb_cache__DOT__dut__DOT__req_index), 5U) 
                                       >> 5U))] >> 
                      (0x0000001fU & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.tb_cache__DOT__dut__DOT__req_index), 5U))));
        } else if (((IData)(vlSelfRef.tb_cache__DOT__dut__DOT__hit) 
                    & (IData)(vlSelfRef.tb_cache__DOT__dut__DOT__actual_write_enable))) {
            if (vlSelfRef.tb_cache__DOT__dut__DOT__cache_dirty) {
                vlSelfRef.tb_cache__DOT__dut__DOT__next_state = 1U;
            } else if ((1U & (~ (IData)(vlSelfRef.tb_cache__DOT__dut__DOT__cache_dirty)))) {
                vlSelfRef.tb_cache__DOT__dut__DOT__next_state = 4U;
            }
        }
        vlSymsp->TOP__tb_cache__DOT__axi.awvalid = 0U;
        vlSymsp->TOP__tb_cache__DOT__axi.wvalid = 1U;
        vlSymsp->TOP__tb_cache__DOT__axi.bready = 0U;
        vlSymsp->TOP__tb_cache__DOT__axi.arvalid = 0U;
        vlSymsp->TOP__tb_cache__DOT__axi.rready = 0U;
        vlSelfRef.tb_cache__DOT__dut__DOT__next_set_ptr = 0U;
    }
    vlSelfRef.tb_cache__DOT__read_data = vlSelfRef.tb_cache__DOT__dut__DOT__read_data;
}

void Vtop_axi_if___nba_sequent__TOP__tb_cache__DOT__axi__0(Vtop_axi_if* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        Vtop_axi_if___nba_sequent__TOP__tb_cache__DOT__axi__0((&vlSymsp->TOP__tb_cache__DOT__axi));
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
    // Body
    Vtop___024root___eval_triggers_vec__act(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtop___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
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
            VL_FATAL_MT("/Users/luokai/Documents/GitHub/RISC-V-project/src/tb_cache.sv", 1, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
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
            VL_FATAL_MT("/Users/luokai/Documents/GitHub/RISC-V-project/src/tb_cache.sv", 1, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/Users/luokai/Documents/GitHub/RISC-V-project/src/tb_cache.sv", 1, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vtop___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtop___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
