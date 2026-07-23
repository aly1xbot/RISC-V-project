import cocotb
from cocotb.triggers import Timer

@cocotb.test()
async def ls_unit_test(dut):
    await Timer(1, unit = "ns")
    assert dut.byte_enable.value == "1111"