// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__tb_cache__DOT__axi__0(Vtop___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtop___024root__trace_init_dtype____0(Vtop___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "tb_cache", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+2,0,"aclk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+5,0,"read_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+6,0,"write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+7,0,"byte_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+8,0,"read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+9,0,"cache_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "axi", VerilatedTracePrefixType::SCOPE_INTERFACE, 0, 0);
    Vtop___024root__trace_init_sub__TOP__tb_cache__DOT__axi__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "dut", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+197,0,"CACHE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+10,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+11,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"aclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+13,0,"address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+14,0,"write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+15,0,"read_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+16,0,"write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+17,0,"byte_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+18,0,"read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+19,0,"cache_stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);

    Vtop___024root__trace_init_dtype____0(vlSelf, tracep, "cache_data", 0, c+20, VerilatedTraceSigDirection::NONE);
    VL_TRACE_DECL_BUS(tracep,c+148,0,"cache_block_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,9);
    VL_TRACE_DECL_BIT(tracep,c+149,0,"cache_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+150,0,"next_cache_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+151,0,"cache_dirty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+152,0,"next_cache_dirty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+153,0,"set_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+154,0,"next_set_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BIT(tracep,c+155,0,"actual_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+156,0,"req_block_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,9);
    VL_TRACE_DECL_BUS(tracep,c+157,0,"req_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 8,2);
    VL_TRACE_DECL_BUS(tracep,c+158,0,"byte_enable_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+159,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+160,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+161,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_PUSH_PREFIX(tracep, "axi", VerilatedTracePrefixType::SCOPE_INTERFACE, 0, 0);
    Vtop___024root__trace_init_sub__TOP__tb_cache__DOT__axi__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____0(Vtop___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtop___024root__trace_init_dtype____0(Vtop___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype____0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_dtype_sub____0(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____0(Vtop___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype_sub____0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_PACKED, 127, 0);
    VL_TRACE_DECL_BUS(tracep,c+0,fidx,"[127]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1,fidx,"[126]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2,fidx,"[125]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+3,fidx,"[124]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+4,fidx,"[123]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+5,fidx,"[122]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+6,fidx,"[121]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+7,fidx,"[120]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+8,fidx,"[119]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+9,fidx,"[118]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+10,fidx,"[117]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+11,fidx,"[116]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+12,fidx,"[115]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+13,fidx,"[114]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+14,fidx,"[113]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+15,fidx,"[112]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+16,fidx,"[111]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+17,fidx,"[110]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+18,fidx,"[109]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+19,fidx,"[108]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+20,fidx,"[107]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+21,fidx,"[106]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+22,fidx,"[105]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+23,fidx,"[104]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+24,fidx,"[103]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+25,fidx,"[102]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+26,fidx,"[101]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+27,fidx,"[100]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+28,fidx,"[99]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+29,fidx,"[98]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+30,fidx,"[97]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+31,fidx,"[96]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+32,fidx,"[95]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+33,fidx,"[94]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+34,fidx,"[93]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+35,fidx,"[92]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+36,fidx,"[91]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+37,fidx,"[90]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+38,fidx,"[89]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+39,fidx,"[88]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+40,fidx,"[87]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+41,fidx,"[86]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+42,fidx,"[85]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+43,fidx,"[84]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+44,fidx,"[83]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+45,fidx,"[82]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+46,fidx,"[81]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+47,fidx,"[80]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+48,fidx,"[79]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+49,fidx,"[78]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+50,fidx,"[77]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+51,fidx,"[76]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+52,fidx,"[75]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+53,fidx,"[74]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+54,fidx,"[73]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+55,fidx,"[72]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+56,fidx,"[71]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+57,fidx,"[70]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+58,fidx,"[69]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+59,fidx,"[68]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+60,fidx,"[67]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+61,fidx,"[66]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+62,fidx,"[65]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+63,fidx,"[64]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+64,fidx,"[63]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+65,fidx,"[62]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+66,fidx,"[61]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+67,fidx,"[60]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+68,fidx,"[59]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+69,fidx,"[58]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+70,fidx,"[57]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+71,fidx,"[56]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+72,fidx,"[55]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+73,fidx,"[54]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+74,fidx,"[53]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+75,fidx,"[52]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+76,fidx,"[51]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+77,fidx,"[50]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+78,fidx,"[49]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+79,fidx,"[48]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+80,fidx,"[47]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+81,fidx,"[46]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+82,fidx,"[45]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+83,fidx,"[44]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+84,fidx,"[43]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+85,fidx,"[42]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+86,fidx,"[41]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+87,fidx,"[40]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+88,fidx,"[39]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+89,fidx,"[38]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+90,fidx,"[37]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+91,fidx,"[36]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+92,fidx,"[35]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+93,fidx,"[34]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+94,fidx,"[33]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+95,fidx,"[32]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+96,fidx,"[31]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+97,fidx,"[30]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+98,fidx,"[29]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+99,fidx,"[28]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+100,fidx,"[27]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+101,fidx,"[26]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+102,fidx,"[25]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+103,fidx,"[24]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+104,fidx,"[23]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+105,fidx,"[22]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+106,fidx,"[21]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+107,fidx,"[20]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+108,fidx,"[19]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+109,fidx,"[18]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+110,fidx,"[17]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+111,fidx,"[16]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+112,fidx,"[15]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+113,fidx,"[14]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+114,fidx,"[13]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+115,fidx,"[12]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+116,fidx,"[11]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+117,fidx,"[10]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+118,fidx,"[9]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+119,fidx,"[8]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+120,fidx,"[7]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+121,fidx,"[6]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+122,fidx,"[5]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+123,fidx,"[4]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+124,fidx,"[3]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+125,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+126,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+127,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__tb_cache__DOT__axi__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__tb_cache__DOT__axi__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+198,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+198,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+199,0,"ID_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+162,0,"aclk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+163,0,"aresetn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+164,0,"awid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+165,0,"awaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+166,0,"awlen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+167,0,"awsize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+168,0,"awburst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+169,0,"awqos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+170,0,"awlock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+171,0,"awvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+172,0,"awready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+173,0,"wstrb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+174,0,"wlast",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+175,0,"wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+176,0,"wvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+177,0,"wready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+178,0,"bid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+179,0,"bresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+180,0,"bvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+181,0,"bready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+182,0,"arid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+183,0,"araddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+184,0,"arlen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+185,0,"arsize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+186,0,"arburst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+187,0,"arqos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+188,0,"arlock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+189,0,"arvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+190,0,"arready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+191,0,"rid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+192,0,"rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+193,0,"rresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+194,0,"rlast",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+195,0,"rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+196,0,"rready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtop___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtop___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtop___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+197,(0x00000080U),32);
    bufp->fullIData(oldp+198,(0x00000020U),32);
    bufp->fullIData(oldp+199,(4U),32);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_dtype____0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlWide<128>/*4095:0*/& __VdtypeVar);

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+0,(vlSelfRef.tb_cache__DOT__clk));
    bufp->fullBit(oldp+1,(vlSelfRef.tb_cache__DOT__rst_n));
    bufp->fullBit(oldp+2,(vlSelfRef.tb_cache__DOT__aclk));
    bufp->fullIData(oldp+3,(vlSelfRef.tb_cache__DOT__address),32);
    bufp->fullIData(oldp+4,(vlSelfRef.tb_cache__DOT__write_data),32);
    bufp->fullBit(oldp+5,(vlSelfRef.tb_cache__DOT__read_enable));
    bufp->fullBit(oldp+6,(vlSelfRef.tb_cache__DOT__write_enable));
    bufp->fullCData(oldp+7,(vlSelfRef.tb_cache__DOT__byte_enable),4);
    bufp->fullIData(oldp+8,(vlSelfRef.tb_cache__DOT__read_data),32);
    bufp->fullBit(oldp+9,(vlSelfRef.tb_cache__DOT__cache_stall));
    bufp->fullBit(oldp+10,(vlSelfRef.tb_cache__DOT__dut__DOT__clk));
    bufp->fullBit(oldp+11,(vlSelfRef.tb_cache__DOT__dut__DOT__rst_n));
    bufp->fullBit(oldp+12,(vlSelfRef.tb_cache__DOT__dut__DOT__aclk));
    bufp->fullIData(oldp+13,(vlSelfRef.tb_cache__DOT__dut__DOT__address),32);
    bufp->fullIData(oldp+14,(vlSelfRef.tb_cache__DOT__dut__DOT__write_data),32);
    bufp->fullBit(oldp+15,(vlSelfRef.tb_cache__DOT__dut__DOT__read_enable));
    bufp->fullBit(oldp+16,(vlSelfRef.tb_cache__DOT__dut__DOT__write_enable));
    bufp->fullCData(oldp+17,(vlSelfRef.tb_cache__DOT__dut__DOT__byte_enable),4);
    bufp->fullIData(oldp+18,(vlSelfRef.tb_cache__DOT__dut__DOT__read_data),32);
    bufp->fullBit(oldp+19,(vlSelfRef.tb_cache__DOT__dut__DOT__cache_stall));
    Vtop___024root__trace_full_dtype____0(vlSelf, bufp, 20, vlSelfRef.tb_cache__DOT__dut__DOT__cache_data);
    bufp->fullIData(oldp+148,(vlSelfRef.tb_cache__DOT__dut__DOT__cache_block_tag),23);
    bufp->fullBit(oldp+149,(vlSelfRef.tb_cache__DOT__dut__DOT__cache_valid));
    bufp->fullBit(oldp+150,(vlSelfRef.tb_cache__DOT__dut__DOT__next_cache_valid));
    bufp->fullBit(oldp+151,(vlSelfRef.tb_cache__DOT__dut__DOT__cache_dirty));
    bufp->fullBit(oldp+152,(vlSelfRef.tb_cache__DOT__dut__DOT__next_cache_dirty));
    bufp->fullCData(oldp+153,(vlSelfRef.tb_cache__DOT__dut__DOT__set_ptr),7);
    bufp->fullCData(oldp+154,(vlSelfRef.tb_cache__DOT__dut__DOT__next_set_ptr),7);
    bufp->fullBit(oldp+155,(vlSelfRef.tb_cache__DOT__dut__DOT__actual_write_enable));
    bufp->fullIData(oldp+156,(vlSelfRef.tb_cache__DOT__dut__DOT__req_block_tag),23);
    bufp->fullCData(oldp+157,(vlSelfRef.tb_cache__DOT__dut__DOT__req_index),7);
    bufp->fullIData(oldp+158,(vlSelfRef.tb_cache__DOT__dut__DOT__byte_enable_mask),32);
    bufp->fullBit(oldp+159,(vlSelfRef.tb_cache__DOT__dut__DOT__hit));
    bufp->fullCData(oldp+160,(vlSelfRef.tb_cache__DOT__dut__DOT__state),3);
    bufp->fullCData(oldp+161,(vlSelfRef.tb_cache__DOT__dut__DOT__next_state),3);
    bufp->fullBit(oldp+162,(vlSymsp->TOP__tb_cache__DOT__axi.aclk));
    bufp->fullBit(oldp+163,(vlSymsp->TOP__tb_cache__DOT__axi.aresetn));
    bufp->fullCData(oldp+164,(vlSymsp->TOP__tb_cache__DOT__axi.awid),4);
    bufp->fullIData(oldp+165,(vlSymsp->TOP__tb_cache__DOT__axi.awaddr),32);
    bufp->fullCData(oldp+166,(vlSymsp->TOP__tb_cache__DOT__axi.awlen),8);
    bufp->fullCData(oldp+167,(vlSymsp->TOP__tb_cache__DOT__axi.awsize),3);
    bufp->fullCData(oldp+168,(vlSymsp->TOP__tb_cache__DOT__axi.awburst),2);
    bufp->fullCData(oldp+169,(vlSymsp->TOP__tb_cache__DOT__axi.awqos),4);
    bufp->fullCData(oldp+170,(vlSymsp->TOP__tb_cache__DOT__axi.awlock),2);
    bufp->fullBit(oldp+171,(vlSymsp->TOP__tb_cache__DOT__axi.awvalid));
    bufp->fullBit(oldp+172,(vlSymsp->TOP__tb_cache__DOT__axi.awready));
    bufp->fullCData(oldp+173,(vlSymsp->TOP__tb_cache__DOT__axi.wstrb),4);
    bufp->fullBit(oldp+174,(vlSymsp->TOP__tb_cache__DOT__axi.wlast));
    bufp->fullIData(oldp+175,(vlSymsp->TOP__tb_cache__DOT__axi.wdata),32);
    bufp->fullBit(oldp+176,(vlSymsp->TOP__tb_cache__DOT__axi.wvalid));
    bufp->fullBit(oldp+177,(vlSymsp->TOP__tb_cache__DOT__axi.wready));
    bufp->fullCData(oldp+178,(vlSymsp->TOP__tb_cache__DOT__axi.bid),4);
    bufp->fullCData(oldp+179,(vlSymsp->TOP__tb_cache__DOT__axi.bresp),2);
    bufp->fullBit(oldp+180,(vlSymsp->TOP__tb_cache__DOT__axi.bvalid));
    bufp->fullBit(oldp+181,(vlSymsp->TOP__tb_cache__DOT__axi.bready));
    bufp->fullCData(oldp+182,(vlSymsp->TOP__tb_cache__DOT__axi.arid),4);
    bufp->fullIData(oldp+183,(vlSymsp->TOP__tb_cache__DOT__axi.araddr),32);
    bufp->fullCData(oldp+184,(vlSymsp->TOP__tb_cache__DOT__axi.arlen),8);
    bufp->fullCData(oldp+185,(vlSymsp->TOP__tb_cache__DOT__axi.arsize),3);
    bufp->fullCData(oldp+186,(vlSymsp->TOP__tb_cache__DOT__axi.arburst),2);
    bufp->fullCData(oldp+187,(vlSymsp->TOP__tb_cache__DOT__axi.arqos),4);
    bufp->fullCData(oldp+188,(vlSymsp->TOP__tb_cache__DOT__axi.arlock),2);
    bufp->fullBit(oldp+189,(vlSymsp->TOP__tb_cache__DOT__axi.arvalid));
    bufp->fullBit(oldp+190,(vlSymsp->TOP__tb_cache__DOT__axi.arready));
    bufp->fullCData(oldp+191,(vlSymsp->TOP__tb_cache__DOT__axi.rid),4);
    bufp->fullIData(oldp+192,(vlSymsp->TOP__tb_cache__DOT__axi.rdata),32);
    bufp->fullCData(oldp+193,(vlSymsp->TOP__tb_cache__DOT__axi.rresp),2);
    bufp->fullBit(oldp+194,(vlSymsp->TOP__tb_cache__DOT__axi.rlast));
    bufp->fullBit(oldp+195,(vlSymsp->TOP__tb_cache__DOT__axi.rvalid));
    bufp->fullBit(oldp+196,(vlSymsp->TOP__tb_cache__DOT__axi.rready));
}

VL_ATTR_COLD void Vtop___024root__trace_full_dtype____0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlWide<128>/*4095:0*/& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_dtype____0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullIData(oldp+0,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000fe0U, 32)),32);
    bufp->fullIData(oldp+1,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000fc0U, 32)),32);
    bufp->fullIData(oldp+2,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000fa0U, 32)),32);
    bufp->fullIData(oldp+3,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000f80U, 32)),32);
    bufp->fullIData(oldp+4,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000f60U, 32)),32);
    bufp->fullIData(oldp+5,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000f40U, 32)),32);
    bufp->fullIData(oldp+6,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000f20U, 32)),32);
    bufp->fullIData(oldp+7,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000f00U, 32)),32);
    bufp->fullIData(oldp+8,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000ee0U, 32)),32);
    bufp->fullIData(oldp+9,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000ec0U, 32)),32);
    bufp->fullIData(oldp+10,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000ea0U, 32)),32);
    bufp->fullIData(oldp+11,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000e80U, 32)),32);
    bufp->fullIData(oldp+12,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000e60U, 32)),32);
    bufp->fullIData(oldp+13,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000e40U, 32)),32);
    bufp->fullIData(oldp+14,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000e20U, 32)),32);
    bufp->fullIData(oldp+15,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000e00U, 32)),32);
    bufp->fullIData(oldp+16,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000de0U, 32)),32);
    bufp->fullIData(oldp+17,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000dc0U, 32)),32);
    bufp->fullIData(oldp+18,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000da0U, 32)),32);
    bufp->fullIData(oldp+19,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000d80U, 32)),32);
    bufp->fullIData(oldp+20,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000d60U, 32)),32);
    bufp->fullIData(oldp+21,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000d40U, 32)),32);
    bufp->fullIData(oldp+22,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000d20U, 32)),32);
    bufp->fullIData(oldp+23,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000d00U, 32)),32);
    bufp->fullIData(oldp+24,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000ce0U, 32)),32);
    bufp->fullIData(oldp+25,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000cc0U, 32)),32);
    bufp->fullIData(oldp+26,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000ca0U, 32)),32);
    bufp->fullIData(oldp+27,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000c80U, 32)),32);
    bufp->fullIData(oldp+28,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000c60U, 32)),32);
    bufp->fullIData(oldp+29,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000c40U, 32)),32);
    bufp->fullIData(oldp+30,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000c20U, 32)),32);
    bufp->fullIData(oldp+31,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000c00U, 32)),32);
    bufp->fullIData(oldp+32,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000be0U, 32)),32);
    bufp->fullIData(oldp+33,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000bc0U, 32)),32);
    bufp->fullIData(oldp+34,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000ba0U, 32)),32);
    bufp->fullIData(oldp+35,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000b80U, 32)),32);
    bufp->fullIData(oldp+36,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000b60U, 32)),32);
    bufp->fullIData(oldp+37,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000b40U, 32)),32);
    bufp->fullIData(oldp+38,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000b20U, 32)),32);
    bufp->fullIData(oldp+39,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000b00U, 32)),32);
    bufp->fullIData(oldp+40,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000ae0U, 32)),32);
    bufp->fullIData(oldp+41,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000ac0U, 32)),32);
    bufp->fullIData(oldp+42,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000aa0U, 32)),32);
    bufp->fullIData(oldp+43,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000a80U, 32)),32);
    bufp->fullIData(oldp+44,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000a60U, 32)),32);
    bufp->fullIData(oldp+45,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000a40U, 32)),32);
    bufp->fullIData(oldp+46,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000a20U, 32)),32);
    bufp->fullIData(oldp+47,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000a00U, 32)),32);
    bufp->fullIData(oldp+48,(VL_SEL_IWII(4096, __VdtypeVar, 0x000009e0U, 32)),32);
    bufp->fullIData(oldp+49,(VL_SEL_IWII(4096, __VdtypeVar, 0x000009c0U, 32)),32);
    bufp->fullIData(oldp+50,(VL_SEL_IWII(4096, __VdtypeVar, 0x000009a0U, 32)),32);
    bufp->fullIData(oldp+51,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000980U, 32)),32);
    bufp->fullIData(oldp+52,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000960U, 32)),32);
    bufp->fullIData(oldp+53,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000940U, 32)),32);
    bufp->fullIData(oldp+54,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000920U, 32)),32);
    bufp->fullIData(oldp+55,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000900U, 32)),32);
    bufp->fullIData(oldp+56,(VL_SEL_IWII(4096, __VdtypeVar, 0x000008e0U, 32)),32);
    bufp->fullIData(oldp+57,(VL_SEL_IWII(4096, __VdtypeVar, 0x000008c0U, 32)),32);
    bufp->fullIData(oldp+58,(VL_SEL_IWII(4096, __VdtypeVar, 0x000008a0U, 32)),32);
    bufp->fullIData(oldp+59,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000880U, 32)),32);
    bufp->fullIData(oldp+60,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000860U, 32)),32);
    bufp->fullIData(oldp+61,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000840U, 32)),32);
    bufp->fullIData(oldp+62,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000820U, 32)),32);
    bufp->fullIData(oldp+63,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000800U, 32)),32);
    bufp->fullIData(oldp+64,(VL_SEL_IWII(4096, __VdtypeVar, 0x000007e0U, 32)),32);
    bufp->fullIData(oldp+65,(VL_SEL_IWII(4096, __VdtypeVar, 0x000007c0U, 32)),32);
    bufp->fullIData(oldp+66,(VL_SEL_IWII(4096, __VdtypeVar, 0x000007a0U, 32)),32);
    bufp->fullIData(oldp+67,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000780U, 32)),32);
    bufp->fullIData(oldp+68,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000760U, 32)),32);
    bufp->fullIData(oldp+69,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000740U, 32)),32);
    bufp->fullIData(oldp+70,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000720U, 32)),32);
    bufp->fullIData(oldp+71,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000700U, 32)),32);
    bufp->fullIData(oldp+72,(VL_SEL_IWII(4096, __VdtypeVar, 0x000006e0U, 32)),32);
    bufp->fullIData(oldp+73,(VL_SEL_IWII(4096, __VdtypeVar, 0x000006c0U, 32)),32);
    bufp->fullIData(oldp+74,(VL_SEL_IWII(4096, __VdtypeVar, 0x000006a0U, 32)),32);
    bufp->fullIData(oldp+75,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000680U, 32)),32);
    bufp->fullIData(oldp+76,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000660U, 32)),32);
    bufp->fullIData(oldp+77,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000640U, 32)),32);
    bufp->fullIData(oldp+78,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000620U, 32)),32);
    bufp->fullIData(oldp+79,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000600U, 32)),32);
    bufp->fullIData(oldp+80,(VL_SEL_IWII(4096, __VdtypeVar, 0x000005e0U, 32)),32);
    bufp->fullIData(oldp+81,(VL_SEL_IWII(4096, __VdtypeVar, 0x000005c0U, 32)),32);
    bufp->fullIData(oldp+82,(VL_SEL_IWII(4096, __VdtypeVar, 0x000005a0U, 32)),32);
    bufp->fullIData(oldp+83,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000580U, 32)),32);
    bufp->fullIData(oldp+84,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000560U, 32)),32);
    bufp->fullIData(oldp+85,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000540U, 32)),32);
    bufp->fullIData(oldp+86,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000520U, 32)),32);
    bufp->fullIData(oldp+87,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000500U, 32)),32);
    bufp->fullIData(oldp+88,(VL_SEL_IWII(4096, __VdtypeVar, 0x000004e0U, 32)),32);
    bufp->fullIData(oldp+89,(VL_SEL_IWII(4096, __VdtypeVar, 0x000004c0U, 32)),32);
    bufp->fullIData(oldp+90,(VL_SEL_IWII(4096, __VdtypeVar, 0x000004a0U, 32)),32);
    bufp->fullIData(oldp+91,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000480U, 32)),32);
    bufp->fullIData(oldp+92,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000460U, 32)),32);
    bufp->fullIData(oldp+93,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000440U, 32)),32);
    bufp->fullIData(oldp+94,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000420U, 32)),32);
    bufp->fullIData(oldp+95,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000400U, 32)),32);
    bufp->fullIData(oldp+96,(VL_SEL_IWII(4096, __VdtypeVar, 0x000003e0U, 32)),32);
    bufp->fullIData(oldp+97,(VL_SEL_IWII(4096, __VdtypeVar, 0x000003c0U, 32)),32);
    bufp->fullIData(oldp+98,(VL_SEL_IWII(4096, __VdtypeVar, 0x000003a0U, 32)),32);
    bufp->fullIData(oldp+99,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000380U, 32)),32);
    bufp->fullIData(oldp+100,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000360U, 32)),32);
    bufp->fullIData(oldp+101,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000340U, 32)),32);
    bufp->fullIData(oldp+102,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000320U, 32)),32);
    bufp->fullIData(oldp+103,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000300U, 32)),32);
    bufp->fullIData(oldp+104,(VL_SEL_IWII(4096, __VdtypeVar, 0x000002e0U, 32)),32);
    bufp->fullIData(oldp+105,(VL_SEL_IWII(4096, __VdtypeVar, 0x000002c0U, 32)),32);
    bufp->fullIData(oldp+106,(VL_SEL_IWII(4096, __VdtypeVar, 0x000002a0U, 32)),32);
    bufp->fullIData(oldp+107,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000280U, 32)),32);
    bufp->fullIData(oldp+108,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000260U, 32)),32);
    bufp->fullIData(oldp+109,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000240U, 32)),32);
    bufp->fullIData(oldp+110,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000220U, 32)),32);
    bufp->fullIData(oldp+111,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000200U, 32)),32);
    bufp->fullIData(oldp+112,(VL_SEL_IWII(4096, __VdtypeVar, 0x000001e0U, 32)),32);
    bufp->fullIData(oldp+113,(VL_SEL_IWII(4096, __VdtypeVar, 0x000001c0U, 32)),32);
    bufp->fullIData(oldp+114,(VL_SEL_IWII(4096, __VdtypeVar, 0x000001a0U, 32)),32);
    bufp->fullIData(oldp+115,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000180U, 32)),32);
    bufp->fullIData(oldp+116,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000160U, 32)),32);
    bufp->fullIData(oldp+117,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000140U, 32)),32);
    bufp->fullIData(oldp+118,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000120U, 32)),32);
    bufp->fullIData(oldp+119,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000100U, 32)),32);
    bufp->fullIData(oldp+120,(VL_SEL_IWII(4096, __VdtypeVar, 0x000000e0U, 32)),32);
    bufp->fullIData(oldp+121,(VL_SEL_IWII(4096, __VdtypeVar, 0x000000c0U, 32)),32);
    bufp->fullIData(oldp+122,(VL_SEL_IWII(4096, __VdtypeVar, 0x000000a0U, 32)),32);
    bufp->fullIData(oldp+123,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000080U, 32)),32);
    bufp->fullIData(oldp+124,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000060U, 32)),32);
    bufp->fullIData(oldp+125,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000040U, 32)),32);
    bufp->fullIData(oldp+126,(VL_SEL_IWII(4096, __VdtypeVar, 0x00000020U, 32)),32);
    bufp->fullIData(oldp+127,(VL_SEL_IWII(4096, __VdtypeVar, 0U, 32)),32);
}
