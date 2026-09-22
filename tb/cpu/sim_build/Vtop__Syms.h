// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"
#include "Vtop___024unit.h"
#include "Vtop_instruction_set_pkg.h"
#include "Vtop_axi_if.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;
    Vtop_axi_if                    TOP__cpu_test_harness__DOT__core__DOT__m_axi_data;
    Vtop_axi_if                    TOP__cpu_test_harness__DOT__core__DOT__m_axi_inst;
    Vtop_axi_if                    TOP__cpu_test_harness__DOT__m_axi;
    Vtop_instruction_set_pkg       TOP__instruction_set_pkg;

    // SCOPE NAMES
    VerilatedScope* __Vscopep_TOP;
    VerilatedScope* __Vscopep_cpu_test_harness;
    VerilatedScope* __Vscopep_cpu_test_harness__core;
    VerilatedScope* __Vscopep_cpu_test_harness__core__alu_inst;
    VerilatedScope* __Vscopep_cpu_test_harness__core__arbitrer;
    VerilatedScope* __Vscopep_cpu_test_harness__core__control;
    VerilatedScope* __Vscopep_cpu_test_harness__core__data_cache;
    VerilatedScope* __Vscopep_cpu_test_harness__core__instr_cache;
    VerilatedScope* __Vscopep_cpu_test_harness__core__ls_decoder;
    VerilatedScope* __Vscopep_cpu_test_harness__core__m_axi_data;
    VerilatedScope* __Vscopep_cpu_test_harness__core__m_axi_inst;
    VerilatedScope* __Vscopep_cpu_test_harness__core__reader_inst;
    VerilatedScope* __Vscopep_cpu_test_harness__core__reader_inst__mask_apply;
    VerilatedScope* __Vscopep_cpu_test_harness__core__reader_inst__mask_apply__unnamedblk1;
    VerilatedScope* __Vscopep_cpu_test_harness__core__regfile;
    VerilatedScope* __Vscopep_cpu_test_harness__core__regfile__unnamedblk1;
    VerilatedScope* __Vscopep_cpu_test_harness__core__sign_extender;
    VerilatedScope* __Vscopep_cpu_test_harness__data_memory;
    VerilatedScope* __Vscopep_cpu_test_harness__m_axi;
    VerilatedScope* __Vscopep_cpu_test_harness__regfile;
    VerilatedScope* __Vscopep_cpu_test_harness__unnamedblk1;
    VerilatedScope* __Vscopep_instruction_set_pkg;

    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
