# first design some function help convert hex to bin , another cocotb.test to handle the cpu reset
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


async def cpu_reset(dut):
    # init and reset
    dut.rst_n.value = 0
    await RisingEdge(dut.clk)
    dut.rst_n.value = 1
    await RisingEdge(dut.clk)



#formal test writing here below 
#@ cocotb.test()
#async def cpu_init_test(dut):
    #cocotb.start_soon(Clock(dut.clk, 1, unit = "ns").start())
    #await RisingEdge(dut.clk)

    #await cpu_reset(dut)
    #assert binary_to_hex(dut.pc.value)=="00000000"
    # Load the expected instruction memory as binary
    # Note that this is loaded in sim directly via the verilog code
    # This load is only for expected
    #imem = []
    #with open ("test_imemory.hex", "r") as file:
    #    for line in file:
    #        line_content = line.split("//")[0].strip()
    #        if line_content:
    #            imem.append(hex_to_bin(line_content))

    #for counter in range(len(imem)):
    #    expected_instruction = imem[counter]
    #    assert dut.instruction.value == expected_instruction
    #    await RisingEdge(dut.clk)

@cocotb.test()
async def cpu_insrt_test(dut):
    """Runs a lw datapath test"""
    cocotb.start_soon(Clock(dut.clk, 1, unit="ns").start())
    await RisingEdge(dut.clk)
    await cpu_reset(dut)

    ##################
    # LOAD WORD TEST 
    # lw x18 0x8(x0)
    ##################
    print("\n\nTESTING LW\n\n")

    # The first instruction for the test in imem.hex load the data from
    # dmem @ adress 0x00000008 that happens to be 0xDEADBEEF into register x18

    # Wait a clock cycle for the instruction to execute
    await RisingEdge(dut.clk)

    # Check the value of reg x18
    assert binary_to_hex(dut.regfile.registers[18].value) == "DEADBEEF"

    ##################
    # STORE WORD TEST 
    # sw x18 0xC(x0)
    ##################
    print("\n\nTESTING SW\n\n")
    test_address = int(0xC / 4) #mem is byte adressed but is made out of words in the eyes of the software
    # The second instruction for the test in imem.hex stores the data from
    # x18 (that happens to be 0xDEADBEEF from the previous LW test) @ adress 0x0000000C 

    # First, let's check the inital value
    assert binary_to_hex(dut.data_memory.mem[test_address].value) == "F2F2F2F2"

    # Wait a clock cycle for the instruction to execute
    await RisingEdge(dut.clk)
    # Check the value of mem[0xC]
    assert binary_to_hex(dut.data_memory.mem[test_address].value) == "DEADBEEF"
    # r type command testing 
    expected_result = (0xDEADBEEF + 0x00000AAA) & 0xFFFFFFFF
    await RisingEdge(dut.clk) # lw x19 0x10(x0)
    assert binary_to_hex(dut.regfile.registers[19].value) == "00000AAA"
    await RisingEdge(dut.clk) # add x20 x18 x19
    assert binary_to_hex(dut.regfile.registers[20].value) == hex(expected_result)[2:].upper()
    # Use last expected result, as this instr uses last op result register
    expected_result = expected_result & 0xDEADBEEF
    await RisingEdge(dut.clk)
    assert binary_to_hex(dut.regfile.registers[21].value) == "DEAD8889"

    print("\n\nTESTING OR\n\n")
    await RisingEdge(dut.clk)
    assert binary_to_hex(dut.regfile.registers[5].value) == "125F552D"
    await RisingEdge(dut.clk)
    assert binary_to_hex(dut.regfile.registers[6].value) == "7F4FD46A"
    await RisingEdge(dut.clk)
    assert binary_to_hex(dut.regfile.registers[7].value) == "7F5FD56F"

