import cocotb
from cocotb.triggers import RisingEdge, Timer
from cocotbext.axi import AxiBus, AxiRam, AxiMaster


# CACHE STATES CST
IDLE                = 0b000
SENDING_WRITE_REQ   = 0b001
SENDING_WRITE_DATA  = 0b010
WAITING_WRITE_RES   = 0b011
SENDING_READ_REQ    = 0b100
RECEIVING_READ_DATA = 0b101


@cocotb.test()
async def main_test(dut):
    dut.rst_n.value = 0

    axi_ram_slave = AxiRam(AxiBus.from_prefix(dut, "m_axi"), dut.clk, dut.rst_n, reset_active_level=False, size=4096)
    i_cache_master = AxiMaster(AxiBus.from_prefix(dut, "s_axi_instr"), dut.clk, dut.rst_n, reset_active_level=False)
    d_cache_master = AxiMaster(AxiBus.from_prefix(dut, "s_axi_data"), dut.clk, dut.rst_n, reset_active_level=False)

    print("wait for the first edge")
    await RisingEdge(dut.clk)
    print("first edge received")
    dut.rst_n.value = 1
    await RisingEdge(dut.clk)

    # init states to IDLE

    dut.data_cache_state.value = IDLE
    dut.instr_cache_state.value = IDLE
    await Timer(1, units="ns")


    dut.data_cache_state.setimmediatevalue(0b0001)
    await Timer(1, units="ns")
    print("write request:",
    "state", dut.data_cache_state.value,
    "s_awvalid", dut.s_axi_data_awvalid.value,
    "s_awready", dut.s_axi_data_awready.value,
    "m_awvalid", dut.m_axi_awvalid.value,
    "m_awready", dut.m_axi_awready.value,
    "s_wvalid", dut.s_axi_data_wvalid.value,
    "s_wready", dut.s_axi_data_wready.value,
    "m_wvalid", dut.m_axi_wvalid.value,
    "m_wready", dut.m_axi_wready.value)
    await d_cache_master.write(0x000, b'test')
    dut.data_cache_state.value = IDLE
    await Timer(1, units="ns")

    assert axi_ram_slave.read(0x000,4) == b'test'


    dut.instr_cache_state.value = SENDING_READ_REQ
    await Timer(1, units="ns")
    data = await i_cache_master.read(0x000, 4)
    dut.instr_cache_state.value = IDLE
    await Timer(1, units="ns")

    assert data.data == b'test'


    dut.data_cache_state.value = SENDING_READ_REQ
    await Timer(1, units="ns")
    data = await d_cache_master.read(0x000, 4)
    dut.data_cache_state.value = IDLE
    await Timer(1, units="ns")

    assert data.data == b'test'



    dut.data_cache_state.value = SENDING_READ_REQ
    dut.instr_cache_state.value = SENDING_READ_REQ
    await Timer(1, units="ns")
    data_i = await i_cache_master.read(0x000, 4)
    await Timer(1, units="ns")
    dut.instr_cache_state.value = IDLE
    await Timer(1, units="ns")

    assert data_i.data == b'test'

    data_d = await d_cache_master.read(0x000, 4)
    await Timer(1, units="ns")
    dut.data_cache_state.value = IDLE
    await Timer(1, units="ns")

    assert data_d.data == b'test'



    dut.data_cache_state.value = SENDING_WRITE_REQ
    dut.instr_cache_state.value = SENDING_WRITE_REQ
    await Timer(1, units="ns")
    await i_cache_master.write(0x00C, b'beef')
    await Timer(1, units="ns")
    dut.instr_cache_state.value = IDLE
    await Timer(1, units="ns")

    await d_cache_master.write(0x010, b'1234')
    await Timer(1, units="ns")
    dut.data_cache_state.value = IDLE
    await Timer(1, units="ns")

    assert data_d.data == b'test'

    # we verify data was well written

    assert axi_ram_slave.read(0x00C,4) == b'beef'
    assert axi_ram_slave.read(0x010,4) == b'1234'
