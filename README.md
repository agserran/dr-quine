Quine Replicators Project

This repository contains three classic C programming exercises involving self-replicating programs (quines): Colleen, Grace, and Sully. Each program demonstrates different techniques to print or generate their own source code.
🚀 Programs Overview

1. Colleen

Executable Name: Colleen

Behavior: Prints its own source code exactly to standard output.

Requirements:

Must declare main().

Contains one additional function besides main().

Includes two comments: one inside main() and one outside.

2. Grace

Executable Name: Grace

Behavior: Generates a file named Grace_kid.c containing an exact copy of its own source.

Requirements:

No main() function.

Exactly three #define macros.

One comment in the source.

Execution triggered by invoking a macro (using __attribute__((constructor)) or a custom _start).

3. Sully

Executable Name: Sully

Behavior: Creates successive source files Sully_5.c → Sully_4.c → … → Sully_0.c, compiles and runs each until the counter is negative.

Requirements:

An integer counter starts at 5 in the source.

On each execution, writes Sully_N.c with N decremented by 1.

Compiles Sully_N.c into Sully_N and executes it if N ≥ 0.

Stops when N < 0.
