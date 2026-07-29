// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop_axi_if___ico_sequent__TOP__tb_cache__DOT__axi__0(Vtop_axi_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_axi_if___ico_sequent__TOP__tb_cache__DOT__axi__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.aclk = vlSymsp->TOP.tb_cache__DOT__aclk;
    vlSelfRef.wdata = (((0U == (0x0000001fU & ((IData)(vlSymsp->TOP.tb_cache__DOT__dut__DOT__set_ptr) 
                                               << 5U)))
                         ? 0U : (vlSymsp->TOP.tb_cache__DOT__dut__DOT__cache_data
                                 [(((IData)(0x0000001fU) 
                                    + ((IData)(vlSymsp->TOP.tb_cache__DOT__dut__DOT__set_ptr) 
                                       << 5U)) >> 5U)] 
                                 << ((IData)(0x00000020U) 
                                     - (0x0000001fU 
                                        & ((IData)(vlSymsp->TOP.tb_cache__DOT__dut__DOT__set_ptr) 
                                           << 5U))))) 
                       | (vlSymsp->TOP.tb_cache__DOT__dut__DOT__cache_data
                          [(0x07ffffffU & (IData)(vlSymsp->TOP.tb_cache__DOT__dut__DOT__set_ptr))] 
                          >> (0x0000001fU & ((IData)(vlSymsp->TOP.tb_cache__DOT__dut__DOT__set_ptr) 
                                             << 5U))));
}

void Vtop_axi_if___nba_sequent__TOP__tb_cache__DOT__axi__0(Vtop_axi_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_axi_if___nba_sequent__TOP__tb_cache__DOT__axi__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.wdata = (((0U == (0x0000001fU & ((IData)(vlSymsp->TOP.tb_cache__DOT__dut__DOT__set_ptr) 
                                               << 5U)))
                         ? 0U : (vlSymsp->TOP.tb_cache__DOT__dut__DOT__cache_data
                                 [(((IData)(0x0000001fU) 
                                    + ((IData)(vlSymsp->TOP.tb_cache__DOT__dut__DOT__set_ptr) 
                                       << 5U)) >> 5U)] 
                                 << ((IData)(0x00000020U) 
                                     - (0x0000001fU 
                                        & ((IData)(vlSymsp->TOP.tb_cache__DOT__dut__DOT__set_ptr) 
                                           << 5U))))) 
                       | (vlSymsp->TOP.tb_cache__DOT__dut__DOT__cache_data
                          [(0x07ffffffU & (IData)(vlSymsp->TOP.tb_cache__DOT__dut__DOT__set_ptr))] 
                          >> (0x0000001fU & ((IData)(vlSymsp->TOP.tb_cache__DOT__dut__DOT__set_ptr) 
                                             << 5U))));
}

std::string VL_TO_STRING(const Vtop_axi_if* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_axi_if::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->vlNamep : "null");
}
