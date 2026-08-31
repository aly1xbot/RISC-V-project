# Makefile

# defaults
SIM ?= verilator
TOPLEVEL_LANG ?= verilog
EXTRA_ARGS += --trace --trace-structs
COMPILE_ARGS += --timing
WAVES = 1
SRC := /Users/luokai/Documents/GitHub/RISC-V-project/src



VERILOG_SOURCES += /$(SRC)/instruction_set.sv \
					$(SRC)/axi_if.sv \
					$(PWD)/axi_translator.sv\
					$(SRC)/external_req_arbitrer.sv
					
					

					

# use VHDL_SOURCES for VHDL files

# TOPLEVEL is the name of the toplevel module in your Verilog or VHDL file
TOPLEVEL = axi_translator

# MODULE is the basename of the Python test file
MODULE = test_arbitrer

# Use the repository environment when cocotb-config is not on PATH.
COCOTB_CONFIG ?= $(abspath ../../venv312/bin/cocotb-config)
COCOTB_CONFIG_DIR := $(abspath ../../venv312/bin)
export PATH := $(COCOTB_CONFIG_DIR):$(PATH)

# include cocotb's make rules to take care of the simulator setup
include $(shell $(COCOTB_CONFIG) --makefiles)/Makefile.sim
