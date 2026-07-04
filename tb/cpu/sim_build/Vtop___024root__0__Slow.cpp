// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__cpu__DOT__alu_inst__DOT__alu_control__0 
        = vlSelfRef.cpu__DOT__alu_inst__DOT__alu_control;
    vlSelfRef.__Vtrigprevexpr___TOP__cpu__DOT__alu_inst__DOT__alu_control__1 
        = vlSelfRef.cpu__DOT__alu_inst__DOT__alu_control;
    vlSelfRef.__Vtrigprevexpr___TOP__cpu__DOT__clk__0 
        = vlSelfRef.cpu__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__cpu__DOT__regfile__DOT__clk__0 
        = vlSelfRef.cpu__DOT__regfile__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__cpu__DOT__data_memory__DOT__clk__0 
        = vlSelfRef.cpu__DOT__data_memory__DOT__clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cpu__DOT__instruction_memory__DOT__write_data = 0U;
    vlSelfRef.cpu__DOT__instruction_memory__DOT__write_enable = 0U;
    vlSelfRef.cpu__DOT__instruction_memory__DOT__rst_n = 1U;
    VL_READMEM_N(true, 32, 64, 0, "./test_imemory.hex"s
                 ,  &(vlSelfRef.cpu__DOT__instruction_memory__DOT__mem)
                 , 0, ~0ULL);
    vlSelfRef.cpu__DOT__control__DOT__func7 = 0U;
    vlSelfRef.cpu__DOT__data_memory__DOT__rst_n = 1U;
    VL_READMEM_N(true, 32, 64, 0, "./test_dmemory.hex"s
                 ,  &(vlSelfRef.cpu__DOT__data_memory__DOT__mem)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
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
            VL_FATAL_MT("/Users/luokai/Documents/GitHub/RISC-V-project/src/cpu.sv", 1, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
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
    vlSelfRef.__VstlTriggered[1U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[1U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlTriggered[0U] = (QData)((IData)(
                                                    ((IData)(vlSelfRef.cpu__DOT__alu_inst__DOT__alu_control) 
                                                     != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cpu__DOT__alu_inst__DOT__alu_control__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__cpu__DOT__alu_inst__DOT__alu_control__0 
        = vlSelfRef.cpu__DOT__alu_inst__DOT__alu_control;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VstlDidInit)))))) {
        vlSelfRef.__VstlDidInit = 1U;
        vlSelfRef.__VstlTriggered[0U] = (1ULL | vlSelfRef.__VstlTriggered[0U]);
    }
}

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([hybrid] cpu.alu_inst.alu_control)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 2> &in) {
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
    } while ((2U > n));
    return (0U);
}

extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h8a469a53_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vtop__ConstPool__TABLE_h8a33da70_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h87d4bd01_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vtop__ConstPool__TABLE_h4e1b20c3_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_he8b51704_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_ha0edcdc0_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_hd9357a73_0;

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.cpu__DOT__rst_n = vlSelfRef.rst_n;
    vlSelfRef.cpu__DOT__clk = vlSelfRef.clk;
    vlSelfRef.cpu__DOT__instruction_memory__DOT__address 
        = vlSelfRef.cpu__DOT__pc;
    vlSelfRef.cpu__DOT__regfile__DOT__rst_n = vlSelfRef.cpu__DOT__rst_n;
    vlSelfRef.cpu__DOT__instruction_memory__DOT__clk 
        = vlSelfRef.cpu__DOT__clk;
    vlSelfRef.cpu__DOT__regfile__DOT__clk = vlSelfRef.cpu__DOT__clk;
    vlSelfRef.cpu__DOT__data_memory__DOT__clk = vlSelfRef.cpu__DOT__clk;
    vlSelfRef.cpu__DOT__instruction_memory__DOT__read_data 
        = vlSelfRef.cpu__DOT__instruction_memory__DOT__mem
        [(0x0000003fU & (vlSelfRef.cpu__DOT__instruction_memory__DOT__address 
                         >> 2U))];
    vlSelfRef.cpu__DOT__instruction = vlSelfRef.cpu__DOT__instruction_memory__DOT__read_data;
    vlSelfRef.cpu__DOT__dest_reg = (0x0000001fU & (vlSelfRef.cpu__DOT__instruction 
                                                   >> 7U));
    vlSelfRef.cpu__DOT__f3 = (7U & (vlSelfRef.cpu__DOT__instruction 
                                    >> 0x0000000cU));
    vlSelfRef.cpu__DOT__source_reg1 = (0x0000001fU 
                                       & (vlSelfRef.cpu__DOT__instruction 
                                          >> 0x0000000fU));
    vlSelfRef.cpu__DOT__source_reg2 = (0x0000001fU 
                                       & (vlSelfRef.cpu__DOT__instruction 
                                          >> 0x00000014U));
    vlSelfRef.cpu__DOT__raw_imm = (vlSelfRef.cpu__DOT__instruction 
                                   >> 7U);
    vlSelfRef.cpu__DOT__op = (0x0000007fU & vlSelfRef.cpu__DOT__instruction);
    vlSelfRef.cpu__DOT__regfile__DOT__address3 = vlSelfRef.cpu__DOT__dest_reg;
    vlSelfRef.cpu__DOT__control__DOT__func3 = vlSelfRef.cpu__DOT__f3;
    vlSelfRef.cpu__DOT__regfile__DOT__address1 = vlSelfRef.cpu__DOT__source_reg1;
    vlSelfRef.cpu__DOT__regfile__DOT__address2 = vlSelfRef.cpu__DOT__source_reg2;
    vlSelfRef.cpu__DOT__sign_extender__DOT__raw_src 
        = vlSelfRef.cpu__DOT__raw_imm;
    vlSelfRef.cpu__DOT__control__DOT__op = vlSelfRef.cpu__DOT__op;
    vlSelfRef.cpu__DOT__regfile__DOT__read_data1 = vlSelfRef.cpu__DOT__regfile__DOT__registers
        [vlSelfRef.cpu__DOT__regfile__DOT__address1];
    vlSelfRef.cpu__DOT__regfile__DOT__read_data2 = vlSelfRef.cpu__DOT__regfile__DOT__registers
        [vlSelfRef.cpu__DOT__regfile__DOT__address2];
    __Vtableidx1 = vlSelfRef.cpu__DOT__control__DOT__op;
    vlSelfRef.cpu__DOT__control__DOT__reg_write = Vtop__ConstPool__TABLE_h8a469a53_0
        [__Vtableidx1];
    vlSelfRef.cpu__DOT__control__DOT__imm_source = Vtop__ConstPool__TABLE_h8a33da70_0
        [__Vtableidx1];
    vlSelfRef.cpu__DOT__control__DOT__mem_write = Vtop__ConstPool__TABLE_h87d4bd01_0
        [__Vtableidx1];
    vlSelfRef.cpu__DOT__control__DOT__alu_op = Vtop__ConstPool__TABLE_h4e1b20c3_0
        [__Vtableidx1];
    vlSelfRef.cpu__DOT__control__DOT__alu_source = Vtop__ConstPool__TABLE_he8b51704_0
        [__Vtableidx1];
    vlSelfRef.cpu__DOT__control__DOT__write_back_source 
        = Vtop__ConstPool__TABLE_ha0edcdc0_0[__Vtableidx1];
    vlSelfRef.cpu__DOT__control__DOT__branch = Vtop__ConstPool__TABLE_hd9357a73_0
        [__Vtableidx1];
    vlSelfRef.cpu__DOT__read_reg1 = vlSelfRef.cpu__DOT__regfile__DOT__read_data1;
    vlSelfRef.cpu__DOT__read_reg2 = vlSelfRef.cpu__DOT__regfile__DOT__read_data2;
    vlSelfRef.cpu__DOT__reg_write = vlSelfRef.cpu__DOT__control__DOT__reg_write;
    vlSelfRef.cpu__DOT__mem_write = vlSelfRef.cpu__DOT__control__DOT__mem_write;
    vlSelfRef.cpu__DOT__write_back_source = vlSelfRef.cpu__DOT__control__DOT__write_back_source;
    vlSelfRef.cpu__DOT__alu_source = vlSelfRef.cpu__DOT__control__DOT__alu_source;
    vlSelfRef.cpu__DOT__imm_source = vlSelfRef.cpu__DOT__control__DOT__imm_source;
    vlSelfRef.cpu__DOT__alu_inst__DOT__src1 = vlSelfRef.cpu__DOT__read_reg1;
    vlSelfRef.cpu__DOT__data_memory__DOT__write_data 
        = vlSelfRef.cpu__DOT__read_reg2;
    vlSelfRef.cpu__DOT__regfile__DOT__write_enable 
        = vlSelfRef.cpu__DOT__reg_write;
    vlSelfRef.cpu__DOT__data_memory__DOT__write_enable 
        = vlSelfRef.cpu__DOT__mem_write;
    vlSelfRef.cpu__DOT__sign_extender__DOT__imm_source 
        = vlSelfRef.cpu__DOT__imm_source;
    vlSelfRef.cpu__DOT__sign_extender__DOT__gathered_imm 
        = (0x00000fffU & ((0U == (IData)(vlSelfRef.cpu__DOT__sign_extender__DOT__imm_source))
                           ? (vlSelfRef.cpu__DOT__sign_extender__DOT__raw_src 
                              >> 0x0000000dU) : ((1U 
                                                  == (IData)(vlSelfRef.cpu__DOT__sign_extender__DOT__imm_source))
                                                  ? 
                                                 ((0x00000fe0U 
                                                   & (vlSelfRef.cpu__DOT__sign_extender__DOT__raw_src 
                                                      >> 0x0000000dU)) 
                                                  | (0x0000001fU 
                                                     & vlSelfRef.cpu__DOT__sign_extender__DOT__raw_src))
                                                  : 
                                                 (((0x00000800U 
                                                    & (vlSelfRef.cpu__DOT__sign_extender__DOT__raw_src 
                                                       << 0x0000000bU)) 
                                                   | ((0x000007e0U 
                                                       & (vlSelfRef.cpu__DOT__sign_extender__DOT__raw_src 
                                                          >> 0x0000000dU)) 
                                                      | (0x0000001eU 
                                                         & vlSelfRef.cpu__DOT__sign_extender__DOT__raw_src))) 
                                                  & (- (IData)(
                                                               (2U 
                                                                == (IData)(vlSelfRef.cpu__DOT__sign_extender__DOT__imm_source))))))));
    vlSelfRef.cpu__DOT__sign_extender__DOT__immediate 
        = ((((2U == (IData)(vlSelfRef.cpu__DOT__sign_extender__DOT__imm_source))
              ? (- (IData)((1U & (vlSelfRef.cpu__DOT__sign_extender__DOT__raw_src 
                                  >> 0x00000018U))))
              : (- (IData)((1U & ((IData)(vlSelfRef.cpu__DOT__sign_extender__DOT__gathered_imm) 
                                  >> 0x0000000bU))))) 
            << 0x0000000cU) | (IData)(vlSelfRef.cpu__DOT__sign_extender__DOT__gathered_imm));
    vlSelfRef.cpu__DOT__immediate = vlSelfRef.cpu__DOT__sign_extender__DOT__immediate;
    vlSelfRef.cpu__DOT__alu_src2 = ((IData)(vlSelfRef.cpu__DOT__alu_source)
                                     ? vlSelfRef.cpu__DOT__immediate
                                     : vlSelfRef.cpu__DOT__read_reg2);
    vlSelfRef.cpu__DOT__alu_inst__DOT__src2 = vlSelfRef.cpu__DOT__alu_src2;
}

