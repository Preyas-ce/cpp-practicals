# C++ Practicals

This repository contains C++ practical programs for **CHARUSAT CEUC103: Computer Programming Foundation**.

The official university practical PDF is the authoritative source for practical numbering and requirements.

## Environment

Verified environment:

- Operating system: Windows
- GCC C compiler: MSYS2 UCRT64 GCC 16.2.0
- G++ C++ compiler: MSYS2 UCRT64 G++ 16.2.0
- C++ standard: C++17

GCC and G++ are installed under `C:\msys64\ucrt64\bin`.

Confirm the tools before compiling:

```powershell
where.exe gcc
where.exe g++
gcc --version
g++ --version
```

## Opening the repository in VS Code

1. Open VS Code.
2. Select **File > Open Folder**.
3. Open the repository root:

   ```text
   C:\Users\<username>\Desktop\clone\cpp-practicals
   ```

4. Open the integrated terminal at the repository root.
5. Compile and run one practical file at a time.

## Compiling an individual C++ practical

From the repository root:

```powershell
g++ -std=c++17 -Wall -Wextra -pedantic p7_1.cpp -o p7_1.exe
& .\p7_1.exe
```

Replace `p7_1.cpp` and `p7_1.exe` with the required practical filename.

Example:

```powershell
g++ -std=c++17 -Wall -Wextra -pedantic p11_3.cpp -o p11_3.exe
& .\p11_3.exe
```

## Practical 1 C compilation process

The C source for Practical 1 is in `documentation/practical-01/A.c`.

Compile it directly from the repository root:

```powershell
gcc .\documentation\practical-01\A.c -o .\documentation\practical-01\A.exe
& .\documentation\practical-01\A.exe
```

Generate every intermediate artifact separately:

```powershell
gcc -E .\documentation\practical-01\A.c -o .\documentation\practical-01\A.i
gcc -S .\documentation\practical-01\A.i -o .\documentation\practical-01\A.s
gcc -c .\documentation\practical-01\A.s -o .\documentation\practical-01\A.o
gcc .\documentation\practical-01\A.o -o .\documentation\practical-01\A.exe
& .\documentation\practical-01\A.exe
```

Expected output:

```text
Hello World
```

The intermediate and executable files are:

- `documentation/practical-01/A.c`
- `documentation/practical-01/A.i`
- `documentation/practical-01/A.s`
- `documentation/practical-01/A.o`
- `documentation/practical-01/A.exe`

See [Practical 1 compilation documentation](documentation/practical-01/COMPILATION_PROCESS.md).

## Repository structure

```text
cpp-practicals/
├── p1.cpp ... p11_3.cpp
├── documentation/
│   ├── DOCUMENTATION_CHECKLIST.md
│   ├── practical-01/
│   ├── practical-02/
│   ├── practical-08/
│   ├── practical-09/
│   └── practical-11/
└── README.md
```

Documentation files are stored under `documentation/`. Phase 5 artifact files and observation reports are separate from the C++ source programs.

## Comprehensive practical-to-file mapping

### Practical 1 — C Compilation Process

| Part | Source/artifact | Status |
|---|---|---|
| GCC compilation stages | `documentation/practical-01/A.c`, `A.i`, `A.s`, `A.o`, `A.exe` | Generated and executable |
| Existing C++ practical source | `p1.cpp` | Separate C++ Hello World example; not a replacement for `A.c` |
| Compilation process report | [Practical 1 compilation documentation](documentation/practical-01/COMPILATION_PROCESS.md) | Available |

### Practical 2 — Problem Analysis and Student Registration

| Sub-practical | Source file | Scope |
|---|---|---|
| 2.1 — Problem analysis, algorithm, flowchart | `p2_1.cpp` | Static example implementation |
| 2.2 — Enhanced registration output | `p2_2.cpp` | Project information and student registration |

Documentation:

- [Practical 2.1 problem analysis and design](documentation/practical-02/PROBLEM_ANALYSIS_AND_DESIGN.md)

`p2_1.cpp` uses fixed example values and does not accept runtime input. This limitation remains documented.

### Practical 3 — Programming Paradigms and Operators

| Sub-practical | Source file | Scope |
|---|---|---|
| 3.1 — Academic information | `p3_1.cpp` | Marks, total, average and percentage |
| 3.2 — Operator behavior and coding standards | `p3_2.cpp` | Increment/decrement and sequenced expression demonstration |

### Practical 4 — Decision Making

| Sub-practical | Source file | Scope |
|---|---|---|
| 4.1 — PASS/FAIL using if/else | `p4_1.cpp` | Percentage-based pass/fail |
| 4.2 — Else-if grade ladder | `p4_2.cpp` | Result, grade and performance remark |
| 4.3 — Switch menu and goto operations | `p4_3.cpp` | Menu-driven record and result operations |

### Practical 5 — Iterative Processing

| Sub-practical | Source file | Scope |
|---|---|---|
| 5.1 — Variable subject marks using for | `p5_1.cpp` | Subject count, total, average, percentage, grade |
| 5.2 — Batch registration using while | `p5_2.cpp` | Repeated student registration |

Five nested-loop pattern files and one part of Practical 5.3 are represented as follows:

