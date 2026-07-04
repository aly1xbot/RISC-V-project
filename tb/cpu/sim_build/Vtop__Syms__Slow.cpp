// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(378);
    // Setup sub module instances
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscopep_TOP = new VerilatedScope{this, "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER};
    __Vscopep_cpu = new VerilatedScope{this, "cpu", "cpu", "cpu", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_cpu__alu_inst = new VerilatedScope{this, "cpu.alu_inst", "alu_inst", "alu", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_cpu__control = new VerilatedScope{this, "cpu.control", "control", "control", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_cpu__data_memory = new VerilatedScope{this, "cpu.data_memory", "data_memory", "memory", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_cpu__data_memory__unnamedblk1 = new VerilatedScope{this, "cpu.data_memory.unnamedblk1", "unnamedblk1", "<null>", -9, VerilatedScope::SCOPE_OTHER};
    __Vscopep_cpu__instruction_memory = new VerilatedScope{this, "cpu.instruction_memory", "instruction_memory", "memory", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_cpu__instruction_memory__unnamedblk1 = new VerilatedScope{this, "cpu.instruction_memory.unnamedblk1", "unnamedblk1", "<null>", -9, VerilatedScope::SCOPE_OTHER};
    __Vscopep_cpu__regfile = new VerilatedScope{this, "cpu.regfile", "regfile", "regfile", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_cpu__regfile__unnamedblk1 = new VerilatedScope{this, "cpu.regfile.unnamedblk1", "unnamedblk1", "<null>", -9, VerilatedScope::SCOPE_OTHER};
    __Vscopep_cpu__sign_extender = new VerilatedScope{this, "cpu.sign_extender", "sign_extender", "signext", -9, VerilatedScope::SCOPE_MODULE};
    // Set up scope hierarchy
    __Vhier.add(0, __Vscopep_cpu);
    __Vhier.add(__Vscopep_cpu, __Vscopep_cpu__alu_inst);
    __Vhier.add(__Vscopep_cpu, __Vscopep_cpu__control);
    __Vhier.add(__Vscopep_cpu, __Vscopep_cpu__data_memory);
    __Vhier.add(__Vscopep_cpu, __Vscopep_cpu__instruction_memory);
    __Vhier.add(__Vscopep_cpu, __Vscopep_cpu__regfile);
    __Vhier.add(__Vscopep_cpu, __Vscopep_cpu__sign_extender);
    __Vhier.add(__Vscopep_cpu__data_memory, __Vscopep_cpu__data_memory__unnamedblk1);
    __Vhier.add(__Vscopep_cpu__instruction_memory, __Vscopep_cpu__instruction_memory__unnamedblk1);
    __Vhier.add(__Vscopep_cpu__regfile, __Vscopep_cpu__regfile__unnamedblk1);
    // Setup export functions - final: 0
    // Setup export functions - final: 1
    // Setup public variables
    __Vscopep_TOP->varInsert("clk", &(TOP.clk), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("rst_n", &(TOP.rst_n), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_cpu->varInsert("alu_control", &(TOP.cpu__DOT__alu_control), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_cpu->varInsert("alu_result", &(TOP.cpu__DOT__alu_result), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_cpu->varInsert("alu_source", &(TOP.cpu__DOT__alu_source), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_cpu->varInsert("alu_src2", &(TOP.cpu__DOT__alu_src2), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_cpu->varInsert("alu_zero", &(TOP.cpu__DOT__alu_zero), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_cpu->varInsert("clk", &(TOP.cpu__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_cpu->varInsert("dest_reg", &(TOP.cpu__DOT__dest_reg), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,4,0);
    __Vscopep_cpu->varInsert("f3", &(TOP.cpu__DOT__f3), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,2,0);
    __Vscopep_cpu->varInsert("imm_source", &(TOP.cpu__DOT__imm_source), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_cpu->varInsert("immediate", &(TOP.cpu__DOT__immediate), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_cpu->varInsert("instruction", &(TOP.cpu__DOT__instruction), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_cpu->varInsert("mem_read", &(TOP.cpu__DOT__mem_read), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_cpu->varInsert("mem_write", &(TOP.cpu__DOT__mem_write), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_cpu->varInsert("op", &(TOP.cpu__DOT__op), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,6,0);
    __Vscopep_cpu->varInsert("pc", &(TOP.cpu__DOT__pc), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_cpu->varInsert("pc_next", &(TOP.cpu__DOT__pc_next), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_cpu->varInsert("pc_source", &(TOP.cpu__DOT__pc_source), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_cpu->varInsert("raw_imm", &(TOP.cpu__DOT__raw_imm), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,24,0);
    __Vscopep_cpu->varInsert("read_reg1", &(TOP.cpu__DOT__read_reg1), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_cpu->varInsert("read_reg2", &(TOP.cpu__DOT__read_reg2), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_cpu->varInsert("reg_write", &(TOP.cpu__DOT__reg_write), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_cpu->varInsert("rst_n", &(TOP.cpu__DOT__rst_n), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_cpu->varInsert("source_reg1", &(TOP.cpu__DOT__source_reg1), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,4,0);
    __Vscopep_cpu->varInsert("source_reg2", &(TOP.cpu__DOT__source_reg2), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,4,0);
    __Vscopep_cpu->varInsert("write_back_data", &(TOP.cpu__DOT__write_back_data), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_cpu->varInsert("write_back_source", &(TOP.cpu__DOT__write_back_source), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_cpu__alu_inst->varInsert("alu_control", &(TOP.cpu__DOT__alu_inst__DOT__alu_control), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_cpu__alu_inst->varInsert("alu_result", &(TOP.cpu__DOT__alu_inst__DOT__alu_result), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_cpu__alu_inst->varInsert("src1", &(TOP.cpu__DOT__alu_inst__DOT__src1), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_cpu__alu_inst->varInsert("src2", &(TOP.cpu__DOT__alu_inst__DOT__src2), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_cpu__alu_inst->varInsert("zero", &(TOP.cpu__DOT__alu_inst__DOT__zero), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_cpu__control->varInsert("alu_control", &(TOP.cpu__DOT__control__DOT__alu_control), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_cpu__control->varInsert("alu_op", &(TOP.cpu__DOT__control__DOT__alu_op), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_cpu__control->varInsert("alu_source", &(TOP.cpu__DOT__control__DOT__alu_source), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_cpu__control->varInsert("alu_zero", &(TOP.cpu__DOT__control__DOT__alu_zero), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_cpu__control->varInsert("branch", &(TOP.cpu__DOT__control__DOT__branch), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_cpu__control->varInsert("func3", &(TOP.cpu__DOT__control__DOT__func3), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_cpu__control->varInsert("func7", &(TOP.cpu__DOT__control__DOT__func7), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,6,0);
    __Vscopep_cpu__control->varInsert("imm_source", &(TOP.cpu__DOT__control__DOT__imm_source), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_cpu__control->varInsert("mem_write", &(TOP.cpu__DOT__control__DOT__mem_write), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_cpu__control->varInsert("op", &(TOP.cpu__DOT__control__DOT__op), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,6,0);
    __Vscopep_cpu__control->varInsert("pc_source", &(TOP.cpu__DOT__control__DOT__pc_source), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_cpu__control->varInsert("reg_write", &(TOP.cpu__DOT__control__DOT__reg_write), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_cpu__control->varInsert("write_back_source", &(TOP.cpu__DOT__control__DOT__write_back_source), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_cpu__data_memory->varInsert("WORDS", const_cast<void*>(static_cast<const void*>(&(TOP.cpu__DOT__data_memory__DOT__WORDS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_cpu__data_memory->varInsert("address", &(TOP.cpu__DOT__data_memory__DOT__address), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_cpu__data_memory->varInsert("clk", &(TOP.cpu__DOT__data_memory__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_cpu__data_memory->varInsert("mem", &(TOP.cpu__DOT__data_memory__DOT__mem), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 1, 1 ,0,63 ,31,0);
    __Vscopep_cpu__data_memory->varInsert("mem_init", const_cast<void*>(static_cast<const void*>(&(TOP.cpu__DOT__data_memory__DOT__mem_init))), true, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,143,0);
    __Vscopep_cpu__data_memory->varInsert("read_data", &(TOP.cpu__DOT__data_memory__DOT__read_data), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_cpu__data_memory->varInsert("rst_n", &(TOP.cpu__DOT__data_memory__DOT__rst_n), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_cpu__data_memory->varInsert("write_data", &(TOP.cpu__DOT__data_memory__DOT__write_data), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_cpu__data_memory->varInsert("write_enable", &(TOP.cpu__DOT__data_memory__DOT__write_enable), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_cpu__data_memory__unnamedblk1->varInsert("i", &(TOP.cpu__DOT__data_memory__DOT__unnamedblk1__DOT__i), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_cpu__instruction_memory->varInsert("WORDS", const_cast<void*>(static_cast<const void*>(&(TOP.cpu__DOT__instruction_memory__DOT__WORDS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_cpu__instruction_memory->varInsert("address", &(TOP.cpu__DOT__instruction_memory__DOT__address), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_cpu__instruction_memory->varInsert("clk", &(TOP.cpu__DOT__instruction_memory__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_cpu__instruction_memory->varInsert("mem", &(TOP.cpu__DOT__instruction_memory__DOT__mem), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 1, 1 ,0,63 ,31,0);
    __Vscopep_cpu__instruction_memory->varInsert("mem_init", const_cast<void*>(static_cast<const void*>(&(TOP.cpu__DOT__instruction_memory__DOT__mem_init))), true, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,143,0);
    __Vscopep_cpu__instruction_memory->varInsert("read_data", &(TOP.cpu__DOT__instruction_memory__DOT__read_data), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_cpu__instruction_memory->varInsert("rst_n", &(TOP.cpu__DOT__instruction_memory__DOT__rst_n), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_cpu__instruction_memory->varInsert("write_data", &(TOP.cpu__DOT__instruction_memory__DOT__write_data), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_cpu__instruction_memory->varInsert("write_enable", &(TOP.cpu__DOT__instruction_memory__DOT__write_enable), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_cpu__instruction_memory__unnamedblk1->varInsert("i", &(TOP.cpu__DOT__instruction_memory__DOT__unnamedblk1__DOT__i), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_cpu__regfile->varInsert("address1", &(TOP.cpu__DOT__regfile__DOT__address1), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,4,0);
    __Vscopep_cpu__regfile->varInsert("address2", &(TOP.cpu__DOT__regfile__DOT__address2), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,4,0);
    __Vscopep_cpu__regfile->varInsert("address3", &(TOP.cpu__DOT__regfile__DOT__address3), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,4,0);
    __Vscopep_cpu__regfile->varInsert("clk", &(TOP.cpu__DOT__regfile__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_cpu__regfile->varInsert("read_data1", &(TOP.cpu__DOT__regfile__DOT__read_data1), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_cpu__regfile->varInsert("read_data2", &(TOP.cpu__DOT__regfile__DOT__read_data2), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_cpu__regfile->varInsert("registers", &(TOP.cpu__DOT__regfile__DOT__registers), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 1, 1 ,0,31 ,31,0);
    __Vscopep_cpu__regfile->varInsert("rst_n", &(TOP.cpu__DOT__regfile__DOT__rst_n), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_cpu__regfile->varInsert("write_data", &(TOP.cpu__DOT__regfile__DOT__write_data), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_cpu__regfile->varInsert("write_enable", &(TOP.cpu__DOT__regfile__DOT__write_enable), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_cpu__regfile__unnamedblk1->varInsert("i", &(TOP.cpu__DOT__regfile__DOT__unnamedblk1__DOT__i), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_cpu__sign_extender->varInsert("gathered_imm", &(TOP.cpu__DOT__sign_extender__DOT__gathered_imm), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,11,0);
    __Vscopep_cpu__sign_extender->varInsert("imm_source", &(TOP.cpu__DOT__sign_extender__DOT__imm_source), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_cpu__sign_extender->varInsert("immediate", &(TOP.cpu__DOT__sign_extender__DOT__immediate), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,31,0);
    __Vscopep_cpu__sign_extender->varInsert("raw_src", &(TOP.cpu__DOT__sign_extender__DOT__raw_src), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,24,0);
}

Vtop__Syms::~Vtop__Syms() {
    // Tear down scope hierarchy
    __Vhier.remove(0, __Vscopep_cpu);
    __Vhier.remove(__Vscopep_cpu, __Vscopep_cpu__alu_inst);
    __Vhier.remove(__Vscopep_cpu, __Vscopep_cpu__control);
    __Vhier.remove(__Vscopep_cpu, __Vscopep_cpu__data_memory);
    __Vhier.remove(__Vscopep_cpu, __Vscopep_cpu__instruction_memory);
    __Vhier.remove(__Vscopep_cpu, __Vscopep_cpu__regfile);
    __Vhier.remove(__Vscopep_cpu, __Vscopep_cpu__sign_extender);
    __Vhier.remove(__Vscopep_cpu__data_memory, __Vscopep_cpu__data_memory__unnamedblk1);
    __Vhier.remove(__Vscopep_cpu__instruction_memory, __Vscopep_cpu__instruction_memory__unnamedblk1);
    __Vhier.remove(__Vscopep_cpu__regfile, __Vscopep_cpu__regfile__unnamedblk1);
    // Clear keys from hierarchy map after values have been removed
    __Vhier.clear();
    // Tear down scopes
    VL_DO_CLEAR(delete __Vscopep_TOP, __Vscopep_TOP = nullptr);
    VL_DO_CLEAR(delete __Vscopep_cpu, __Vscopep_cpu = nullptr);
    VL_DO_CLEAR(delete __Vscopep_cpu__alu_inst, __Vscopep_cpu__alu_inst = nullptr);
    VL_DO_CLEAR(delete __Vscopep_cpu__control, __Vscopep_cpu__control = nullptr);
    VL_DO_CLEAR(delete __Vscopep_cpu__data_memory, __Vscopep_cpu__data_memory = nullptr);
    VL_DO_CLEAR(delete __Vscopep_cpu__data_memory__unnamedblk1, __Vscopep_cpu__data_memory__unnamedblk1 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_cpu__instruction_memory, __Vscopep_cpu__instruction_memory = nullptr);
    VL_DO_CLEAR(delete __Vscopep_cpu__instruction_memory__unnamedblk1, __Vscopep_cpu__instruction_memory__unnamedblk1 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_cpu__regfile, __Vscopep_cpu__regfile = nullptr);
    VL_DO_CLEAR(delete __Vscopep_cpu__regfile__unnamedblk1, __Vscopep_cpu__regfile__unnamedblk1 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_cpu__sign_extender, __Vscopep_cpu__sign_extender = nullptr);
    // Tear down sub module instances
}
