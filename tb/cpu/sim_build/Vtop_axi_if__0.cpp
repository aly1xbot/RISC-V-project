// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop_axi_if___eval_initial__TOP__cpu_test_harness__DOT__m_axi(Vtop_axi_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_axi_if___eval_initial__TOP__cpu_test_harness__DOT__m_axi\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bid = 0U;
    vlSelfRef.bresp = 0U;
    vlSelfRef.rid = 0U;
    vlSelfRef.rresp = 0U;
}

void Vtop_axi_if___ico_sequent__TOP__cpu_test_harness__DOT__m_axi__0(Vtop_axi_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_axi_if___ico_sequent__TOP__cpu_test_harness__DOT__m_axi__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.aresetn = vlSymsp->TOP.cpu_test_harness__DOT__aresetn;
    vlSelfRef.awready = (1U & (~ (IData)(vlSymsp->TOP.cpu_test_harness__DOT__write_active)));
    vlSelfRef.wready = vlSymsp->TOP.cpu_test_harness__DOT__write_active;
    vlSelfRef.rvalid = vlSymsp->TOP.cpu_test_harness__DOT__read_active;
    vlSelfRef.arready = (1U & (~ (IData)(vlSymsp->TOP.cpu_test_harness__DOT__read_active)));
    vlSelfRef.bvalid = vlSymsp->TOP.cpu_test_harness__DOT__bvalid_reg;
    vlSelfRef.rlast = ((IData)(vlSymsp->TOP.cpu_test_harness__DOT__read_active) 
                       & ((IData)(vlSymsp->TOP.cpu_test_harness__DOT__read_count) 
                          == (IData)(vlSymsp->TOP.cpu_test_harness__DOT__read_length)));
    vlSelfRef.aclk = vlSymsp->TOP.cpu_test_harness__DOT__aclk;
}

void Vtop_axi_if___act_sequent__TOP__cpu_test_harness__DOT__m_axi__0(Vtop_axi_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_axi_if___act_sequent__TOP__cpu_test_harness__DOT__m_axi__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.aresetn = vlSymsp->TOP.cpu_test_harness__DOT__aresetn;
    vlSelfRef.aclk = vlSymsp->TOP.cpu_test_harness__DOT__aclk;
}

void Vtop_axi_if___nba_sequent__TOP__cpu_test_harness__DOT__m_axi__0(Vtop_axi_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_axi_if___nba_sequent__TOP__cpu_test_harness__DOT__m_axi__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bvalid = vlSymsp->TOP.cpu_test_harness__DOT__bvalid_reg;
    vlSelfRef.awready = (1U & (~ (IData)(vlSymsp->TOP.cpu_test_harness__DOT__write_active)));
    vlSelfRef.wready = vlSymsp->TOP.cpu_test_harness__DOT__write_active;
    vlSelfRef.rvalid = vlSymsp->TOP.cpu_test_harness__DOT__read_active;
    vlSelfRef.arready = (1U & (~ (IData)(vlSymsp->TOP.cpu_test_harness__DOT__read_active)));
    vlSelfRef.rlast = ((IData)(vlSymsp->TOP.cpu_test_harness__DOT__read_active) 
                       & ((IData)(vlSymsp->TOP.cpu_test_harness__DOT__read_count) 
                          == (IData)(vlSymsp->TOP.cpu_test_harness__DOT__read_length)));
}

void Vtop_axi_if___eval_initial__TOP__cpu_test_harness__DOT__core__DOT__m_axi_data(Vtop_axi_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_axi_if___eval_initial__TOP__cpu_test_harness__DOT__core__DOT__m_axi_data\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.awlen = 0x7fU;
    vlSelfRef.awsize = 2U;
    vlSelfRef.awburst = 1U;
    vlSelfRef.arlen = 0x7fU;
    vlSelfRef.arsize = 2U;
    vlSelfRef.arburst = 1U;
    vlSelfRef.awid = 0U;
    vlSelfRef.arid = 0U;
    vlSelfRef.wstrb = 0x0fU;
}

void Vtop_axi_if___ico_sequent__TOP__cpu_test_harness__DOT__core__DOT__m_axi_data__0(Vtop_axi_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_axi_if___ico_sequent__TOP__cpu_test_harness__DOT__core__DOT__m_axi_data__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.wdata = (((0U == (0x0000001fU & ((IData)(vlSymsp->TOP.cpu_test_harness__DOT__core__DOT__data_cache__DOT__set_ptr) 
                                               << 5U)))
                         ? 0U : (vlSymsp->TOP.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data
                                 [(((IData)(0x0000001fU) 
                                    + ((IData)(vlSymsp->TOP.cpu_test_harness__DOT__core__DOT__data_cache__DOT__set_ptr) 
                                       << 5U)) >> 5U)] 
                                 << ((IData)(0x00000020U) 
                                     - (0x0000001fU 
                                        & ((IData)(vlSymsp->TOP.cpu_test_harness__DOT__core__DOT__data_cache__DOT__set_ptr) 
                                           << 5U))))) 
                       | (vlSymsp->TOP.cpu_test_harness__DOT__core__DOT__data_cache__DOT__cache_data
                          [(0x07ffffffU & (IData)(vlSymsp->TOP.cpu_test_harness__DOT__core__DOT__data_cache__DOT__set_ptr))] 
                          >> (0x0000001fU & ((IData)(vlSymsp->TOP.cpu_test_harness__DOT__core__DOT__data_cache__DOT__set_ptr) 
                                             << 5U))));
}

void Vtop_axi_if___ico_sequent__TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst__0(Vtop_axi_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_axi_if___ico_sequent__TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.wdata = (((0U == (0x0000001fU & ((IData)(vlSymsp->TOP.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__set_ptr) 
                                               << 5U)))
                         ? 0U : (vlSymsp->TOP.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data
                                 [(((IData)(0x0000001fU) 
                                    + ((IData)(vlSymsp->TOP.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__set_ptr) 
                                       << 5U)) >> 5U)] 
                                 << ((IData)(0x00000020U) 
                                     - (0x0000001fU 
                                        & ((IData)(vlSymsp->TOP.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__set_ptr) 
                                           << 5U))))) 
                       | (vlSymsp->TOP.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__cache_data
                          [(0x07ffffffU & (IData)(vlSymsp->TOP.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__set_ptr))] 
                          >> (0x0000001fU & ((IData)(vlSymsp->TOP.cpu_test_harness__DOT__core__DOT__instr_cache__DOT__set_ptr) 
                                             << 5U))));
}

std::string VL_TO_STRING(const Vtop_axi_if* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_axi_if::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->vlNamep : "null");
}
