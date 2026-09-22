// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

// Parameter definitions for Vtop_instruction_set_pkg
constexpr CData/*3:0*/ Vtop_instruction_set_pkg::DataCount;



Vtop_instruction_set_pkg::Vtop_instruction_set_pkg() = default;
Vtop_instruction_set_pkg::~Vtop_instruction_set_pkg() = default;

void Vtop_instruction_set_pkg::ctor(Vtop__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void Vtop_instruction_set_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtop_instruction_set_pkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
