# 🖥️ Process Scheduling Algorithms

A collection of C++ implementations for classic process scheduling algorithms commonly used in operating systems.

---

## 📂 Repository Contents

| File | Description |
|---|---|
| `FCFS.cpp` | First-Come, First-Served scheduling |
| `SJF.cpp` | Shortest Job First scheduling (non-preemptive) |
| `SRTF.cpp` | Shortest Remaining Time First scheduling (preemptive) |
| `README.md` | This documentation file |

---

## 📖 Algorithms Included

- **FCFS (First-Come, First-Served)** — Jobs are processed in the order they arrive.
- **SJF (Shortest Job First)** — Selects the job with the shortest execution time next (non-preemptive).
- **SRTF (Shortest Remaining Time First)** — A preemptive version of SJF: always pick the process with the least remaining time.

---

## 🚀 How to Compile & Run

You need a C++ compiler (e.g. `g++`) to build the code. Below are sample commands:

```bash
# Compile FCFS example
g++ FCFS.cpp -o FCFS

# Run it
./FCFS

# Similarly for SJF
g++ SJF.cpp -o SJF
./SJF

# And for SRTF
g++ SRTF.cpp -o SRTF
./SRTF
