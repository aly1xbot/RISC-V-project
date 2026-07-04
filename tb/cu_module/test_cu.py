import cocotb
from cocotb.triggers import Timer, RisingEdge
from cocotb.clock import Clock 
import numpy as np
import random
from cocotb.handle import LogicArrayObject


async def set_unknown (dut):
    await Timer(1, unit = "ns")
    #set all input to unkwon before each test
    dut.op.value = 0b0000000
    # Uncomment the following throughout the course when needed
    #
    # dut.func3.value = bin(LogicArrayObject("XXXX"))
    # dut.func7.value = bin(LogicArrayObject("XXXXXXX")) added one more X in the string 
    # dut.alu_zero.value = bin(LogicArrayObject("X"))
    # dut.alu_last_bit.value = bin(LogicArrayObejct("X"))

    await Timer (1, unit = "ns")

    # lw test 
@cocotb.test()
async def lw_control_test (dut):
    await Timer(1, unit = "ns")
    dut.op.value = 0b0000011
    await Timer(1, unit = "ns")
    assert dut.reg_write.value == "1"
    assert dut.imm_source.value == "00"
    assert dut.mem_write.value == "0"
    assert dut.alu_control.value =="000"

    assert dut.alu_source.value == "1"
    assert dut.write_back_source.value == "01"
    assert dut.pc_source.value == "0"


# sw test
@cocotb.test()
async def sw_control_test(dut):
    # testing control signal for sw
    await Timer(10, unit = "ns")
    dut.op.value = 0b0100011
    await Timer(1, unit = "ns")
    assert dut.reg_write.value == "0"
    assert dut.imm_source.value == "01"
    assert dut.mem_write.value == "1"
    assert dut.alu_control.value == "000"
    assert dut.alu_source.value == "1"
    assert dut.pc_source.value == "0"



# r command test

@cocotb.test()
async def r_control_test(dut):
    await Timer(10, unit = "ns")
    dut.op.value = 0b0110011
    dut.func3.value = 0b000
    await Timer (1, unit = "ns")
    assert dut.reg_write.value == "1"
    assert dut.mem_write.value == "0"
    assert dut.alu_control.value == "000"
    assert dut.alu_source.value == "0"
    assert dut.write_back_source.value == "00"
    assert dut.pc_source.value == "0"


@cocotb.test()
async def and_control_test(dut):
    await Timer(10, unit = "ns")
    dut.op.value = 0b0110011
    dut.func3.value = 0b111
    await Timer (1, unit = "ns")
    assert dut.reg_write.value == "1"
    assert dut.mem_write.value == "0"
    assert dut.alu_control.value == "010"
    assert dut.alu_source.value == "0"
    assert dut.write_back_source.value == "00"
    assert dut.pc_source.value == "0"

@cocotb.test()
async def or_control_test(dut):
    await set_unknown(dut)
    await Timer(10, unit = "ns")
    dut.op.value = 0b0110011
    dut.func3.value = 0b111
    await Timer (1, unit = "ns")
    assert dut.reg_write.value == "1"
    assert dut.mem_write.value == "0"
    assert dut.alu_control.value == "010"
    assert dut.alu_source.value == "0"
    assert dut.write_back_source.value == "00"
    assert dut.pc_source.value == "0"

# B-type instruction test
@cocotb.test()
async def beq_control_test(dut):
    await set_unknown(dut)
    # TEST CONTROL SIGNALS FOR BEQ
    await Timer(10, units="ns")
    dut.op.value = 0b1100011 # B-TYPE
    dut.func3.value = 0b000 # beq
    dut.alu_zero.value = 0b0
    await Timer(1, units="ns")

    assert dut.imm_source.value == "10"
    assert dut.alu_control.value == "001"
    assert dut.mem_write.value == "0"
    assert dut.reg_write.value == "0"
    assert dut.alu_source.value == "0"
    assert dut.branch.value == "1"
    assert dut.pc_source.value == "0"

    # Test if branching condition is met
    await Timer(3, units="ns")
    dut.alu_zero.value = 0b1
    await Timer(1, units="ns")
    assert dut.pc_source.value == "1"



@cocotb.test()
async def J_type_test(dut):
    await set_unknown (dut)

    await Timer(10, units="ns")
    dut.op.value = 0b1101111 # J-type
    dut.func3.value = 0b000 # jal
    await Timer(1, units="ns")

    assert dut.imm_source.value == "11"
    assert dut.reg_write.value == "1"
    assert dut.mem_write.value == "0"
    assert dut.pc_source.value == "1"
    assert dut.write_back_source.value == "10"
    assert dut.branch.value == "0"
    assert dut.jump.value == "1"


@cocotb.test()
async def addi_control_test(dut):
    await set_unknown(dut)
    await Timer(10, unit = "ns")
    dut.op.value = 0b0010011
    dut.func3.value = 0b000
    await Timer(1, unit = "ns")
    assert dut.alu_control.value == "000"
    assert dut.imm_source.value == "00"
    assert dut.mem_write.value == "0"
    assert dut.reg_write.value == "1"  
    assert dut.alu_source.value == "1"
    assert dut.write_back_source.value == "00"
    assert dut.pc_source.value == "0"





