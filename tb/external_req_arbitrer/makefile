# Makefile

# defaults
SIM ?= verilator
TOPLEVEL_LANG ?= verilog
EXTRA_ARGS += --trace --trace-structs
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


# include cocotb's make rules to take care of the simulator setup

include $(shell cocotb-config --makefiles)/Makefile.sim

COMPILE_ARGS += --timing