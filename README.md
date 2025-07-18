# Quine Replicators Project

This repository contains three classic C programming exercises involving self-replicating programs (quines): **Colleen**, **Grace**, and **Sully**. Each program demonstrates different techniques to print or generate its own source code.

---

## 🚀 Programs Overview

### Colleen
- **Executable Name:** `Colleen`  
- **Behavior:** Prints its own source code exactly to standard output.  
- **Requirements:**
  1. Must declare `main()`.  
  2. Contains one additional function besides `main()`.  
  3. Includes two comments: one inside `main()` and one outside.

### Grace
- **Executable Name:** `Grace`  
- **Behavior:** Generates a file named `Grace_kid.c` containing an exact copy of its own source.  
- **Requirements:**
  1. No `main()` function.  
  2. Exactly three `#define` macros.  
  3. One comment in the source.  
  4. Execution triggered by invoking a macro (e.g. via `__attribute__((constructor))` or a custom `_start`).

### Sully
- **Executable Name:** `Sully`  
- **Behavior:** Creates successive source files  
  `Sully_5.c` → `Sully_4.c` → … → `Sully_0.c`, compiles and runs each until the counter is negative.  
- **Requirements:**
  1. An integer counter starts at `5` in the source.  
  2. On each execution, writes `Sully_N.c` with `N` decremented by 1.  
  3. Compiles `Sully_N.c` into `Sully_N` and executes it if `N ≥ 0`.  
  4. Stops when `N < 0`.

