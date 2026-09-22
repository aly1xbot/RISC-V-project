# 🔥 RISC-V CPU from Scratch

**A hands-on, entry-level RISC-V processor — designed, implemented, and verified in SystemVerilog with cocotb + Verilator**

---

## 🤔 The Motivation

RISC-V is reshaping processor design. But most "learn CPU architecture" projects stop at block diagrams. I wanted to go deeper — **write the actual HDL, wire every signal, run real instructions, and watch them execute cycle by cycle**.

This project is the result: an RV32I CPU core built for FPGA experimentation, with a Python-driven verification pipeline.

---

## ⚡ What It Implements

A 32-bit RISC-V CPU implementing the RV32I instruction set, `Zicsr`, and `Zifencei`:

| Instruction Class | Instructions |
|---|---|
| **Load/Store** | `LB`, `LH`, `LW`, `LBU`, `LHU`, `SB`, `SH`, `SW` |
| **R-Type ALU** | `ADD`, `AND`, `OR`, `SUB`, `SLT`, `SLTU`, `XOR`, `SLL`, `SRL`, `SRA` |
| **I-Type Immediate** | `ADDI`, `ANDI`, `ORI`, `XORI`, `SLTI`, `SLTIU`, `SLLI`, `SRLI`, `SRAI` |
| **Branch** | `BEQ`, `BNE`, `BLT`, `BGE`, `BLTU`, `BGEU` |
| **Jump** | `JAL`, `JALR` |
| **Upper Immediate** | `LUI`, `AUIPC` |
| **Memory Ordering** | `FENCE`, `FENCE.TSO`, `FENCE.I` (`Zifencei`) |
| **System/CSR** | `ECALL`, `EBREAK`, `MRET`, `CSRRW`, `CSRRS`, `CSRRC`, `CSRRWI`, `CSRRSI`, `CSRRCI` |

The core covers the standard RV32I instruction encodings and adds the CSR operations needed
to configure its machine-mode trap path.

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
| **Machine CSRs** | `src/csr_file.sv` | Implements `mstatus`, `mtvec`, `mepc`, `mcause`, CSR instructions, trap entry, and `MRET` |
| **Caches** | `src/cache.sv` | 512-byte, 32-line direct-mapped instruction/data cache with four 32-bit words per line |
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

`FENCE`/`FENCE.TSO` use a conservative write-back data-cache flush. `FENCE.I` first flushes
dirty data-cache contents and then invalidates the instruction cache, corresponding to the
ratified `Zifencei` extension.

The CPU handles synchronous exceptions internally. Trap entry records the faulting PC in
`mepc`, records the cause in `mcause`, updates `mstatus`, and redirects execution to the
direct-mode `mtvec` address. `MRET` restores the interrupt-enable state and returns to
`mepc`. The `trap_valid`, `trap_cause`, and `trap_pc` outputs remain available for debug.
Implemented causes include instruction/load/store address misalignment, instruction/load/store
access faults, illegal instructions, breakpoints, and machine-mode environment calls.

The instruction and data caches retain a 512-byte capacity, organized as 32 direct-mapped
lines of four words. A miss transfers one 16-byte line. Dirty data lines are evicted as
needed, while `FENCE` and `FENCE.TSO` scan and write back every dirty line.

---

## 🔮 What's Next

- Multi-cycle / pipelined upgrade
- Interrupt sources, delegation, and additional privilege levels
- FPGA SoC integration and board-level memory/peripheral mapping
- RV32M (multiply/divide) extension

---

*Built with SystemVerilog, Verilator, cocotb, and Python. Zero vendor IP. Pure RISC-V.*
