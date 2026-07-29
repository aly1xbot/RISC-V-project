// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_dtype____0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlWide<128>/*4095:0*/& __VdtypeVar);

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    bufp->chgBit(oldp+0,(vlSelfRef.tb_cache__DOT__clk));
    bufp->chgBit(oldp+1,(vlSelfRef.tb_cache__DOT__rst_n));
    bufp->chgBit(oldp+2,(vlSelfRef.tb_cache__DOT__aclk));
    bufp->chgIData(oldp+3,(vlSelfRef.tb_cache__DOT__address),32);
    bufp->chgIData(oldp+4,(vlSelfRef.tb_cache__DOT__write_data),32);
    bufp->chgBit(oldp+5,(vlSelfRef.tb_cache__DOT__read_enable));
    bufp->chgBit(oldp+6,(vlSelfRef.tb_cache__DOT__write_enable));
    bufp->chgCData(oldp+7,(vlSelfRef.tb_cache__DOT__byte_enable),4);
    bufp->chgIData(oldp+8,(vlSelfRef.tb_cache__DOT__read_data),32);
    bufp->chgBit(oldp+9,(vlSelfRef.tb_cache__DOT__cache_stall));
    bufp->chgBit(oldp+10,(vlSelfRef.tb_cache__DOT__dut__DOT__clk));
    bufp->chgBit(oldp+11,(vlSelfRef.tb_cache__DOT__dut__DOT__rst_n));
    bufp->chgBit(oldp+12,(vlSelfRef.tb_cache__DOT__dut__DOT__aclk));
    bufp->chgIData(oldp+13,(vlSelfRef.tb_cache__DOT__dut__DOT__address),32);
    bufp->chgIData(oldp+14,(vlSelfRef.tb_cache__DOT__dut__DOT__write_data),32);
    bufp->chgBit(oldp+15,(vlSelfRef.tb_cache__DOT__dut__DOT__read_enable));
    bufp->chgBit(oldp+16,(vlSelfRef.tb_cache__DOT__dut__DOT__write_enable));
    bufp->chgCData(oldp+17,(vlSelfRef.tb_cache__DOT__dut__DOT__byte_enable),4);
    bufp->chgIData(oldp+18,(vlSelfRef.tb_cache__DOT__dut__DOT__read_data),32);
    bufp->chgBit(oldp+19,(vlSelfRef.tb_cache__DOT__dut__DOT__cache_stall));
    Vtop___024root__trace_chg_dtype____0(vlSelf, bufp, 20, vlSelfRef.tb_cache__DOT__dut__DOT__cache_data);
    bufp->chgIData(oldp+148,(vlSelfRef.tb_cache__DOT__dut__DOT__cache_block_tag),23);
    bufp->chgBit(oldp+149,(vlSelfRef.tb_cache__DOT__dut__DOT__cache_valid));
    bufp->chgBit(oldp+150,(vlSelfRef.tb_cache__DOT__dut__DOT__next_cache_valid));
    bufp->chgBit(oldp+151,(vlSelfRef.tb_cache__DOT__dut__DOT__cache_dirty));
    bufp->chgBit(oldp+152,(vlSelfRef.tb_cache__DOT__dut__DOT__next_cache_dirty));
    bufp->chgCData(oldp+153,(vlSelfRef.tb_cache__DOT__dut__DOT__set_ptr),7);
    bufp->chgCData(oldp+154,(vlSelfRef.tb_cache__DOT__dut__DOT__next_set_ptr),7);
    bufp->chgBit(oldp+155,(vlSelfRef.tb_cache__DOT__dut__DOT__actual_write_enable));
    bufp->chgIData(oldp+156,(vlSelfRef.tb_cache__DOT__dut__DOT__req_block_tag),23);
    bufp->chgCData(oldp+157,(vlSelfRef.tb_cache__DOT__dut__DOT__req_index),7);
    bufp->chgIData(oldp+158,(vlSelfRef.tb_cache__DOT__dut__DOT__byte_enable_mask),32);
    bufp->chgBit(oldp+159,(vlSelfRef.tb_cache__DOT__dut__DOT__hit));
    bufp->chgCData(oldp+160,(vlSelfRef.tb_cache__DOT__dut__DOT__state),3);
    bufp->chgCData(oldp+161,(vlSelfRef.tb_cache__DOT__dut__DOT__next_state),3);
    bufp->chgBit(oldp+162,(vlSymsp->TOP__tb_cache__DOT__axi.aclk));
    bufp->chgBit(oldp+163,(vlSymsp->TOP__tb_cache__DOT__axi.aresetn));
    bufp->chgCData(oldp+164,(vlSymsp->TOP__tb_cache__DOT__axi.awid),4);
    bufp->chgIData(oldp+165,(vlSymsp->TOP__tb_cache__DOT__axi.awaddr),32);
    bufp->chgCData(oldp+166,(vlSymsp->TOP__tb_cache__DOT__axi.awlen),8);
    bufp->chgCData(oldp+167,(vlSymsp->TOP__tb_cache__DOT__axi.awsize),3);
    bufp->chgCData(oldp+168,(vlSymsp->TOP__tb_cache__DOT__axi.awburst),2);
    bufp->chgCData(oldp+169,(vlSymsp->TOP__tb_cache__DOT__axi.awqos),4);
    bufp->chgCData(oldp+170,(vlSymsp->TOP__tb_cache__DOT__axi.awlock),2);
    bufp->chgBit(oldp+171,(vlSymsp->TOP__tb_cache__DOT__axi.awvalid));
    bufp->chgBit(oldp+172,(vlSymsp->TOP__tb_cache__DOT__axi.awready));
    bufp->chgCData(oldp+173,(vlSymsp->TOP__tb_cache__DOT__axi.wstrb),4);
    bufp->chgBit(oldp+174,(vlSymsp->TOP__tb_cache__DOT__axi.wlast));
    bufp->chgIData(oldp+175,(vlSymsp->TOP__tb_cache__DOT__axi.wdata),32);
    bufp->chgBit(oldp+176,(vlSymsp->TOP__tb_cache__DOT__axi.wvalid));
    bufp->chgBit(oldp+177,(vlSymsp->TOP__tb_cache__DOT__axi.wready));
    bufp->chgCData(oldp+178,(vlSymsp->TOP__tb_cache__DOT__axi.bid),4);
    bufp->chgCData(oldp+179,(vlSymsp->TOP__tb_cache__DOT__axi.bresp),2);
    bufp->chgBit(oldp+180,(vlSymsp->TOP__tb_cache__DOT__axi.bvalid));
    bufp->chgBit(oldp+181,(vlSymsp->TOP__tb_cache__DOT__axi.bready));
    bufp->chgCData(oldp+182,(vlSymsp->TOP__tb_cache__DOT__axi.arid),4);
    bufp->chgIData(oldp+183,(vlSymsp->TOP__tb_cache__DOT__axi.araddr),32);
    bufp->chgCData(oldp+184,(vlSymsp->TOP__tb_cache__DOT__axi.arlen),8);
    bufp->chgCData(oldp+185,(vlSymsp->TOP__tb_cache__DOT__axi.arsize),3);
    bufp->chgCData(oldp+186,(vlSymsp->TOP__tb_cache__DOT__axi.arburst),2);
    bufp->chgCData(oldp+187,(vlSymsp->TOP__tb_cache__DOT__axi.arqos),4);
    bufp->chgCData(oldp+188,(vlSymsp->TOP__tb_cache__DOT__axi.arlock),2);
    bufp->chgBit(oldp+189,(vlSymsp->TOP__tb_cache__DOT__axi.arvalid));
    bufp->chgBit(oldp+190,(vlSymsp->TOP__tb_cache__DOT__axi.arready));
    bufp->chgCData(oldp+191,(vlSymsp->TOP__tb_cache__DOT__axi.rid),4);
    bufp->chgIData(oldp+192,(vlSymsp->TOP__tb_cache__DOT__axi.rdata),32);
    bufp->chgCData(oldp+193,(vlSymsp->TOP__tb_cache__DOT__axi.rresp),2);
    bufp->chgBit(oldp+194,(vlSymsp->TOP__tb_cache__DOT__axi.rlast));
    bufp->chgBit(oldp+195,(vlSymsp->TOP__tb_cache__DOT__axi.rvalid));
    bufp->chgBit(oldp+196,(vlSymsp->TOP__tb_cache__DOT__axi.rready));
}

