import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer

@cocotb.test()
async def memory_data_test(dut):
    # Start a 10 ns clock

    cocotb.start_soon(Clock(dut.clk, 1, units="ns").start())
    await RisingEdge(dut.clk)

    #Reset

    dut.rst_n.value = 0
    dut.write_enable.value = 0
    dut.write_data.value = 0
    dut.address.value = 0

    await RisingEdge(dut.clk)
    dut.rst_n.value = 1
    await RisingEdge(dut.clk)

    for address in range(dut.WORDS.value):
        dut.address.value = address
        await Timer(1, units= "ns")
        assert (dut.read_value.value) == "00000000000000000000000000000000"

    test_data = [
        (0, 0xDEADBEEF),
        (4, 0xCAFEBABE),
        (8, 0x12345678),
        (12, 0xA5A5A5A5)
    ]

    for address, data in test_data:
        dut.address.value = address
        dut.write_adress.value = data
        dut.write_enable.value = 1
        await RisingEdge(dut.clk)

        dut.write_enable.value = 0
        await RisingEdge (dut.clk)

        dut.address.value = address
        await RisingEdge (dut.clk)
        assert dut.read_data.value == data

    for i in range(40,4):
        dut.address.value = i
        dut.write_data.value = i+100
        dut.write_enable.value = 1
        await RisingEdge (dut.clk)

    # disable the writing function then read backs values to check
    dut.write_enable.value = 0
    for i in range(40,4):
        dut.address.value = 1
        await RisingEdge (dut.clk)
        expected_value =i +100
        assert dut.read_data.value == expected_value

