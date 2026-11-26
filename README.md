# CEUC103 C++ Practicals

This repository contains my practical programs for **CEUC103 - Computer Programming Foundation** at CHARUSAT. I have used the practical numbers from the college practical list in the file names.

## How to run a C++ program

You need a C++ compiler such as GCC/G++.

1. Open this folder in VS Code.
2. Open the terminal.
3. Compile one program. For example:

```powershell
g++ -std=c++17 -Wall -Wextra p8_3.cpp -o p8_3.exe
```

4. Run it:

```powershell
.\p8_3.exe
```

Change the file name in the commands when you want to run another practical. Compile one `.cpp` file at a time because each file has its own `main()` function.

## Practical-wise file list

| Practical | Topic | File |
|---|---|---|
| 1 | C program compilation process | `documentation/practical-01/A.c` |
| 1 | Extra C++ Hello World example | `p1.cpp` |
| 2.1 | Student registration and problem analysis | `p2_1.cpp` |
| 2.2 | Student registration with project details | `p2_2.cpp` |
| 3.1 | Student marks, total, average and percentage | `p3_1.cpp` |
| 3.2 | Increment and decrement operators, errors and coding style | `p3_2.cpp` |
| 4.1 | PASS/FAIL using if-else | `p4_1.cpp` |
| 4.2 | Grade using else-if ladder | `p4_2.cpp` |
| 4.3 | Menu using switch-case | `p4_3.cpp` |
| 5.1 | Subject marks using for loop | `p5_1.cpp` |
| 5.2 | Student registration using while loop | `p5_2.cpp` |
| 5.3 | Numeric pattern | `p5_3_1.cpp` |
| 5.3 | Lowercase alphabet pattern | `p5_3_2.cpp` |
| 5.3 | Uppercase alphabet pattern | `p5_3_3.cpp` |
| 5.3 | Right half number triangle | `p5_3_4.cpp` |
| 5.3 | Full number pyramid | `p5_3_5.cpp` |
| 5.3 | Full alphabet pyramid | `p5_3_6.cpp` |
| 6.1 | Participant details using one-dimensional arrays | `p6_1.cpp` |
| 6.2 | Searching, sorting and ranking | `p6_2.cpp` |
| 6.3 | Insert, update and delete student records in an array | `p6_3.cpp` |
| 6.4 Part A | Matrix multiplication | `p6_4_a.cpp` |
| 6.4 Part B | Merge two sorted arrays | `p6_4_b.cpp` |
| 7.1 | Student details and string operations | `p7_1.cpp` |
| 7.2 | Document text analyzer | `p7_2.cpp` |
| 8.1 | Student record program using functions | `p8_1.cpp` |
| 8.2 | Function types, parameter passing, scope and overloading | `p8_2.cpp` |
| 8.3 | Factorial and Fibonacci using loops and recursion | `p8_3.cpp` |
| 8.4 | Recursive number and utility operations | `p8_4.cpp` |
| 9.1 | Memory addresses, pointers and arrays | `p9_1.cpp` |
| 9.2 | Dynamic memory for student records | `p9_2.cpp` |
| 9.3 | Stack, heap and pointer levels | `p9_3.cpp` |
| 10.1 | Structures and student records | `p10_1.cpp` |
| 10.2 | Structure and union memory | `p10_2.cpp` |
| 11.1 | Program execution and error handling | `p11_1.cpp` |
| 11.2 | File operations and random file access | `p11_2.cpp` |
| 11.3 | Student records stored in files | `p11_3.cpp` |

## Practical 1: C compilation

The college practical list asks for a **C program** for the compilation-process exercise. The source file is `documentation/practical-01/A.c`. The C++ file `p1.cpp` is only an extra Hello World example.

From the repository folder, run these commands in PowerShell to create the intermediate files and executable:

```powershell
gcc -E .\documentation\practical-01\A.c -o .\documentation\practical-01\A.i
gcc -S .\documentation\practical-01\A.i -o .\documentation\practical-01\A.s
gcc -c .\documentation\practical-01\A.s -o .\documentation\practical-01\A.o
gcc .\documentation\practical-01\A.o -o .\documentation\practical-01\A.exe
& .\documentation\practical-01\A.exe
```

The expected output is:

```text
Hello World
```

The generated `.exe` file is not stored in GitHub because executable files are ignored by `.gitignore`.

## Extra notes

- [Practical 1 - Compilation process](documentation/practical-01/COMPILATION_PROCESS.md)
- [Practical 2.1 - Problem analysis and design](documentation/practical-02/PROBLEM_ANALYSIS_AND_DESIGN.md)
- [Practical 8.3 - Comparison of iterative and recursive methods](documentation/practical-08/PRACTICAL_8_3_OBSERVATIONS.md)
- [Practical 8.4 - Recursive and iterative observations](documentation/practical-08/RECURSIVE_ITERATIVE_OBSERVATIONS.md)
- [Practical 9.2 - Dynamic memory observations](documentation/practical-09/DYNAMIC_MEMORY_OBSERVATIONS.md)
- [Practical 9.3 - Memory organization observations](documentation/practical-09/MEMORY_ORGANIZATION_OBSERVATIONS.md)
- [Practical 11.1 - Execution and error handling](documentation/practical-11/EXECUTION_ERROR_OBSERVATIONS.md)
- [Practical 11.2 - File operations](documentation/practical-11/FILE_OPERATIONS_OBSERVATIONS.md)
- [Practical 11.3 - Student file handling](documentation/practical-11/STUDENT_FILE_OBSERVATIONS.md)

See [UPDATE_INSTRUCTIONS.md](UPDATE_INSTRUCTIONS.md) for basic steps to update the repository.

## Note

I have mainly used G++ on Windows for compiling the C++ files. I have not tested every program in Ubuntu, Turbo C or Code::Blocks, so I have not added results for those environments.