| Practical 5.3 pattern | Source file |
|---|---|
| 1 — Numeric pattern | `p5_3_1.cpp` |
| 2 — Lowercase alphabet pattern | `p5_3_2.cpp` |
| 3 — Uppercase alphabet pattern | `p5_3_3.cpp` |
| 4 — Right half number triangle | `p5_3_4 (1).cpp` |
| 5 — Full number pyramid | `p5_3_5.cpp` |
| 6 — Full alphabet pyramid | `p5_3_6.cpp` |

The filename `p5_3_4 (1).cpp` is retained exactly because it exists in the repository.

### Practical 6 — Arrays and Matrix Operations

| Sub-practical | Source file | Scope |
|---|---|---|
| 6.1 — One-dimensional participant scores | `p6_1.cpp` | Participant records and summary |
| 6.2 — Search, sort and ranking | `p6_2.cpp` | Participant search and ranking |
| 6.3 — Student array insertion/update/deletion | `p6_3.cpp` | Array record manipulation |
| 6.4 — Part A: matrix multiplication | `p6_4_a.cpp` | Two 3×3 matrices and resultant matrix |
| 6.4 — Part B: merge sorted arrays | `p6_4_b.cpp` | Merge two sorted arrays |

### Practical 7 — String Processing

| Sub-practical | Source file | Scope |
|---|---|---|
| 7.1 — Student string operations | `p7_1.cpp` | Reference, extraction, search and comparison |
| 7.2 — Document Text Analyzer | `p7_2.cpp` | Character-array and standard string operations |

### Practical 8 — Modular and Recursive Functions

| Sub-practical | Source file | Scope |
|---|---|---|
| 8.1 — Modular Student Record Management | `p8_1.cpp` | User-defined academic-report functions |
| 8.2 — Function design and parameter passing | `p8_2.cpp` | Four function categories, call types, scope and overloading |
| 8.3 — Recursive factorial and Fibonacci | `p8_3.cpp` | Iterative/recursive mathematical operations |
| 8.4 — Recursive utility operations | `p8_4.cpp` | Traversal, number processing, binary conversion |

Documentation:

- [Recursive-versus-iterative observations](documentation/practical-08/RECURSIVE_ITERATIVE_OBSERVATIONS.md)

### Practical 9 — Pointers and Memory

| Sub-practical | Source file | Scope |
|---|---|---|
| 9.1 — Memory address explorer | `p9_1.cpp` | Address, indirect access and array traversal |
| 9.2 — Dynamic student records | `p9_2.cpp` | Dynamic allocation, pointer offsets and statistics |
| 9.3 — Memory organization analyzer | `p9_3.cpp` | Stack, heap and multi-level pointers |

Documentation:

- [Dynamic memory observations](documentation/practical-09/DYNAMIC_MEMORY_OBSERVATIONS.md)
- [Memory organization observations](documentation/practical-09/MEMORY_ORGANIZATION_OBSERVATIONS.md)

### Practical 10 — Structures and Unions

| Sub-practical | Source file | Scope |
|---|---|---|
| 10.1 — Composite student structures | `p10_1.cpp` | Nested structures, collections and pointer contact update |
| 10.2 — Structure and union memory | `p10_2.cpp` | sizeof, offsets, padding and union sharing |

### Practical 11 — Error Handling and File Organization

| Sub-practical | Source file | Scope |
|---|---|---|
| 11.1 — Execution and error-handling analyzer | `p11_1.cpp` | Memory, aliasing, overflow, division and file errors |
| 11.2 — File organization utility | `p11_2.cpp` | Create, write, read, backup and random access |
| 11.3 — Persistent student record files | `p11_3.cpp` | Sequential student records and backup |

Documentation:

- [Execution and error observations](documentation/practical-11/EXECUTION_ERROR_OBSERVATIONS.md)
- [File-operation observations](documentation/practical-11/FILE_OPERATIONS_OBSERVATIONS.md)
- [Student-file observations](documentation/practical-11/STUDENT_FILE_OBSERVATIONS.md)

## Documentation checklist

See [Phase 5 documentation checklist](documentation/DOCUMENTATION_CHECKLIST.md) for the complete documentation inventory.

Documentation currently available for:

- Practical 1 compilation process
- Practical 2.1 problem analysis and design
- Practical 8.4 recursive/iterative comparison
- Practical 9.2 dynamic memory
- Practical 9.3 memory organization
- Practical 11.1 execution and error handling
- Practical 11.2 file operations
- Practical 11.3 student file management

## Outstanding university requirements

The following PDF requirements remain unavailable or incompletely verifiable in this environment:

- Ubuntu 18.04.6, Turbo C and Code::Blocks platform comparisons
- A practical report or viva evidence outside source code
- Any physical printed submission, screenshots or faculty evaluation

No unavailable result is represented as completed.

`p2_1.cpp` remains a static example implementation. It uses fixed values rather than interactive input.

## General verification

Compile a practical with strict GCC warnings:

```powershell
g++ -std=c++17 -Wall -Wextra -pedantic p9_2.cpp -o p9_2.exe
& .\p9_2.exe
```

For C Practical 1:

```powershell
gcc .\documentation\practical-01\A.c -o .\documentation\practical-01\A.exe
& .\documentation\practical-01\A.exe
```
