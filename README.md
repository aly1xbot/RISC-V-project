# 🔥 RISC-V CPU from Scratch

**A hands-on, entry-level RISC-V processor — designed, implemented, and verified in SystemVerilog with cocotb + Verilator**

---

## 🤔 The Motivation

RISC-V is reshaping processor design. But most "learn CPU architecture" projects stop at block diagrams. I wanted to go deeper — **write the actual HDL, wire every signal, run real instructions, and watch them execute cycle by cycle**.

This project is the result: a single-cycle RV32I subset CPU built for FPGA experimentation, with a full Python-driven verification pipeline.

---

## ⚡ What It Implements

A fully functional 32-bit RISC-V CPU supporting a broad subset of the RV32I base ISA:

| Instruction Class | Instructions |
|---|---|
| **Load/Store** | `LW`, `SW` |
| **R-Type ALU** | `ADD`, `AND`, `OR`, `SUB`, `SLT`, `SLTU`, `XOR`, `SLL`, `SRL`, `SRA` |
| **I-Type Immediate** | `ADDI`, `ANDI`, `ORI`, `XORI`, `SLTI`, `SLTIU`, `SLLI`, `SRLI`, `SRAI` |
| **Branch** | `BEQ` |
| **Jump** | `JAL` |
| **Upper Immediate** | `LUI`, `AUIPC` |

That's **25+ distinct instruction encodings** — covering R, I, S, B, J, and U-type formats — each tested with randomised and directed vectors.

---

## 🧱 Architecture

```
┌─────────────────────────────────────────────────┐
│                    CPU (cpu.sv)                  │
│                                                  │
│  ┌──────────┐  ┌──────────┐  ┌───────────────┐  │
│  │  Control │  │ Register │  │  Immediate    │  │
│  │  Unit    │  │ File     │  │  Sign-Extend  │  │
│  │ (cu.sv)  │  │(regfile) │  │ (signext.sv)  │  │
│  └──────────┘  └──────────┘  └───────────────┘  │
│                                                  │
│  ┌──────────┐  ┌──────────────┐  ┌──────────┐  │
│  │   ALU    │  │ Instruction  │  │   Data    │  │
│  │ (alu.sv) │  │   Memory     │  │  Memory   │  │
│  │          │  │ (memory.sv)  │  │(memory.sv)│  │
│  └──────────┘  └──────────────┘  └──────────┘  │
└─────────────────────────────────────────────────┘
```

| Module | File | Role |
|---|---|---|
| **CPU Top** | `src/cpu.sv` | Integrates all datapath + control; PC sequencing, instruction fetch, writeback muxing |
| **Control Unit** | `src/cu.sv` | Main decoder + ALU decoder — translates opcode/funct3/funct7 into all control signals |
| **ALU** | `src/alu.sv` | 10 arithmetic/logical/shift operations with zero-flag output |
| **Register File** | `src/regfile.sv` | 32 × 32-bit registers with async reads, clocked writes, x0 hardwired to zero |
| **Sign Extend** | `src/signext.sv` | Handles I, S, B, J, and U-type immediate encoding patterns |
| **Memory** | `src/memory.sv` | Parameterised unified memory (ROM + RAM), byte-addressed, word-aligned, hex-initialised |

---

## 🧪 Verification

Every module is verified with **cocotb + Verilator** — Python-driven randomised testbenches running SystemVerilog through open-source simulation.

```
tb/
├── cpu/           # Full CPU integration test — 40+ instruction sequence
├── alu_module/    # 1000 random tests per ALU op (add, sub, and, or, xor, slt, sltiu, sll, srl, sra)
├── cu_module/     # Control signal decoding for every opcode + funct3/funct7 combo
├── mem_module/    # Read/write alignment, reset behaviour, hex-init integrity
├── reg_module/    # x0 hardwired-zero, write-enable gating, multi-port read correctness
├── signext_module/ # All 5 immediate formats with positive + negative edge-case coverage
└── testrunner.py  # Unified runner using cocotb get_runner
```

**CPU integration test highlights:** `LW` → `SW` → `ADD` → `AND` → `OR` → `BEQ` (with forward/backward branch & fall-through) → `JAL` (forward/backward) → `ADDI` → `AUIPC` → `LUI` → `SLTI`/`SLTIU` → `XORI` → `ANDI` → `ORI` → `SLLI` → `SRLI` → `SRAI` — a full pipeline smoke test with expected register/memory values asserted at every cycle.

---

## 🛠️ Tech Stack

- **HDL**: SystemVerilog (IEEE 1800)
- **Simulation**: Verilator (open-source cycle-accurate)
- **Verification**: Python + cocotb (cornell verification library)
- **Project Config**: Slang (SystemVerilog language server / build tool)
- **Target**: Entry-level FPGA (project structured for synthesis readiness)

```bash
# Run any module testbench
cd tb/<module>
make

# Or via the unified runner
cd tb && python testrunner.py
```

---

## 💡 Key Learning & Design Choices

- **Single-cycle design** — every instruction completes in one clock. Ideal for understanding the full datapath without pipelining complexity
- **No off-the-shelf IP** — every module is hand-written: no vendor cores, no generated RTL
- **Immediate encoding by hand** — the sign-extend module handles all 5 RISC-V immediate formats from first principles, which turned out to be one of the trickiest parts of RV32I
- **Anti-latch discipline** — default assignments in every `always_comb` block prevent synthesis surprises

---

## 🔮 What's Next

- Multi-cycle / pipelined upgrade
- CSR registers and privilege levels
- AXI or Wishbone bus interface for real FPGA deployment
- RV32M (multiply/divide) extension

---

*Built with SystemVerilog, Verilator, cocotb, and Python. Zero vendor IP. Pure RISC-V.*
