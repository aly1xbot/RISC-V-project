import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer
import random
import numpy as np

@cocotb.test()
async def random_write_read_test(dut):
    # TEST POSITIVE IMM = 123 WITH SOURCE = 0
    imm = 0b000001111011 #123
    imm <<= 13 # leave "room" for random junk
    source = 0b00
    # 25 bits sent to sign extend contains data before that will be ignored (rd, f3,..)
    # masked to leave room for imm "test payload"
    random_junk = 0b000000000000_1010101010101 
    raw_data = random_junk | imm
    await Timer(1, units="ns")
    dut.raw_src.value = raw_data
    dut.imm_source.value = source
    await Timer(1, units="ns") # let it propagate ...
    assert dut.immediate.value == "00000000000000000000000001111011"
    assert int(dut.immediate.value) == 123

    # TEST Negative IMM = -42 WITH SOURCE = 0
    imm = 0b111111010110 #-42
    imm <<= 13 # leave "room" for ramdom junk
    source = 0b00
    # 25 bits sent to sign extend contains data before that will be ignred (rd, f3,..)
    # masked to leave room for imm "test payload"
    random_junk = 0b000000000000_1010101010101 
    raw_data = random_junk | imm
    await Timer(1, units="ns")
    dut.raw_src.value = raw_data
    dut.imm_source.value = source
    await Timer(1, units="ns") # let it propagate ...
    assert dut.immediate.value == "11111111111111111111111111010110"
    # Python interprets int as uint. we sub 1<<32 as int to get corresponding negative value
    assert int(dut.immediate.value) - (1 << 32)  == -42
    await Timer(10, "ns")   # 确保仿真不会过早退出



@cocotb.test()
async def singext_s_type_test(dut):
    for _ in range(100):
        # test for the positive IMM 
        await Timer(100, unit = "ns")
        imm = random.randint(0,0b01111111111) 
        imm_11_5 = imm >>5
        imm_4_0 = imm & 0b000000011111
        raw_data = (imm_11_5 << 18) | (imm_4_0)
        source = 0b01
        dut.raw_src.value = raw_data
        dut.imm_source.value = source
        await Timer(1, unit = "ns")
        assert int(dut.immediate.value) == imm

    # testing for the negative IMM value 

        imm = random.randint(0b100000000000,0b111111111111) - (1<<12)
        imm_11_5 = imm >> 5
        imm_4_0 = imm & 0b000000011111
        raw_data = (imm_11_5 << 18 | imm_4_0)
        source = 0b01
        dut.raw_src.value = raw_data
        dut.imm_source.value = source
        await Timer (1, unit = "ns")
        assert int(dut.immediate.value) - (1 << 32) == imm


@cocotb.test()
async def signext_b_type_test(dut):
    for _ in range(100):
        await Timer(100, unit = "ns")
        imm = random.randint(0, 0b011111111111)
        imm <<= 1
        imm_12 = (imm & 0b1000000000000) >> 12 # 0 (positive)
        imm_11 = (imm & 0b0100000000000) >> 11
        imm_10_5 = (imm & 0b0011111100000) >> 5
        imm_4_1 = (imm & 0b0000000011110) >> 1
        raw_data = (imm_12 << 24) | (imm_11 << 0) | (imm_10_5 << 18) | (imm_4_1 << 1)
        source = 0b10
        await Timer(1, units="ns")
        dut.raw_src.value = raw_data
        dut.imm_source.value = source
        await Timer(1, units="ns") # let it propagate ...
        assert int(dut.immediate.value) == imm 

        await Timer(100, units="ns")
        imm = random.randint(0b100000000000,0b111111111111)
        imm <<= 1 # 13 bits signed imm ending with a 0
        imm_12 = (imm & 0b1000000000000) >> 12 # 1 (negative)
        imm_11 = (imm & 0b0100000000000) >> 11
        imm_10_5 = (imm & 0b0011111100000) >> 5
        imm_4_1 = (imm & 0b0000000011110) >> 1
        raw_data = (imm_12 << 24) | (imm_11 << 0) | (imm_10_5 << 18) | (imm_4_1 << 1)
        source = 0b10
        await Timer(1, units="ns")
        dut.raw_src.value = raw_data
        dut.imm_source.value = source
        await Timer(1, units="ns") # let it propagate ...
        assert int(dut.immediate.value) - (1 << 32) == imm - (1 << 13)


@cocotb.test()
async def j_type_test(dut):
    for _ in range(100):
        #testing for the positive value 
        await Timer(100, unit = "ns")
        imm = random.randint(0,0b01111111111111111111) 
        imm <<= 1 # 21 bits signed imm ending with a 0
        imm_20 =     (imm & 0b100000000000000000000) >> 20
        imm_19_12 =  (imm & 0b011111111000000000000) >> 12
        imm_11 =     (imm & 0b000000000100000000000) >> 11
        imm_10_1 =   (imm & 0b000000000011111111110) >> 1
        raw_data =  (imm_20 << 24) | (imm_19_12 << 5) | (imm_11 << 13) | (imm_10_1 << 14)
        source = 0b11
        await Timer(1, units="ns")
        dut.raw_src.value = raw_data
        dut.imm_source.value = source
        await Timer(1, units="ns") # let it propagate ...
        assert int(dut.immediate.value) == imm

        # testing for the negative value
        await Timer(100, unit = "ns")
        imm = random.randint(0b10000000000000000000,0b11111111111111111111)
        imm <<=1
        imm_20 = (imm & 0b100000000000000000000) >> 20
        imm_19_12 = (imm & 0b011111111000000000000) >>12
        imm_11 = (imm & 0b000000000100000000000) >>11
        imm_10_1 = (imm & 0b000000000011111111110) >> 1
        raw_data = (imm_20 << 24) | (imm_19_12 << 5) | (imm_11 << 13) | (imm_10_1 << 14)
        source = 0b11
        await Timer(1, unit = "ns")
        dut.raw_src.value = raw_data
        dut.imm_source.value = source
        await Timer(1, unit = "ns")
        assert int(dut.immediate.value) - (1<<32) == imm - (1<<21)






