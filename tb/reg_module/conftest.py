import os
import sys
from pathlib import Path

# 添加项目根目录到路径
project_root = Path(__file__).parent.parent.parent
sys.path.insert(0, str(project_root))

def pytest_configure(config):
    # 设置默认环境变量
    os.environ.setdefault("SIM", "verilator")
    os.environ.setdefault("TOPLEVEL", "regfile")
    
    # 设置 Verilog 源文件路径（相对于项目根目录）
    verilog_sources = str(project_root / "src" / "regfile.sv")
    os.environ.setdefault("VERILOG_SOURCES", verilog_sources)
    
    print(f"\n[conftest] Project root: {project_root}")
    print(f"[conftest] Verilog sources: {os.environ['VERILOG_SOURCES']}")
    print(f"[conftest] TOPLEVEL: {os.environ['TOPLEVEL']}")
    print(f"[conftest] SIM: {os.environ['SIM']}\n")
