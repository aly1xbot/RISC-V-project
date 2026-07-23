# test_memory.py

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer

async def reset(dut): 
    dut.rst_n.value = 0
    dut.write_enable.value = 0
    dut.address.value = 0
    dut.write_data.value = 0
    await RisingEdge(dut.clk)
    dut.rst_n.value = 1
    await RisingEdge(dut.clk)

    for address in range(dut.WORDS.value):
        dut.address.value = address
        await Timer(1, unit = "ns")
        assert dut.read_data.value == "00000000000000000000000000000000"




@cocotb.test()
async def memory_data_test(dut):
    # Start a 10 ns clock
    cocotb.start_soon(Clock(dut.clk, 1, units="ns").start())
    await reset(dut)


    
    # Test: Write and read back data
    test_data = [
        (0, 0xDEADBEEF),
        (4, 0xCAFEBABE),
        (8, 0x12345678),
        (12, 0xA5A5A5A5)
    ]
    dut.byte_enable.value = 0b1111
    for address, data in test_data:
        # Write data to memory
        dut.address.value = address
        dut.write_data.value = data
        dut.write_enable.value = 1
        await RisingEdge(dut.clk)

        # Disable write after one cycle
        dut.write_enable.value = 0
        await RisingEdge(dut.clk)

        # Verify the write by reading back
        dut.address.value = address
        await RisingEdge(dut.clk)
        assert dut.read_data.value == data

    # Test: Write to multiple addresses, then read back
    for i in range(4,40):
        dut.address.value = i
        dut.write_data.value = i + 100
        dut.write_enable.value = 1
        await RisingEdge(dut.clk)

    # Disable write, then read back values to check
    dut.write_enable.value = 0
    for i in range(40,4):
        dut.address.value = i
        await RisingEdge(dut.clk)
        expected_value = i + 100
        assert dut.read_data.value == expected_value

    #byte_write test
    dut.write_enable.value = 1
    for byte_enable in range(16):
        dut.byte_enable.value = byte_enable
        mask = 0
        for j in range(4):
            if (byte_enable>>j) & 1:
                mask |=(0xFF << (j*8))
        for address, data in test_data:
            dut.address.value = address
            dut.write_data.value = data

            dut.write_enable.value = 1
            await RisingEdge(dut.clk)
            dut.write_enable.value = 0
            await RisingEdge(dut.clk)

            dut.address.value = address
            await RisingEdge(dut.clk)
            old = int(dut.read_data.value)
            expected = (old & ~mask) | (data & mask)
            assert dut.read_data.value == expected