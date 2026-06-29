# Makefile

# defaults
SIM ?= verilator
TOPLEVEL_LANG ?= verilog
EXTRA_ARGS += --trace --trace-structs
WAVES = 1
SRC_DIR = /Users/luokai/Documents/GitHub/RISC-V-project/src
VERILOG_SOURCES += $(SRC_DIR)/cpu.sv
VERILOG_SOURCES += $(SRC_DIR)/memory.sv
VERILOG_SOURCES += $(SRC_DIR)/cu.sv          # 注意：你的实例化是 control，请确认模块名是 control 还是 cu
VERILOG_SOURCES += $(SRC_DIR)/regfile.sv
VERILOG_SOURCES += $(SRC_DIR)/signext.sv
VERILOG_SOURCES += $(SRC_DIR)/alu.sv



# use VHDL_SOURCES for VHDL files

# TOPLEVEL is the name of the toplevel module in your Verilog or VHDL file
TOPLEVEL = cpu

# MODULE is the basename of the Python test file
MODULE = test_cpu

# include cocotb's make rules to take care of the simulator setup
include $(shell cocotb-config --makefiles)/Makefile.sim