# ...

    ##################
    # BEQ TEST
    # 00730663  //BEQ TEST START :    beq x6 x7 0xC       | #1 SHOULD NOT BRANCH
    # 00802B03  //                    lw x22 0x8(x0)      | x22 <= DEADBEEF
    # 01690863  //                    beq x18 x22 0x10    | #2 SHOULD BRANCH (+ offset)
    # 00000013  //                    nop                 | NEVER EXECUTED
    # 00000013  //                    nop                 | NEVER EXECUTED
    # 00000663  //                    beq x0 x0 0xC       | #4 SHOULD BRANCH (avoid loop)
    # 00002B03  //                    lw x22 0x0(x0)      | x22 <= AEAEAEAE
    # FF6B0CE3  //                    beq x22 x22 -0x8    | #3 SHOULD BRANCH (-offset)
    # 00000013  //                    nop                 | FINAL NOP
    ##################

    print("\n\nTESTING BEQ\n\n")
    assert binary_to_hex(dut.instruction.value) == "00730663"

    await RisingEdge(dut.clk) # beq x6 x7 0xC NOT TAKEN
    # Check if the current instruction is the one we expected
    assert binary_to_hex(dut.instruction.value) == "00802B03"

    await RisingEdge(dut.clk) # lw x22 0x8(x0)
    assert binary_to_hex(dut.regfile.registers[22].value) == "DEADBEEF"

    await RisingEdge(dut.clk) # beq x18 x22 0x10 TAKEN
    # Check if the current instruction is the one we expected
    assert binary_to_hex(dut.instruction.value) == "00002B03"

    await RisingEdge(dut.clk) # lw x22 0x0(x0)
    assert binary_to_hex(dut.regfile.registers[22].value) == "AEAEAEAE"

    await RisingEdge(dut.clk) # beq x22 x22 -0x8 TAKEN
    # Check if the current instruction is the one we expected
    assert binary_to_hex(dut.instruction.value) == "00000663"

    await RisingEdge(dut.clk) # beq x0 x0 0xC TAKEN
    # Check if the current instruction is the one we expected
    assert binary_to_hex(dut.instruction.value) == "00000013"



    # ...

    ##################
    # 00C000EF  //JAL TEST START :    jal x1 0xC          | #1 jump @PC+0xC | PC 0x44
    # 00000013  //                    nop                 | NEVER EXECUTED  | PC 0x48
    # 00C000EF  //                    jal x1 0xC          | #2 jump @PC-0x4 | PC 0x4C   
    # FFDFF0EF  //                    jal x1 -4           | #2 jump @PC-0x4 | PC 0x50
    # 00000013  //                    nop                 | NEVER EXECUTED  | PC 0x54
    # 00C02383  //                    lw x7 0xC(x0)       | x7 <= DEADBEEF  | PC 0x58
    ##################
    print("\n\nTESTING JAL\n\n")
    await Timer(1, unit = "ns")
    assert binary_to_hex(dut.instruction.value) == "00C000EF"
    assert binary_to_hex(dut.pc.value) == "00000044"
    await RisingEdge(dut.clk)
    await Timer(1, unit = "ns")
    assert binary_to_hex(dut.instruction.value) == "FFDFF0EF"
    assert binary_to_hex(dut.pc.value) == "00000050"
    assert binary_to_hex(dut.regfile.registers[1].value) == "00000048"
    await RisingEdge(dut.clk)
    await Timer(1, unit = "ns")
    assert binary_to_hex(dut.instruction.value) == "00C000EF"
    assert binary_to_hex(dut.pc.value) == "0000004C"
    assert binary_to_hex(dut.regfile.registers[1].value) == "00000054"
    await RisingEdge(dut.clk)
    await Timer(1, unit = "ns")
    assert binary_to_hex(dut.instruction.value) == "00C02383"
    assert binary_to_hex(dut.pc.value) == "00000058"
    assert binary_to_hex(dut.regfile.registers[1].value) == "00000050"
    await RisingEdge(dut.clk)
    await Timer(1, unit = "ns")
    assert binary_to_hex(dut.regfile.registers[7].value) == "DEADBEEF"



    #addi test
    # 1AB38D13  //                    addi x26 x7 0x1AB   | x26 <= DEADC09A
    # F2130C93  //                    addi x25 x6 0xF21   | x25 <= DEADBE10
    print("\n\nTESTING ADDI\n\n")
    assert binary_to_hex(dut.instruction.value) == "1AB38D13"    
    assert not binary_to_hex(dut.regfile.registers[26].value) == "DEADC09A"
    await RisingEdge(dut.clk)
    await Timer(1, unit = "ns")
    assert binary_to_hex(dut.instruction.value) == "F2130C93"
    assert binary_to_hex(dut.regfile.registers[26].value) == "DEADC09A"
    await RisingEdge(dut.clk)
    await Timer(1, unit = "ns")
    assert binary_to_hex(dut.regfile.registers[25].value) == "7F4FD38B"

    ##################
    # AUIPC TEST (PC befor is 0x64)
    # 1F1FA297  //AUIPC TEST START :  auipc x5 0x1F1FA    | x5 <= 1F1FA064 
    ##################

    print("\n\nTESTING AUIPC\n\n")

    # Check test's init state
    assert binary_to_hex(dut.instruction.value) == "1F1FA297"
    await RisingEdge(dut.clk)
    await Timer(1, unit = "ns")
    # auipc x5 0x1F1FA
    assert binary_to_hex(dut.regfile.registers[5].value) == "1F1FA064"

    ##################
    # LUI TEST
    # 2F2FA2B7  //LUI TEST START :    lui x5 0x2F2FA      | x5 <= 2F2FA000
    ##################
    print("\n\nTESTING LUI\n\n")
    # Check test's init state
    assert binary_to_hex(dut.instruction.value) == "2F2FA2B7"

    await RisingEdge(dut.clk) # lui x5 0x2F2FA 
    await Timer(1, unit = "ns")
    assert binary_to_hex(dut.regfile.registers[5].value) == "2F2FA000"

    ##################
    # FFF9AB93  //SLTI TEST START :   slti x23 x19 0xFFF  | x23 <= 00000000
    # 001BAB93  //                    slti x23 x23 0x001  | x23 <= 00000001
    ##################

    print("\n\nTESTING SLTI\n\n")
    assert binary_to_hex(dut.regfile.registers[19].value) == "00000AAA"
    assert binary_to_hex(dut.instruction.value) == "FFF9AB93"
    await RisingEdge(dut.clk)
    assert binary_to_hex(dut.regfile.registers[23].value) == "00000000"
    await RisingEdge(dut.clk)
    await Timer(1, unit = "ns")
    assert binary_to_hex(dut.regfile.registers[23].value) == "00000001"

    ##################
    # FFF9BB13  //SLTIU TEST START :  sltiu x22 x19 0xFFF | x22 <= 00000001
    # 0019BB13  //                    sltiu x22 x19 0x001 | x22 <= 00000000
    ##################
    assert binary_to_hex(dut.instruction.value) == "FFF9BB13"
    await RisingEdge(dut.clk)
    await Timer(1, unit = "ns")
    assert binary_to_hex(dut.regfile.registers[22].value) == "00000001"
    await RisingEdge(dut.clk)
    await Timer(1, unit = "ns")
    assert binary_to_hex(dut.regfile.registers[22].value) == "00000000"



    #xori test
    print("\n\nTESTING XORI\n\n")
    assert binary_to_hex(dut.instruction.value) == "AAA94913"
    await RisingEdge(dut.clk)
    await Timer(1, unit = "ns")
    assert binary_to_hex(dut.regfile.registers[18].value) == "21524445"
    await RisingEdge(dut.clk)
    await Timer(1, unit = "ns")
    assert (
        binary_to_hex(dut.regfile.registers[19].value) ==
        binary_to_hex(dut.regfile.registers[18].value)
    )


    #andi test
    print("\n\nTESTING ANDI\n\n")
    assert binary_to_hex(dut.regfile.registers[19].value) == "21524445" # checking the initial state
    assert binary_to_hex(dut.instruction.value) == "AAA9F913"
    await RisingEdge(dut.clk)
    await Timer(1, unit = "ns")
    assert binary_to_hex(dut.regfile.registers[18]) == "21524000"
    assert binary_to_hex(dut.instruction.value) == "00097993"
    await RisingEdge(dut.clk)
    await Timer(1, unit = "ns")
    assert binary_to_hex(dut.regfile.registers[19]) == "00000000"



    #ori test
    print("\n\nTESTING ORI\n\n")
    assert binary_to_hex(dut.regfile.registers[18].value) == "21524000"
    assert binary_to_hex(dut.regfile.registers[20].value) == "DEADC999"
    assert binary_to_hex(dut.instruction.value) == "AAAA6913"
    await RisingEdge(dut.clk)
    await Timer(1, unit = "ns")
    assert binary_to_hex(dut.regfile.registers[18].value) == "FFFFFBBB"

    # slli test
    print("\n\nTESTING SLLI\n\n")
    assert binary_to_hex(dut.regfile.registers[26].value) == "DEADC09A"
    assert binary_to_hex(dut.instruction.value) == "00AD1993"
    await RisingEdge(dut.clk)
    await Timer(1, unit = "ns")
    assert binary_to_hex(dut.regfile.registers[19].value) == "B7026800"

    #srli test
    print("\n\nTESTING SRLI\n\n")
    assert binary_to_hex(dut.instruction.value) == "00AD5993"
    assert binary_to_hex(dut.regfile.registers[26].value) == "DEADC09A"
    await RisingEdge(dut.clk)
    assert Timer(1, unit = "ns")
    await RisingEdge(dut.clk)
    
    assert binary_to_hex(dut.regfile.registers[19].value) == "0037AB70"

    #srai test
    print("\n\nSRAI TEST\n\n")

    assert binary_to_hex(dut.instruction.value) == "409CD913"

    assert binary_to_hex(dut.regfile.registers[25].value) == "7F4FD38B"
    await RisingEdge(dut.clk)
    assert binary_to_hex(dut.regfile.registers[18].value) == "003FA7E9"


    ##################
    # 412A8933  //SUB TEST START :    sub x18 x21 x18     | x18 <= FFFFF8FF
    ##################
    print("\n\nTESTING SUB\n\n")
    assert binary_to_hex(dut.instruction.value) == "412A8933"
    await RisingEdge(dut.clk)
    assert binary_to_hex(dut.regfile.registers[18].value) == "DE6DE0A0"




    print("\n\nTESTING SLL\n\n")
    assert binary_to_hex(dut.instruction.value) == "00800393"
    await RisingEdge(dut.clk)
    assert binary_to_hex(dut.instruction.value) == "00791933" 
    assert binary_to_hex(dut.regfile.registers[18].value) == "DE6DE0A0"
    assert binary_to_hex(dut.regfile.registers[7].value) == "00000008"
    await RisingEdge(dut.clk)
    assert binary_to_hex(dut.regfile.registers[18].value) == "6DE0A000"


    print("\n\n TESTING SLT\n\n")
    assert binary_to_hex(dut.instruction.value) == "013B28B3"
    assert binary_to_hex(dut.regfile.registers[23].value) == "00000001"
    assert binary_to_hex(dut.regfile.registers[22].value) == "00000000"
    await RisingEdge(dut.clk)
    assert binary_to_hex(dut.regfile.registers[17].value) == "00000001"

    print("\n\n Testing SLTU\n\n")
    assert binary_to_hex(dut.instruction.value) == "013B38B3"
    assert binary_to_hex(dut.regfile.registers[23]) == "00000001"
    await RisingEdge(dut.clk)
    assert binary_to_hex(dut.regfile.registers[17]) == "00000001"

    print("\n\n Testing XOR")
    assert binary_to_hex(dut.instruction.value) == "013948B3"
    assert binary_to_hex(dut.regfile.registers[18].value) == "6DE0A000"
    assert binary_to_hex(dut.regfile.registers[19].value) == "0037AB70"
    await RisingEdge(dut.clk)
    assert binary_to_hex(dut.regfile.registers[17].value) == "6DD70B70"

    print("\n\n TESTING SRL\n\n")
    assert binary_to_hex(dut.instruction.value) == "0079D433"
    assert binary_to_hex(dut.regfile.registers[7]) == "00000008"
    await RisingEdge(dut.clk)
    assert binary_to_hex(dut.regfile.registers[8].value) == "000037AB"

    print("\n\n TESTING SRA\n\n")
    assert binary_to_hex(dut.instruction.value) == "4079D433"
    await RisingEdge(dut.clk)
    assert binary_to_hex(dut.regfile.registers[8].value) == "000037AB"


    print("\n\nTESTING BLT\n\n")
    assert binary_to_hex(dut.instruction.value) == "0088C463"
    assert binary_to_hex(dut.regfile.registers[8].value) == "000037AB"
    assert binary_to_hex(dut.regfile.registers[17].value) == "6DD70B70"
    await RisingEdge(dut.clk)
    assert binary_to_hex(dut.instruction.value) == "01144463"
    await RisingEdge(dut.clk) # blt x8 x17 0x8
    assert not binary_to_hex(dut.instruction.value) == "00C00413"
    assert binary_to_hex(dut.regfile.registers[8].value) == "000037AB"

    print("\n\nTESTING BNE\n\n")

    assert binary_to_hex(dut.instruction.value) == "00891463"
    assert binary_to_hex(dut.regfile.registers[18].value) == "6DE0A000"
    assert binary_to_hex(dut.regfile.registers[8].value) == "000037AB"
    await RisingEdge(dut.clk)
    assert not binary_to_hex(dut.instruction.value) == "000037B7"
    assert binary_to_hex(dut.regfile.registers[18].value) == "6DE0A000"

    print("\n\nTESTING BGE\n\n")

    assert binary_to_hex(dut.instruction.value) == "00895463"
    await RisingEdge(dut.clk)
    assert not binary_to_hex(dut.instruction.value) == "000037B7"
    assert binary_to_hex(dut.regfile.registers[18].value) == "6DE0A000"

    print("\n\nTESTING BLTU\n\n")
    assert binary_to_hex(dut.instruction.value) == "00896463"
    await RisingEdge(dut.clk)
    assert binary_to_hex(dut.instruction.value) == "01246463"
    await RisingEdge(dut.clk)
    assert not binary_to_hex(dut.instruction.value) == "00C90413"
    assert binary_to_hex(dut.regfile.registers[8]) == "000037AB"

    print("\n\nTESTING BGEU\n\n")
    assert binary_to_hex(dut.instruction.value) == "0089F463"
    await RisingEdge(dut.clk)
    assert not binary_to_hex(dut.instruction.value) == "000037B7"
    assert binary_to_hex(dut.regfile.registers[18].value) == "6DE0A000"

    print("\n\n TESTING JALR\n\n") 
    assert binary_to_hex(dut.instruction.value) == "00000397"
    assert binary_to_hex(dut.pc.value) == "000000EC"

    await RisingEdge(dut.clk) # auipc x7 0x00 
    await RisingEdge(dut.clk) # addi x7 x7 0x10 
    assert binary_to_hex(dut.regfile.registers[7].value) == "00000100"

    await RisingEdge(dut.clk) # jalr x1  -4(x7)
    assert binary_to_hex(dut.regfile.registers[1].value) == "000000F8"
    assert not binary_to_hex(dut.instruction.value) == "00C00413"
    assert binary_to_hex(dut.regfile.registers[8].value) == "000037AB"
    assert binary_to_hex(dut.pc.value) == "000000FC"

    print("\n\nTESTING SB\n\n")
    assert binary_to_hex(dut.instruction.value) == "008020A3"
    await RisingEdge(dut.clk)
    assert binary_to_hex(dut.data_memory.mem[1].value) == "000000F8"
    await RisingEdge(dut.clk)
    assert binary_to_hex(dut.regfile.registers[1].value) == "00EE0000"






