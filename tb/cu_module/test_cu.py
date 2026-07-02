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
    assert dut.write_back_source.value == "1"


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
    assert dut.write_back_source.value == "0"


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
    assert dut.write_back_source.value == "0"

@cocotb.test()
async def or_control_test(dut):
    await Timer(10, unit = "ns")
    dut.op.value = 0b0110011
    dut.func3.value = 0b111
    await Timer (1, unit = "ns")
    assert dut.reg_write.value == "1"
    assert dut.mem_write.value == "0"
    assert dut.alu_control.value == "011"
    assert dut.alu_source.value == "0"
    assert dut.write_back_source.value == "0"







