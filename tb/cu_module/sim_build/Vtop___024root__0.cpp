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

extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h039306e2_0;

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.control__DOT__shamt = vlSelfRef.shamt;
    vlSelfRef.control__DOT__system_imm = vlSelfRef.system_imm;
    vlSelfRef.control__DOT__func7 = vlSelfRef.func7;
    vlSelfRef.control__DOT__alu_zero = vlSelfRef.alu_zero;
    vlSelfRef.control__DOT__alu_last_bit = vlSelfRef.alu_last_bit;
    vlSelfRef.control__DOT__alu_unsigned_less = vlSelfRef.alu_unsigned_less;
    vlSelfRef.control__DOT__func3 = vlSelfRef.func3;
    vlSelfRef.control__DOT__op = vlSelfRef.op;
    vlSelfRef.control__DOT__imm_source = 0U;
    vlSelfRef.control__DOT__write_back_source = 0U;
    vlSelfRef.control__DOT__alu_source = 0U;
    vlSelfRef.control__DOT__second_add_source = 0U;
    vlSelfRef.control__DOT__mem_read = 0U;
    vlSelfRef.control__DOT__mem_write = 0U;
    vlSelfRef.control__DOT__fence_i = 0U;
    vlSelfRef.control__DOT__fence = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.control__DOT__op) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.control__DOT__op) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.control__DOT__op) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelfRef.control__DOT__op))) {
                    if ((4U & (IData)(vlSelfRef.control__DOT__op))) {
                        if ((2U & (IData)(vlSelfRef.control__DOT__op))) {
                            if ((1U & (IData)(vlSelfRef.control__DOT__op))) {
                                if ((0U != (IData)(vlSelfRef.control__DOT__func3))) {
                                    if ((1U == (IData)(vlSelfRef.control__DOT__func3))) {
                                        vlSelfRef.control__DOT__fence_i = 1U;
                                    }
                                }
                                if ((0U == (IData)(vlSelfRef.control__DOT__func3))) {
                                    vlSelfRef.control__DOT__fence = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.control__DOT__reg_write = 0U;
    vlSelfRef.control__DOT__trap_valid = 0U;
    vlSelfRef.control__DOT__trap_cause = 0U;
    vlSelfRef.control__DOT__jump = 0U;
    vlSelfRef.control__DOT__alu_op = 0U;
    vlSelfRef.control__DOT__branch = 0U;
    if ((0x00000040U & (IData)(vlSelfRef.control__DOT__op))) {
        if ((0x00000020U & (IData)(vlSelfRef.control__DOT__op))) {
            if ((0x00000010U & (IData)(vlSelfRef.control__DOT__op))) {
                if ((8U & (IData)(vlSelfRef.control__DOT__op))) {
                    vlSelfRef.control__DOT__imm_source = 0U;
                    vlSelfRef.control__DOT__mem_read = 0U;
                    vlSelfRef.control__DOT__mem_write = 0U;
                    vlSelfRef.control__DOT__reg_write = 0U;
                    vlSelfRef.control__DOT__alu_op = 0U;
                } else if ((4U & (IData)(vlSelfRef.control__DOT__op))) {
                    vlSelfRef.control__DOT__imm_source = 0U;
                    vlSelfRef.control__DOT__mem_read = 0U;
                    vlSelfRef.control__DOT__mem_write = 0U;
                    vlSelfRef.control__DOT__reg_write = 0U;
                    vlSelfRef.control__DOT__alu_op = 0U;
                } else if ((2U & (IData)(vlSelfRef.control__DOT__op))) {
                    if ((1U & (~ (IData)(vlSelfRef.control__DOT__op)))) {
                        vlSelfRef.control__DOT__imm_source = 0U;
                        vlSelfRef.control__DOT__mem_read = 0U;
                        vlSelfRef.control__DOT__mem_write = 0U;
                        vlSelfRef.control__DOT__reg_write = 0U;
                        vlSelfRef.control__DOT__alu_op = 0U;
                    }
                } else {
                    vlSelfRef.control__DOT__imm_source = 0U;
                    vlSelfRef.control__DOT__mem_read = 0U;
                    vlSelfRef.control__DOT__mem_write = 0U;
                    vlSelfRef.control__DOT__reg_write = 0U;
                    vlSelfRef.control__DOT__alu_op = 0U;
                }
                if ((1U & (~ ((IData)(vlSelfRef.control__DOT__op) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.control__DOT__op) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.control__DOT__op))) {
                            if ((1U & (IData)(vlSelfRef.control__DOT__op))) {
                                if (((0U == (IData)(vlSelfRef.control__DOT__func3)) 
                                     & (0U == (IData)(vlSelfRef.control__DOT__system_imm)))) {
                                    vlSelfRef.control__DOT__trap_valid = 1U;
                                    vlSelfRef.control__DOT__trap_cause = 0x0bU;
                                } else if (((0U == (IData)(vlSelfRef.control__DOT__func3)) 
                                            & (1U == (IData)(vlSelfRef.control__DOT__system_imm)))) {
                                    vlSelfRef.control__DOT__trap_valid = 1U;
                                    vlSelfRef.control__DOT__trap_cause = 3U;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((8U & (IData)(vlSelfRef.control__DOT__op))) {
                    if ((4U & (IData)(vlSelfRef.control__DOT__op))) {
                        if ((2U & (IData)(vlSelfRef.control__DOT__op))) {
                            if ((1U & (IData)(vlSelfRef.control__DOT__op))) {
                                vlSelfRef.control__DOT__imm_source = 3U;
                                if ((8U & (IData)(vlSelfRef.control__DOT__op))) {
                                    vlSelfRef.control__DOT__imm_source = 3U;
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelfRef.control__DOT__op) 
                                                   >> 3U)))) {
                                    vlSelfRef.control__DOT__imm_source = 0U;
                                }
                                vlSelfRef.control__DOT__reg_write = 1U;
                                if ((1U & (~ ((IData)(vlSelfRef.control__DOT__op) 
                                              >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.control__DOT__op) 
                                                  >> 3U)))) {
                                        if ((0U != (IData)(vlSelfRef.control__DOT__func3))) {
                                            vlSelfRef.control__DOT__reg_write = 0U;
                                        }
                                    }
                                }
                            } else {
                                vlSelfRef.control__DOT__imm_source = 0U;
                                vlSelfRef.control__DOT__reg_write = 0U;
                            }
                            if ((1U & (~ (IData)(vlSelfRef.control__DOT__op)))) {
                                vlSelfRef.control__DOT__alu_op = 0U;
                            }
                        } else {
                            vlSelfRef.control__DOT__imm_source = 0U;
                            vlSelfRef.control__DOT__reg_write = 0U;
                            vlSelfRef.control__DOT__alu_op = 0U;
                        }
                    } else {
                        vlSelfRef.control__DOT__imm_source = 0U;
                        vlSelfRef.control__DOT__reg_write = 0U;
                        vlSelfRef.control__DOT__alu_op = 0U;
                    }
                } else if ((4U & (IData)(vlSelfRef.control__DOT__op))) {
                    if ((2U & (IData)(vlSelfRef.control__DOT__op))) {
                        if ((1U & (IData)(vlSelfRef.control__DOT__op))) {
                            vlSelfRef.control__DOT__imm_source = 3U;
                            if ((8U & (IData)(vlSelfRef.control__DOT__op))) {
                                vlSelfRef.control__DOT__imm_source = 3U;
                            } else if ((1U & (~ ((IData)(vlSelfRef.control__DOT__op) 
                                                 >> 3U)))) {
                                vlSelfRef.control__DOT__imm_source = 0U;
                            }
                            vlSelfRef.control__DOT__reg_write = 1U;
                            if ((1U & (~ ((IData)(vlSelfRef.control__DOT__op) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.control__DOT__op) 
                                              >> 3U)))) {
                                    if ((0U != (IData)(vlSelfRef.control__DOT__func3))) {
                                        vlSelfRef.control__DOT__reg_write = 0U;
                                    }
                                }
                            }
                        } else {
                            vlSelfRef.control__DOT__imm_source = 0U;
                            vlSelfRef.control__DOT__reg_write = 0U;
                        }
                        if ((1U & (~ (IData)(vlSelfRef.control__DOT__op)))) {
                            vlSelfRef.control__DOT__alu_op = 0U;
                        }
                    } else {
                        vlSelfRef.control__DOT__imm_source = 0U;
                        vlSelfRef.control__DOT__reg_write = 0U;
                        vlSelfRef.control__DOT__alu_op = 0U;
                    }
                } else {
                    if ((2U & (IData)(vlSelfRef.control__DOT__op))) {
                        if ((1U & (IData)(vlSelfRef.control__DOT__op))) {
                            vlSelfRef.control__DOT__imm_source = 2U;
                            vlSelfRef.control__DOT__alu_op = 1U;
                        } else {
                            vlSelfRef.control__DOT__imm_source = 0U;
                            vlSelfRef.control__DOT__alu_op = 0U;
                        }
                    } else {
                        vlSelfRef.control__DOT__imm_source = 0U;
                        vlSelfRef.control__DOT__alu_op = 0U;
                    }
                    vlSelfRef.control__DOT__reg_write = 0U;
                }
                vlSelfRef.control__DOT__mem_read = 0U;
                vlSelfRef.control__DOT__mem_write = 0U;
            }
            if ((1U & (~ ((IData)(vlSelfRef.control__DOT__op) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelfRef.control__DOT__op))) {
                    if ((4U & (IData)(vlSelfRef.control__DOT__op))) {
                        if ((2U & (IData)(vlSelfRef.control__DOT__op))) {
                            if ((1U & (IData)(vlSelfRef.control__DOT__op))) {
                                vlSelfRef.control__DOT__write_back_source = 2U;
                                vlSelfRef.control__DOT__alu_source = 0U;
                                if ((8U & (IData)(vlSelfRef.control__DOT__op))) {
                                    vlSelfRef.control__DOT__second_add_source = 0U;
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelfRef.control__DOT__op) 
                                                   >> 3U)))) {
                                    vlSelfRef.control__DOT__second_add_source = 2U;
                                }
                                vlSelfRef.control__DOT__jump = 1U;
                                if ((1U & (~ ((IData)(vlSelfRef.control__DOT__op) 
                                              >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.control__DOT__op) 
                                                  >> 3U)))) {
                                        if ((0U != (IData)(vlSelfRef.control__DOT__func3))) {
                                            vlSelfRef.control__DOT__jump = 0U;
                                        }
                                    }
                                }
                                vlSelfRef.control__DOT__branch = 0U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlSelfRef.control__DOT__op))) {
                    if ((2U & (IData)(vlSelfRef.control__DOT__op))) {
                        if ((1U & (IData)(vlSelfRef.control__DOT__op))) {
                            vlSelfRef.control__DOT__write_back_source = 2U;
                            vlSelfRef.control__DOT__alu_source = 0U;
                            if ((8U & (IData)(vlSelfRef.control__DOT__op))) {
                                vlSelfRef.control__DOT__second_add_source = 0U;
                            } else if ((1U & (~ ((IData)(vlSelfRef.control__DOT__op) 
                                                 >> 3U)))) {
                                vlSelfRef.control__DOT__second_add_source = 2U;
                            }
                            vlSelfRef.control__DOT__jump = 1U;
                            if ((1U & (~ ((IData)(vlSelfRef.control__DOT__op) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.control__DOT__op) 
                                              >> 3U)))) {
                                    if ((0U != (IData)(vlSelfRef.control__DOT__func3))) {
                                        vlSelfRef.control__DOT__jump = 0U;
                                    }
                                }
                            }
                            vlSelfRef.control__DOT__branch = 0U;
                        }
                    }
                } else if ((2U & (IData)(vlSelfRef.control__DOT__op))) {
                    if ((1U & (IData)(vlSelfRef.control__DOT__op))) {
                        vlSelfRef.control__DOT__alu_source = 0U;
                        vlSelfRef.control__DOT__branch = 1U;
                    }
                }
            }
        } else {
            vlSelfRef.control__DOT__imm_source = 0U;
            vlSelfRef.control__DOT__mem_read = 0U;
            vlSelfRef.control__DOT__mem_write = 0U;
            vlSelfRef.control__DOT__reg_write = 0U;
            vlSelfRef.control__DOT__alu_op = 0U;
        }
    } else if ((0x00000020U & (IData)(vlSelfRef.control__DOT__op))) {
        if ((0x00000010U & (IData)(vlSelfRef.control__DOT__op))) {
            if ((8U & (IData)(vlSelfRef.control__DOT__op))) {
                vlSelfRef.control__DOT__imm_source = 0U;
                vlSelfRef.control__DOT__alu_op = 0U;
            } else if ((4U & (IData)(vlSelfRef.control__DOT__op))) {
                if ((2U & (IData)(vlSelfRef.control__DOT__op))) {
                    vlSelfRef.control__DOT__imm_source 
                        = ((1U & (IData)(vlSelfRef.control__DOT__op))
                            ? 4U : 0U);
                    if ((1U & (~ (IData)(vlSelfRef.control__DOT__op)))) {
                        vlSelfRef.control__DOT__alu_op = 0U;
                    }
                } else {
                    vlSelfRef.control__DOT__imm_source = 0U;
                    vlSelfRef.control__DOT__alu_op = 0U;
                }
            } else if ((2U & (IData)(vlSelfRef.control__DOT__op))) {
                if ((1U & (~ (IData)(vlSelfRef.control__DOT__op)))) {
                    vlSelfRef.control__DOT__imm_source = 0U;
                }
                vlSelfRef.control__DOT__alu_op = ((1U 
                                                   & (IData)(vlSelfRef.control__DOT__op))
                                                   ? 2U
                                                   : 0U);
            } else {
                vlSelfRef.control__DOT__imm_source = 0U;
                vlSelfRef.control__DOT__alu_op = 0U;
            }
            if ((1U & (~ ((IData)(vlSelfRef.control__DOT__op) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.control__DOT__op))) {
                    if ((2U & (IData)(vlSelfRef.control__DOT__op))) {
                        if ((1U & (IData)(vlSelfRef.control__DOT__op))) {
                            vlSelfRef.control__DOT__write_back_source = 3U;
                            vlSelfRef.control__DOT__second_add_source = 1U;
                            vlSelfRef.control__DOT__jump = 0U;
                            vlSelfRef.control__DOT__branch = 0U;
                        }
                    }
                } else if ((2U & (IData)(vlSelfRef.control__DOT__op))) {
                    if ((1U & (IData)(vlSelfRef.control__DOT__op))) {
                        vlSelfRef.control__DOT__write_back_source = 0U;
                        vlSelfRef.control__DOT__branch = 0U;
                    }
                }
                if ((1U & (~ ((IData)(vlSelfRef.control__DOT__op) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelfRef.control__DOT__op))) {
                        if ((1U & (IData)(vlSelfRef.control__DOT__op))) {
                            vlSelfRef.control__DOT__alu_source = 0U;
                        }
                    }
                }
            }
        } else {
            vlSelfRef.control__DOT__imm_source = ((8U 
                                                   & (IData)(vlSelfRef.control__DOT__op))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.control__DOT__op))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.control__DOT__op))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.control__DOT__op))
                                                      ? 1U
                                                      : 0U)
                                                     : 0U)));
            if ((1U & (~ ((IData)(vlSelfRef.control__DOT__op) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.control__DOT__op) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelfRef.control__DOT__op))) {
                        if ((1U & (IData)(vlSelfRef.control__DOT__op))) {
                            vlSelfRef.control__DOT__alu_source = 1U;
                            vlSelfRef.control__DOT__branch = 0U;
                        }
                    }
                }
            }
            vlSelfRef.control__DOT__alu_op = 0U;
        }
        vlSelfRef.control__DOT__mem_read = 0U;
        vlSelfRef.control__DOT__mem_write = ((1U & 
                                              (~ ((IData)(vlSelfRef.control__DOT__op) 
                                                  >> 4U))) 
                                             && ((1U 
                                                  & (~ 
                                                     ((IData)(vlSelfRef.control__DOT__op) 
                                                      >> 3U))) 
                                                 && ((1U 
                                                      & (~ 
                                                         ((IData)(vlSelfRef.control__DOT__op) 
                                                          >> 2U))) 
                                                     && ((1U 
                                                          & ((IData)(vlSelfRef.control__DOT__op) 
                                                             >> 1U)) 
                                                         && (1U 
                                                             & (IData)(vlSelfRef.control__DOT__op))))));
        vlSelfRef.control__DOT__reg_write = ((1U & 
                                              ((IData)(vlSelfRef.control__DOT__op) 
                                               >> 4U)) 
                                             && ((1U 
                                                  & (~ 
                                                     ((IData)(vlSelfRef.control__DOT__op) 
                                                      >> 3U))) 
                                                 && ((4U 
                                                      & (IData)(vlSelfRef.control__DOT__op))
                                                      ? 
                                                     ((1U 
                                                       & ((IData)(vlSelfRef.control__DOT__op) 
                                                          >> 1U)) 
                                                      && (1U 
                                                          & (IData)(vlSelfRef.control__DOT__op)))
                                                      : 
                                                     ((1U 
                                                       & ((IData)(vlSelfRef.control__DOT__op) 
                                                          >> 1U)) 
                                                      && (1U 
                                                          & (IData)(vlSelfRef.control__DOT__op))))));
    } else if ((0x00000010U & (IData)(vlSelfRef.control__DOT__op))) {
        if ((8U & (IData)(vlSelfRef.control__DOT__op))) {
            vlSelfRef.control__DOT__imm_source = 0U;
            vlSelfRef.control__DOT__alu_op = 0U;
        } else if ((4U & (IData)(vlSelfRef.control__DOT__op))) {
            if ((2U & (IData)(vlSelfRef.control__DOT__op))) {
                vlSelfRef.control__DOT__imm_source 
                    = ((1U & (IData)(vlSelfRef.control__DOT__op))
                        ? 4U : 0U);
                if ((1U & (~ (IData)(vlSelfRef.control__DOT__op)))) {
                    vlSelfRef.control__DOT__alu_op = 0U;
                }
            } else {
                vlSelfRef.control__DOT__imm_source = 0U;
                vlSelfRef.control__DOT__alu_op = 0U;
            }
        } else {
            vlSelfRef.control__DOT__imm_source = 0U;
            vlSelfRef.control__DOT__alu_op = ((2U & (IData)(vlSelfRef.control__DOT__op))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.control__DOT__op))
                                                   ? 2U
                                                   : 0U)
                                               : 0U);
        }
        if ((1U & (~ ((IData)(vlSelfRef.control__DOT__op) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelfRef.control__DOT__op))) {
                if ((2U & (IData)(vlSelfRef.control__DOT__op))) {
                    if ((1U & (IData)(vlSelfRef.control__DOT__op))) {
                        vlSelfRef.control__DOT__write_back_source = 3U;
                        vlSelfRef.control__DOT__second_add_source = 0U;
                        vlSelfRef.control__DOT__jump = 0U;
                        vlSelfRef.control__DOT__branch = 0U;
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.control__DOT__op))) {
                if ((1U & (IData)(vlSelfRef.control__DOT__op))) {
                    vlSelfRef.control__DOT__write_back_source = 0U;
                    vlSelfRef.control__DOT__jump = 0U;
                    vlSelfRef.control__DOT__branch = 0U;
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.control__DOT__op) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.control__DOT__op))) {
                    if ((1U & (IData)(vlSelfRef.control__DOT__op))) {
                        vlSelfRef.control__DOT__alu_source = 1U;
                    }
                }
            }
        }
        vlSelfRef.control__DOT__mem_read = 0U;
        vlSelfRef.control__DOT__mem_write = 0U;
        vlSelfRef.control__DOT__reg_write = ((1U & 
                                              (~ ((IData)(vlSelfRef.control__DOT__op) 
                                                  >> 3U))) 
                                             && ((4U 
                                                  & (IData)(vlSelfRef.control__DOT__op))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlSelfRef.control__DOT__op) 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & (IData)(vlSelfRef.control__DOT__op)))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlSelfRef.control__DOT__op) 
                                                      >> 1U)) 
                                                  && ((1U 
                                                       & (IData)(vlSelfRef.control__DOT__op)) 
                                                      && (1U 
                                                          & (~ 
                                                             (((1U 
                                                                == (IData)(vlSelfRef.control__DOT__func3)) 
                                                               & (0U 
                                                                  != (IData)(vlSelfRef.control__DOT__func7))) 
                                                              | (((5U 
                                                                   == (IData)(vlSelfRef.control__DOT__func3)) 
                                                                  & (0U 
                                                                     != (IData)(vlSelfRef.control__DOT__func7))) 
                                                                 & (0x20U 
                                                                    != (IData)(vlSelfRef.control__DOT__func7))))))))));
    } else {
        if ((8U & (IData)(vlSelfRef.control__DOT__op))) {
            if ((4U & (IData)(vlSelfRef.control__DOT__op))) {
                if ((2U & (IData)(vlSelfRef.control__DOT__op))) {
                    if ((1U & (~ (IData)(vlSelfRef.control__DOT__op)))) {
                        vlSelfRef.control__DOT__imm_source = 0U;
                        vlSelfRef.control__DOT__mem_read = 0U;
                        vlSelfRef.control__DOT__mem_write = 0U;
                        vlSelfRef.control__DOT__reg_write = 0U;
                        vlSelfRef.control__DOT__alu_op = 0U;
                    }
                } else {
                    vlSelfRef.control__DOT__imm_source = 0U;
                    vlSelfRef.control__DOT__mem_read = 0U;
                    vlSelfRef.control__DOT__mem_write = 0U;
                    vlSelfRef.control__DOT__reg_write = 0U;
                    vlSelfRef.control__DOT__alu_op = 0U;
                }
            } else {
                vlSelfRef.control__DOT__imm_source = 0U;
                vlSelfRef.control__DOT__mem_read = 0U;
                vlSelfRef.control__DOT__mem_write = 0U;
                vlSelfRef.control__DOT__reg_write = 0U;
                vlSelfRef.control__DOT__alu_op = 0U;
            }
        } else {
            vlSelfRef.control__DOT__imm_source = 0U;
            vlSelfRef.control__DOT__mem_read = ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.control__DOT__op) 
                                                     >> 2U))) 
                                                && ((1U 
                                                     & ((IData)(vlSelfRef.control__DOT__op) 
                                                        >> 1U)) 
                                                    && (1U 
                                                        & (IData)(vlSelfRef.control__DOT__op))));
            vlSelfRef.control__DOT__mem_write = 0U;
            vlSelfRef.control__DOT__reg_write = ((1U 
                                                  & (~ 
                                                     ((IData)(vlSelfRef.control__DOT__op) 
                                                      >> 2U))) 
                                                 && ((1U 
                                                      & ((IData)(vlSelfRef.control__DOT__op) 
                                                         >> 1U)) 
                                                     && (1U 
                                                         & (IData)(vlSelfRef.control__DOT__op))));
            vlSelfRef.control__DOT__alu_op = 0U;
        }
        if ((1U & (~ ((IData)(vlSelfRef.control__DOT__op) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.control__DOT__op) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.control__DOT__op))) {
                    if ((1U & (IData)(vlSelfRef.control__DOT__op))) {
                        vlSelfRef.control__DOT__write_back_source = 1U;
                        vlSelfRef.control__DOT__alu_source = 1U;
                        vlSelfRef.control__DOT__branch = 0U;
                    }
                }
            }
        }
    }
    vlSelfRef.imm_source = vlSelfRef.control__DOT__imm_source;
    vlSelfRef.write_back_source = vlSelfRef.control__DOT__write_back_source;
    vlSelfRef.alu_source = vlSelfRef.control__DOT__alu_source;
    vlSelfRef.second_add_source = vlSelfRef.control__DOT__second_add_source;
    vlSelfRef.mem_read = vlSelfRef.control__DOT__mem_read;
    vlSelfRef.mem_write = vlSelfRef.control__DOT__mem_write;
    vlSelfRef.fence_i = vlSelfRef.control__DOT__fence_i;
    vlSelfRef.fence = vlSelfRef.control__DOT__fence;
    vlSelfRef.reg_write = vlSelfRef.control__DOT__reg_write;
    vlSelfRef.trap_valid = vlSelfRef.control__DOT__trap_valid;
    vlSelfRef.trap_cause = vlSelfRef.control__DOT__trap_cause;
    vlSelfRef.control__DOT__alu_control = 0U;
    if ((0U == (IData)(vlSelfRef.control__DOT__alu_op))) {
        vlSelfRef.control__DOT__alu_control = 0U;
    } else if ((1U == (IData)(vlSelfRef.control__DOT__alu_op))) {
        vlSelfRef.control__DOT__alu_control = ((4U 
                                                & (IData)(vlSelfRef.control__DOT__func3))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelfRef.control__DOT__func3))
                                                    ? 7U
                                                    : 5U)
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.control__DOT__func3))
                                                    ? 0U
                                                    : 1U));
    } else if ((2U == (IData)(vlSelfRef.control__DOT__alu_op))) {
        if ((4U & (IData)(vlSelfRef.control__DOT__func3))) {
            if ((2U & (IData)(vlSelfRef.control__DOT__func3))) {
                vlSelfRef.control__DOT__alu_control 
                    = ((1U & (IData)(vlSelfRef.control__DOT__func3))
                        ? 2U : 3U);
            } else if ((1U & (IData)(vlSelfRef.control__DOT__func3))) {
                if ((0U == (IData)(vlSelfRef.control__DOT__func7))) {
                    vlSelfRef.control__DOT__alu_control = 6U;
                } else if ((0x20U == (IData)(vlSelfRef.control__DOT__func7))) {
                    vlSelfRef.control__DOT__alu_control = 9U;
                }
            } else {
                vlSelfRef.control__DOT__alu_control = 8U;
            }
        } else {
            vlSelfRef.control__DOT__alu_control = (
                                                   (2U 
                                                    & (IData)(vlSelfRef.control__DOT__func3))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.control__DOT__func3))
                                                     ? 7U
                                                     : 5U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.control__DOT__func3))
                                                     ? 4U
                                                     : 
                                                    ((0x33U 
                                                      == (IData)(vlSelfRef.control__DOT__op))
                                                      ? 
                                                     ((0x20U 
                                                       == (IData)(vlSelfRef.control__DOT__func7))
                                                       ? 1U
                                                       : 0U)
                                                      : 0U)));
        }
    } else {
        vlSelfRef.control__DOT__alu_control = 0U;
    }
    __Vtableidx1 = ((((IData)(vlSelfRef.control__DOT__alu_zero) 
                      << 6U) | ((IData)(vlSelfRef.control__DOT__alu_last_bit) 
                                << 5U)) | (((IData)(vlSelfRef.control__DOT__branch) 
                                            << 4U) 
                                           | (((IData)(vlSelfRef.control__DOT__alu_unsigned_less) 
                                               << 3U) 
                                              | (IData)(vlSelfRef.control__DOT__func3))));
    vlSelfRef.control__DOT__assert_branch = Vtop__ConstPool__TABLE_h039306e2_0
        [__Vtableidx1];
    vlSelfRef.alu_control = vlSelfRef.control__DOT__alu_control;
    vlSelfRef.control__DOT__pc_source = ((IData)(vlSelfRef.control__DOT__jump) 
                                         | (IData)(vlSelfRef.control__DOT__assert_branch));
    vlSelfRef.pc_source = vlSelfRef.control__DOT__pc_source;
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
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

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("/Users/luokai/Documents/GitHub/RISC-V-project/src/cu.sv", 3, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vtop___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.op & 0x80U)))) {
        Verilated::overWidthError("op");
    }
    if (VL_UNLIKELY(((vlSelfRef.func3 & 0xf8U)))) {
        Verilated::overWidthError("func3");
    }
    if (VL_UNLIKELY(((vlSelfRef.func7 & 0x80U)))) {
        Verilated::overWidthError("func7");
    }
    if (VL_UNLIKELY(((vlSelfRef.alu_zero & 0xfeU)))) {
        Verilated::overWidthError("alu_zero");
    }
    if (VL_UNLIKELY(((vlSelfRef.shamt & 0xe0U)))) {
        Verilated::overWidthError("shamt");
    }
    if (VL_UNLIKELY(((vlSelfRef.system_imm & 0xf000U)))) {
        Verilated::overWidthError("system_imm");
    }
    if (VL_UNLIKELY(((vlSelfRef.alu_last_bit & 0xfeU)))) {
        Verilated::overWidthError("alu_last_bit");
    }
    if (VL_UNLIKELY(((vlSelfRef.alu_unsigned_less & 0xfeU)))) {
        Verilated::overWidthError("alu_unsigned_less");
    }
}
#endif  // VL_DEBUG
