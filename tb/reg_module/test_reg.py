from cocotb_test.simulator import run

def test_reg():
    run(
        verilog_sources=["../../src/regfile.sv"],
        toplevel="regfile",
        module="regfile_verification",
        simulator="verilator",
        build_dir="sim_build",
        waves=True,
        extra_args=["--trace"],  # 如果需要更多编译选项
)
