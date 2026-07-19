import cocotb
from cocotb.triggers import Timer, RisingEdge
from cocotb.clock import Clock
import random
import numpy

def binary_to_hex(bin_str):
    # Convert binary string to hexadecimal
    hex_str = hex(int(str(bin_str), 2))[2:]
    hex_str = hex_str.zfill(8)
    return hex_str.upper()


def hex_to_bin(hex_str):
    # Convert hex str to bin
    bin_str = bin(int(str(hex_str), 16))[2:]
    bin_str = bin_str.zfill(32)
    return bin_str.upper()




@cocotb.test()
async def cam_test(dut):
    clock = Clock(dut.clk, 10, unit="ns")
    cocotb.start_soon(clock.start()) 


    dut.rst_n.value = 0
    dut.write_enable.value = 0
    dut.search_data.value = 0 #first initialisation

    await RisingEdge(dut.clk)

    dut.rst_n.value = 1
    await RisingEdge(dut.clk)


    dut.write_enable.value = 1
    await Timer(1, unit = "ns") #stroing the value into cam
    dut.write_index.value = 0
    dut.write_data.value = 0xDE6DE0A0 
    await RisingEdge(dut.clk)
    dut.write_index.value = 1
    dut.write_data.value = 0x003FA7E9 
    await RisingEdge(dut.clk)
    dut.write_index.value = 2
    dut.write_data.value = 0xDEADBEEF 
    await RisingEdge(dut.clk)
    dut.write_index.value = 3
    dut.write_data.value = 0xAEAEAEAE 
    await RisingEdge(dut.clk)
    dut.write_enable.value = 0 # finish writing process



    
    #fiding match value
    dut.search_data.value =  0xDEADBEEF #0xDEADBEEF
    await Timer(1, unit = "ns")
    assert dut.match.value == "1"
    assert dut.match_index.value == "10"

    await Timer(1, unit = "ns") #testing for missing value
    dut.search_data.value = 0xDEADC09A #0xDEADC09A
    await Timer(1, unit = "ns")
    assert dut.match.value == "0"
    assert dut.match_index.value == "00"

