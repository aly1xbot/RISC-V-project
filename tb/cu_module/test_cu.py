import cocotb
from cocotb.triggers import Timer, RisingEdge
from cocotb.clock import Clock 
import numpy as np
import random
from cocotb.handle import LogicArrayObject


@cocotb.test()
async def set_unknown (dut):
    await Timer(1, unit = "ns")
    #set all input to unkwon before each test
    dut.op.value = bin(LogicArrayObject("XXXXXXX"))
    # Uncomment the following throughout the course when needed
    #
    # dut.func3.value = bin(LogicArrayObject("XXXX"))
    # dut.func7.value = bin(LogicArrayObject("XXXXXXX")) added one more X in the string 
    # dut.alu_zero.value = bin(LogicArrayObject("X"))
    # dut.alu_last_bit.value = bin(LogicArrayObejct("X"))

    await Timer (1, unit = "ns")
@cocotb.test()
async def test_cu (dut):
    await set_unknown(dut)
    await Timer(1, unit = "ns")
    dut.op.value = 0b0000011
    assert dut.regwrite.value == "1"
    assert dut.imm_source.value == "00"
    assert dut.memwrite.value == "0"
    assert dut.alu_control.value =="000"





