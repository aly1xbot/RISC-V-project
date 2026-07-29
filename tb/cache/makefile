# Makefile

# defaults
SIM ?= verilator
TOPLEVEL_LANG ?= verilog
EXTRA_ARGS += --trace --trace-structs
WAVES = 1
SRC := /Users/luokai/Documents/GitHub/RISC-V-project/src



VERILOG_SOURCES += /$(SRC)/instruction_set.sv \
					$(SRC)/axi_if.sv \
					$(SRC)/cache.sv \
					$(SRC)/tb_cache.sv
					
					

					

# use VHDL_SOURCES for VHDL files

# TOPLEVEL is the name of the toplevel module in your Verilog or VHDL file
TOPLEVEL = tb_cache

# MODULE is the basename of the Python test file
MODULE = test_cache

# include cocotb's make rules to take care of the simulator setup
include $(shell cocotb-config --makefiles)/Makefile.sim