void Vtop___024root___ico_comb__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[1U])) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & (vlSelfRef.__VstlTriggered[1U] | vlSelfRef.__VstlTriggered[0U]))) {
        Vtop___024root___ico_comb__TOP__0(vlSelf);
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

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([hybrid] cpu.alu_inst.alu_control)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'ico' trigger - first iteration\n");
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
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([hybrid] cpu.alu_inst.alu_control)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge cpu.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge cpu.regfile.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(posedge cpu.data_memory.clk)\n");
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
    vlSelf->cpu__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5456728620559131056ull);
    vlSelf->cpu__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12949139165289987104ull);
    vlSelf->cpu__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12979896101630030509ull);
    vlSelf->cpu__DOT__pc_next = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11401018961025754907ull);
    vlSelf->cpu__DOT__instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3676520396987702001ull);
    vlSelf->cpu__DOT__op = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12508572871176283413ull);
    vlSelf->cpu__DOT__f3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 596015922531462669ull);
    vlSelf->cpu__DOT__alu_zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17161198845646111129ull);
    vlSelf->cpu__DOT__alu_control = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2478348765490579174ull);
    vlSelf->cpu__DOT__imm_source = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4586295343091075808ull);
    vlSelf->cpu__DOT__reg_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15999734060210743814ull);
    vlSelf->cpu__DOT__mem_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4199765347900879115ull);
    vlSelf->cpu__DOT__alu_source = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6534914121567284302ull);
    vlSelf->cpu__DOT__write_back_source = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11069135130404140919ull);
    vlSelf->cpu__DOT__pc_source = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16370498713040622867ull);
    vlSelf->cpu__DOT__source_reg1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14035701915223311449ull);
    vlSelf->cpu__DOT__source_reg2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4380140507199591624ull);
    vlSelf->cpu__DOT__dest_reg = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17360345143593915006ull);
    vlSelf->cpu__DOT__read_reg1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1524000216712112607ull);
    vlSelf->cpu__DOT__read_reg2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12531379444480071751ull);
    vlSelf->cpu__DOT__write_back_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7679111009518496669ull);
    vlSelf->cpu__DOT__raw_imm = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 17663876785484434241ull);
    vlSelf->cpu__DOT__immediate = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7657775539254847072ull);
    vlSelf->cpu__DOT__alu_src2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8284561064640361552ull);
    vlSelf->cpu__DOT__alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12522730548817195188ull);
    vlSelf->cpu__DOT__mem_read = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7262268092522396926ull);
    vlSelf->cpu__DOT__instruction_memory__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14625368131609872853ull);
    vlSelf->cpu__DOT__instruction_memory__DOT__address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13860628555311754532ull);
    vlSelf->cpu__DOT__instruction_memory__DOT__write_data = 0U;
    ;
    vlSelf->cpu__DOT__instruction_memory__DOT__write_enable = 0U;
    ;
    vlSelf->cpu__DOT__instruction_memory__DOT__rst_n = 1U;
    ;
    vlSelf->cpu__DOT__instruction_memory__DOT__read_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5435733009246666832ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->cpu__DOT__instruction_memory__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7404162715100081064ull);
    }
    vlSelf->cpu__DOT__instruction_memory__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->cpu__DOT__control__DOT__op = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7302807574369249138ull);
    vlSelf->cpu__DOT__control__DOT__func3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2316272343575044244ull);
    vlSelf->cpu__DOT__control__DOT__func7 = 0U;
    ;
    vlSelf->cpu__DOT__control__DOT__alu_zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12960809917450669375ull);
    vlSelf->cpu__DOT__control__DOT__alu_control = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17104625373501754913ull);
    vlSelf->cpu__DOT__control__DOT__imm_source = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3366632438422249949ull);
    vlSelf->cpu__DOT__control__DOT__reg_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14470931555046759968ull);
    vlSelf->cpu__DOT__control__DOT__mem_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12707924388263917184ull);
    vlSelf->cpu__DOT__control__DOT__alu_source = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8019503258891436947ull);
    vlSelf->cpu__DOT__control__DOT__write_back_source = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11654673761850858665ull);
    vlSelf->cpu__DOT__control__DOT__pc_source = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9657399003832573845ull);
    vlSelf->cpu__DOT__control__DOT__alu_op = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7706721963186687023ull);
    vlSelf->cpu__DOT__control__DOT__branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2743207168528226436ull);
    vlSelf->cpu__DOT__regfile__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6418748850776135729ull);
    vlSelf->cpu__DOT__regfile__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15713003529679336938ull);
    vlSelf->cpu__DOT__regfile__DOT__address1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14750483544627185196ull);
    vlSelf->cpu__DOT__regfile__DOT__address2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8597712201974368323ull);
    vlSelf->cpu__DOT__regfile__DOT__read_data1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10013646264735073798ull);
    vlSelf->cpu__DOT__regfile__DOT__read_data2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4968804507512006539ull);
    vlSelf->cpu__DOT__regfile__DOT__write_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9988947362695560081ull);
    vlSelf->cpu__DOT__regfile__DOT__write_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 544213930637243827ull);
    vlSelf->cpu__DOT__regfile__DOT__address3 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 954105450285310959ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->cpu__DOT__regfile__DOT__registers[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15800446414295255430ull);
    }
    vlSelf->cpu__DOT__regfile__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->cpu__DOT__sign_extender__DOT__raw_src = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 3508015887788509646ull);
    vlSelf->cpu__DOT__sign_extender__DOT__imm_source = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3458098460170252871ull);
    vlSelf->cpu__DOT__sign_extender__DOT__immediate = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8774878167709989639ull);
    vlSelf->cpu__DOT__sign_extender__DOT__gathered_imm = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 2156041809648887449ull);
    vlSelf->cpu__DOT__alu_inst__DOT__alu_control = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11209935511910668533ull);
    vlSelf->cpu__DOT__alu_inst__DOT__src1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1464569046335488162ull);
    vlSelf->cpu__DOT__alu_inst__DOT__src2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9682957663792374465ull);
    vlSelf->cpu__DOT__alu_inst__DOT__alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3987035607850862406ull);
    vlSelf->cpu__DOT__alu_inst__DOT__zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14474213535884226629ull);
    vlSelf->cpu__DOT__data_memory__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11098813462957875079ull);
    vlSelf->cpu__DOT__data_memory__DOT__address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2410208994358422173ull);
    vlSelf->cpu__DOT__data_memory__DOT__write_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2701052512181033886ull);
    vlSelf->cpu__DOT__data_memory__DOT__write_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1215334658594043730ull);
    vlSelf->cpu__DOT__data_memory__DOT__rst_n = 1U;
    ;
    vlSelf->cpu__DOT__data_memory__DOT__read_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13538062894372254119ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->cpu__DOT__data_memory__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16394125434072290796ull);
    }
    vlSelf->cpu__DOT__data_memory__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__cpu__DOT__alu_inst__DOT__alu_control__0 = 0;
    vlSelf->__VstlDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    vlSelf->__VicoDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__cpu__DOT__alu_inst__DOT__alu_control__1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__cpu__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__cpu__DOT__regfile__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__cpu__DOT__data_memory__DOT__clk__0 = 0;
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
