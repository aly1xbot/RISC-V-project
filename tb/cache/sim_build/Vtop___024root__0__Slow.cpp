// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cache__DOT__dut__DOT__clk__0 
        = vlSelfRef.tb_cache__DOT__dut__DOT__clk;
}

VL_ATTR_COLD void Vtop_axi_if___eval_initial__TOP__tb_cache__DOT__axi(Vtop_axi_if* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop_axi_if___eval_initial__TOP__tb_cache__DOT__axi((&vlSymsp->TOP__tb_cache__DOT__axi));
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
            VL_FATAL_MT("/Users/luokai/Documents/GitHub/RISC-V-project/src/tb_cache.sv", 1, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
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

extern const VlUnpacked<IData/*31:0*/, 16> Vtop__ConstPool__TABLE_h523ce058_0;

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.tb_cache__DOT__dut__DOT__aclk = vlSelfRef.tb_cache__DOT__aclk;
    vlSelfRef.tb_cache__DOT__dut__DOT__clk = vlSelfRef.tb_cache__DOT__clk;
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

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        Vtop_axi_if___ico_sequent__TOP__tb_cache__DOT__axi__0((&vlSymsp->TOP__tb_cache__DOT__axi));
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
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_cache.dut.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_cache__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13927104938810484054ull);
    vlSelf->tb_cache__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16026274462234848092ull);
    vlSelf->tb_cache__DOT__aclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7303414947831770659ull);
    vlSelf->tb_cache__DOT__address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3980585666032827582ull);
    vlSelf->tb_cache__DOT__write_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10365559129638557582ull);
    vlSelf->tb_cache__DOT__read_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5067883743301948556ull);
    vlSelf->tb_cache__DOT__write_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2857524140511341956ull);
    vlSelf->tb_cache__DOT__byte_enable = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15319371106297036176ull);
    vlSelf->tb_cache__DOT__read_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2059009812332119721ull);
    vlSelf->tb_cache__DOT__cache_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6438428637862325638ull);
    vlSelf->tb_cache__DOT__dut__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12575560482455157234ull);
    vlSelf->tb_cache__DOT__dut__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3796853636682526083ull);
    vlSelf->tb_cache__DOT__dut__DOT__aclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1962340527775909935ull);
    vlSelf->tb_cache__DOT__dut__DOT__address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15756194782387812524ull);
    vlSelf->tb_cache__DOT__dut__DOT__write_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 384419645534734333ull);
    vlSelf->tb_cache__DOT__dut__DOT__read_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9946736801109456267ull);
    vlSelf->tb_cache__DOT__dut__DOT__write_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2540180130970405598ull);
    vlSelf->tb_cache__DOT__dut__DOT__byte_enable = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6608393082000440047ull);
    vlSelf->tb_cache__DOT__dut__DOT__read_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13137721582189491768ull);
    vlSelf->tb_cache__DOT__dut__DOT__cache_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12255057926312852402ull);
    VL_SCOPED_RAND_RESET_W(4096, vlSelf->tb_cache__DOT__dut__DOT__cache_data, __VscopeHash, 3855522541095223791ull);
    vlSelf->tb_cache__DOT__dut__DOT__cache_block_tag = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 1130952982040757077ull);
    vlSelf->tb_cache__DOT__dut__DOT__cache_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11759300480611255889ull);
    vlSelf->tb_cache__DOT__dut__DOT__next_cache_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9123437269109671555ull);
    vlSelf->tb_cache__DOT__dut__DOT__cache_dirty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16798514496310799544ull);
    vlSelf->tb_cache__DOT__dut__DOT__next_cache_dirty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4017661074785246476ull);
    vlSelf->tb_cache__DOT__dut__DOT__set_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11810735109819293161ull);
    vlSelf->tb_cache__DOT__dut__DOT__next_set_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 731849850176855865ull);
    vlSelf->tb_cache__DOT__dut__DOT__actual_write_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3106554141262642198ull);
    vlSelf->tb_cache__DOT__dut__DOT__req_block_tag = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11094292812151061011ull);
    vlSelf->tb_cache__DOT__dut__DOT__req_index = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10765083426642096004ull);
    vlSelf->tb_cache__DOT__dut__DOT__byte_enable_mask = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7776154315221725305ull);
    vlSelf->tb_cache__DOT__dut__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16237965726181190532ull);
    vlSelf->tb_cache__DOT__dut__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15895219266387539478ull);
    vlSelf->tb_cache__DOT__dut__DOT__next_state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16943714898058318126ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_cache__DOT__dut__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