void Vtop___024root__trace_chg_dtype____0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlWide<128>/*4095:0*/& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000fe0U, 32)),32);
    bufp->chgIData(oldp+1,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000fc0U, 32)),32);
    bufp->chgIData(oldp+2,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000fa0U, 32)),32);
    bufp->chgIData(oldp+3,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000f80U, 32)),32);
    bufp->chgIData(oldp+4,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000f60U, 32)),32);
    bufp->chgIData(oldp+5,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000f40U, 32)),32);
    bufp->chgIData(oldp+6,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000f20U, 32)),32);
    bufp->chgIData(oldp+7,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000f00U, 32)),32);
    bufp->chgIData(oldp+8,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000ee0U, 32)),32);
    bufp->chgIData(oldp+9,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000ec0U, 32)),32);
    bufp->chgIData(oldp+10,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000ea0U, 32)),32);
    bufp->chgIData(oldp+11,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000e80U, 32)),32);
    bufp->chgIData(oldp+12,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000e60U, 32)),32);
    bufp->chgIData(oldp+13,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000e40U, 32)),32);
    bufp->chgIData(oldp+14,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000e20U, 32)),32);
    bufp->chgIData(oldp+15,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000e00U, 32)),32);
    bufp->chgIData(oldp+16,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000de0U, 32)),32);
    bufp->chgIData(oldp+17,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000dc0U, 32)),32);
    bufp->chgIData(oldp+18,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000da0U, 32)),32);
    bufp->chgIData(oldp+19,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000d80U, 32)),32);
    bufp->chgIData(oldp+20,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000d60U, 32)),32);
    bufp->chgIData(oldp+21,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000d40U, 32)),32);
    bufp->chgIData(oldp+22,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000d20U, 32)),32);
    bufp->chgIData(oldp+23,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000d00U, 32)),32);
    bufp->chgIData(oldp+24,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000ce0U, 32)),32);
    bufp->chgIData(oldp+25,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000cc0U, 32)),32);
    bufp->chgIData(oldp+26,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000ca0U, 32)),32);
    bufp->chgIData(oldp+27,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000c80U, 32)),32);
    bufp->chgIData(oldp+28,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000c60U, 32)),32);
    bufp->chgIData(oldp+29,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000c40U, 32)),32);
    bufp->chgIData(oldp+30,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000c20U, 32)),32);
    bufp->chgIData(oldp+31,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000c00U, 32)),32);
    bufp->chgIData(oldp+32,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000be0U, 32)),32);
    bufp->chgIData(oldp+33,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000bc0U, 32)),32);
    bufp->chgIData(oldp+34,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000ba0U, 32)),32);
    bufp->chgIData(oldp+35,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000b80U, 32)),32);
    bufp->chgIData(oldp+36,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000b60U, 32)),32);
    bufp->chgIData(oldp+37,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000b40U, 32)),32);
    bufp->chgIData(oldp+38,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000b20U, 32)),32);
    bufp->chgIData(oldp+39,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000b00U, 32)),32);
    bufp->chgIData(oldp+40,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000ae0U, 32)),32);
    bufp->chgIData(oldp+41,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000ac0U, 32)),32);
    bufp->chgIData(oldp+42,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000aa0U, 32)),32);
    bufp->chgIData(oldp+43,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000a80U, 32)),32);
    bufp->chgIData(oldp+44,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000a60U, 32)),32);
    bufp->chgIData(oldp+45,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000a40U, 32)),32);
    bufp->chgIData(oldp+46,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000a20U, 32)),32);
    bufp->chgIData(oldp+47,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000a00U, 32)),32);
    bufp->chgIData(oldp+48,(VL_SEL_IWII(4096, __VdtypeVar, 0x000009e0U, 32)),32);
    bufp->chgIData(oldp+49,(VL_SEL_IWII(4096, __VdtypeVar, 0x000009c0U, 32)),32);
    bufp->chgIData(oldp+50,(VL_SEL_IWII(4096, __VdtypeVar, 0x000009a0U, 32)),32);
    bufp->chgIData(oldp+51,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000980U, 32)),32);
    bufp->chgIData(oldp+52,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000960U, 32)),32);
    bufp->chgIData(oldp+53,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000940U, 32)),32);
    bufp->chgIData(oldp+54,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000920U, 32)),32);
    bufp->chgIData(oldp+55,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000900U, 32)),32);
    bufp->chgIData(oldp+56,(VL_SEL_IWII(4096, __VdtypeVar, 0x000008e0U, 32)),32);
    bufp->chgIData(oldp+57,(VL_SEL_IWII(4096, __VdtypeVar, 0x000008c0U, 32)),32);
    bufp->chgIData(oldp+58,(VL_SEL_IWII(4096, __VdtypeVar, 0x000008a0U, 32)),32);
    bufp->chgIData(oldp+59,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000880U, 32)),32);
    bufp->chgIData(oldp+60,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000860U, 32)),32);
    bufp->chgIData(oldp+61,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000840U, 32)),32);
    bufp->chgIData(oldp+62,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000820U, 32)),32);
    bufp->chgIData(oldp+63,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000800U, 32)),32);
    bufp->chgIData(oldp+64,(VL_SEL_IWII(4096, __VdtypeVar, 0x000007e0U, 32)),32);
    bufp->chgIData(oldp+65,(VL_SEL_IWII(4096, __VdtypeVar, 0x000007c0U, 32)),32);
    bufp->chgIData(oldp+66,(VL_SEL_IWII(4096, __VdtypeVar, 0x000007a0U, 32)),32);
    bufp->chgIData(oldp+67,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000780U, 32)),32);
    bufp->chgIData(oldp+68,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000760U, 32)),32);
    bufp->chgIData(oldp+69,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000740U, 32)),32);
    bufp->chgIData(oldp+70,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000720U, 32)),32);
    bufp->chgIData(oldp+71,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000700U, 32)),32);
    bufp->chgIData(oldp+72,(VL_SEL_IWII(4096, __VdtypeVar, 0x000006e0U, 32)),32);
    bufp->chgIData(oldp+73,(VL_SEL_IWII(4096, __VdtypeVar, 0x000006c0U, 32)),32);
    bufp->chgIData(oldp+74,(VL_SEL_IWII(4096, __VdtypeVar, 0x000006a0U, 32)),32);
    bufp->chgIData(oldp+75,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000680U, 32)),32);
    bufp->chgIData(oldp+76,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000660U, 32)),32);
    bufp->chgIData(oldp+77,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000640U, 32)),32);
    bufp->chgIData(oldp+78,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000620U, 32)),32);
    bufp->chgIData(oldp+79,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000600U, 32)),32);
    bufp->chgIData(oldp+80,(VL_SEL_IWII(4096, __VdtypeVar, 0x000005e0U, 32)),32);
    bufp->chgIData(oldp+81,(VL_SEL_IWII(4096, __VdtypeVar, 0x000005c0U, 32)),32);
    bufp->chgIData(oldp+82,(VL_SEL_IWII(4096, __VdtypeVar, 0x000005a0U, 32)),32);
    bufp->chgIData(oldp+83,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000580U, 32)),32);
    bufp->chgIData(oldp+84,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000560U, 32)),32);
    bufp->chgIData(oldp+85,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000540U, 32)),32);
    bufp->chgIData(oldp+86,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000520U, 32)),32);
    bufp->chgIData(oldp+87,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000500U, 32)),32);
    bufp->chgIData(oldp+88,(VL_SEL_IWII(4096, __VdtypeVar, 0x000004e0U, 32)),32);
    bufp->chgIData(oldp+89,(VL_SEL_IWII(4096, __VdtypeVar, 0x000004c0U, 32)),32);
    bufp->chgIData(oldp+90,(VL_SEL_IWII(4096, __VdtypeVar, 0x000004a0U, 32)),32);
    bufp->chgIData(oldp+91,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000480U, 32)),32);
    bufp->chgIData(oldp+92,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000460U, 32)),32);
    bufp->chgIData(oldp+93,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000440U, 32)),32);
    bufp->chgIData(oldp+94,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000420U, 32)),32);
    bufp->chgIData(oldp+95,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000400U, 32)),32);
    bufp->chgIData(oldp+96,(VL_SEL_IWII(4096, __VdtypeVar, 0x000003e0U, 32)),32);
    bufp->chgIData(oldp+97,(VL_SEL_IWII(4096, __VdtypeVar, 0x000003c0U, 32)),32);
    bufp->chgIData(oldp+98,(VL_SEL_IWII(4096, __VdtypeVar, 0x000003a0U, 32)),32);
    bufp->chgIData(oldp+99,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000380U, 32)),32);
    bufp->chgIData(oldp+100,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000360U, 32)),32);
    bufp->chgIData(oldp+101,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000340U, 32)),32);
    bufp->chgIData(oldp+102,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000320U, 32)),32);
    bufp->chgIData(oldp+103,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000300U, 32)),32);
    bufp->chgIData(oldp+104,(VL_SEL_IWII(4096, __VdtypeVar, 0x000002e0U, 32)),32);
    bufp->chgIData(oldp+105,(VL_SEL_IWII(4096, __VdtypeVar, 0x000002c0U, 32)),32);
    bufp->chgIData(oldp+106,(VL_SEL_IWII(4096, __VdtypeVar, 0x000002a0U, 32)),32);
    bufp->chgIData(oldp+107,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000280U, 32)),32);
    bufp->chgIData(oldp+108,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000260U, 32)),32);
    bufp->chgIData(oldp+109,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000240U, 32)),32);
    bufp->chgIData(oldp+110,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000220U, 32)),32);
    bufp->chgIData(oldp+111,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000200U, 32)),32);
    bufp->chgIData(oldp+112,(VL_SEL_IWII(4096, __VdtypeVar, 0x000001e0U, 32)),32);
    bufp->chgIData(oldp+113,(VL_SEL_IWII(4096, __VdtypeVar, 0x000001c0U, 32)),32);
    bufp->chgIData(oldp+114,(VL_SEL_IWII(4096, __VdtypeVar, 0x000001a0U, 32)),32);
    bufp->chgIData(oldp+115,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000180U, 32)),32);
    bufp->chgIData(oldp+116,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000160U, 32)),32);
    bufp->chgIData(oldp+117,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000140U, 32)),32);
    bufp->chgIData(oldp+118,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000120U, 32)),32);
    bufp->chgIData(oldp+119,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000100U, 32)),32);
    bufp->chgIData(oldp+120,(VL_SEL_IWII(4096, __VdtypeVar, 0x000000e0U, 32)),32);
    bufp->chgIData(oldp+121,(VL_SEL_IWII(4096, __VdtypeVar, 0x000000c0U, 32)),32);
    bufp->chgIData(oldp+122,(VL_SEL_IWII(4096, __VdtypeVar, 0x000000a0U, 32)),32);
    bufp->chgIData(oldp+123,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000080U, 32)),32);
    bufp->chgIData(oldp+124,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000060U, 32)),32);
    bufp->chgIData(oldp+125,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000040U, 32)),32);
    bufp->chgIData(oldp+126,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000020U, 32)),32);
    bufp->chgIData(oldp+127,(VL_SEL_IWII(4096, __VdtypeVar, 0U, 32)),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Locals
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
