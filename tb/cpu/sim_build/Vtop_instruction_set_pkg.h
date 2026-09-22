// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_INSTRUCTION_SET_PKG_H_
#define VERILATED_VTOP_INSTRUCTION_SET_PKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_instruction_set_pkg final {
  public:

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr CData/*3:0*/ DataCount = 2U;

    // CONSTRUCTORS
    Vtop_instruction_set_pkg();
    ~Vtop_instruction_set_pkg();
    void ctor(Vtop__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtop_instruction_set_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
