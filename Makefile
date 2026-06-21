# RISC-V 处理器项目 Makefile

SIM     = iverilog
SIM_OPTS = -g2012 -Wall
VVP     = vvp
WAVE    = gtkwave
SYNTH   = yosys

SRC_DIR = src
TB_DIR  = tb
SIM_DIR = sim
SYNTH_DIR = synth
REPORT_DIR = report

SRCS = $(wildcard $(SRC_DIR)/*.v)
TBS  = $(wildcard $(TB_DIR)/*.v)

all: simulate

simulate: $(SIM_DIR)/sim.vvp
	$(VVP) $<

$(SIM_DIR)/sim.vvp: $(SRCS) $(TBS)
	mkdir -p $(SIM_DIR)
	$(SIM) $(SIM_OPTS) -o $@ $(SRCS) $(TBS)

wave:
	$(WAVE) $(SIM_DIR)/*.vcd &

synth:
	mkdir -p $(SYNTH_DIR) $(REPORT_DIR)
	$(SYNTH) -p "read_verilog $(SRCS); synth; write_verilog $(SYNTH_DIR)/synth.v" \
	         -p "stat" > $(REPORT_DIR)/synth_report.txt

clean:
	rm -rf $(SIM_DIR)/*.vcd $(SIM_DIR)/*.vvp
	rm -rf $(SYNTH_DIR) $(REPORT_DIR)

help:
	@echo "可用目标:"
	@echo "  simulate  - 运行仿真"
	@echo "  wave      - 查看波形"
	@echo "  synth     - 逻辑综合"
	@echo "  clean     - 清理文件"

.PHONY: all simulate wave synth clean help
