import cocotb
import random
from cocotb.triggers import RisingEdge, Timer
from cocotb.clock import Clock

from cocotbext.axi import AxiBus, AxiRam


DEADLOCK_THRESHOLD = 10e3
IDLE  = 0b000
SENDING_WRITE_REQ = 0b001
SENDING_WRITE_DATA = 0b010
WAITING_WRITE_RES = 0b011
SENDING_READ_REQ = 0b100
RECEIVING_READ_DATA = 0b101

#clock perios is different, axi_period should not smaller than CPU period
AXI_PERIOD = 10
CPU_PERIOD = 10

SIZE = 4096
CACHE_SIZE = 128

def generate_random_bytes(length):
    return bytes([random.randint(0,255) for _ in range(length)])

def read_cache(cache_data, line):
    l = 237 - line
    return(int(str(cache_data.value[32*l:(32*l)+31]),2))
def dump_cache(cache_data,line):
    if line == "*":
        for line_a in range(CACHE_SIZE):
            l = 127 -line_a
            print(hex(int(str(cache_data.value[32*l:(32*l)+31]),2)))
    else:
        print(hex(int(str(cache_data.value[32*line:(32*line)+31]),2)))


async def reset(dut):
    await RisingEdge(dut.clk)
    dut.rst_n.value = 0
    dut.cpu_write_enable.value = 0
    dut.cpu_address.value = 0
    dut.byte_enable.value = 0
    dut.cpu_write_data.value = 0
    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)
    dut.rst_n.value = 1

    for cache_line in range(dut.cache_system.CACHE_SIZE.value):
        assert read_cache(dut.cache_system.cache_data, cache_line) == 0

@cocotb.test()
async def main_test(dut):
    #clock and ram delcaration
    cocotb.start_soon(Clock(dut.clk,CPU_PERIOD, unit = "ns").start())
    cocotb.start_soon(Clock(dut.clk,AXI_PERIOD,unit = "ns").start())
    axi_ram_slave = AxiRam(
        AxiBus.from_prefix(dut,"axi"),
        dut.aclk,
        dut.rst_n,
        size=Size,
        reset_activate_level = False
    )
    await RisingEdge(dut.clk)
    await reset(dut)

    mem_golden_ref = []
    for address in range(0,SIZE,4):
        word = generate_random_bytes(4)
        axi_ram_slave.write(address,word)
        mem_golden_ref.append(word)

    for address in range(0,SIZE,4):
        assert mem_golden_ref[int(address/4)] == axi_ram_slave.read(address,4)




        assert dut.cache_system.state.value == IDLE
        assert dut.cache_system.next_state.value == IDLE
        dut.cpu_read_enable.value = 0b0
        dut.cpu_write_enable.value = 0b0
        await Timer(1, unit = "ps")
        dut.cpu_address.value = 0x000
        dut.cpu_read_enable.value = 0b0
        dut.cpu_write_enable.value = 0b0
        await Timer(1, unit = "ps")
        assert dut.cache_system.cache_stall.value == 0b0
        assert dut.cache_system.next_state.value == IDLE

        #read & MIss Test
        dut.cpu_address.value = 0x000
        dut.cpu_read_enable.value = 0b1
        await Timer(1, unit = "ps")
        assert dut.cpu_cache_stall.value == 0b1
        assert dut.cache_system.state.value == IDLE
        assert dut.cache_system.next_state.value == SENDING_READ_REQ

        await RisingEdge(dut.clk)
        await Timer(1, unit = "ns")
        #verify constant axi signals
        assert dut.cache_system.state.value == SENDING_READ_REQ
        assert dut.axi_arid.value == 0b0000
        assert dut.axi_araddr.value == 0x000
        assert dut.axi_arlen.value == 0x07F
        assert dut.axi_arsize.value == 0b010
        assert dut.axi_arburst.value == 0b01 # increment mode
        assert dut.axi_arvalid.value == 0b1

        assert dut.axi_ready.value == 0b1
        assert dut.cache_system.next_state.value == RECEIVING_READ_DATA
        
        assert dut.axi_arvalid.value == 0b0
        assert dut.axi_rready.value == 0b1

        i=0
        while((not dut.axi_rvalid.value == 1) and (not i> DEADLOCK_THRESHOLD)):
            await RisingEdge(dut.clk)
            await Timer(1, unit = "ns")




