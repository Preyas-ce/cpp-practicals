# Practical 1 — C Compilation Process

## Source program

The PDF requires a C `Hello World` program. The C artifact is separate from the existing C++ `p1.cpp`.

```c
#include <stdio.h>

int main(void) {
    printf("Hello World\n");
    return 0;
}
```

## Environment

- Operating system: Windows
- GCC: MSYS2 UCRT64 GCC 16.2.0
- Verification command: `gcc --version`

## Stage commands

```powershell
gcc -E A.c -o A.i
gcc -S A.i -o A.s
gcc -c A.s -o A.o
gcc A.o -o A.exe
.\A.exe
```

## Observed stages

| Stage | Artifact | Result |
|---|---|---|
| Source | `A.c` | C source using `stdio.h` |
| Preprocessing | `A.i` | Header expansion and source preprocessing completed |
| Compilation | `A.s` | Assembly-language output generated |
| Assembly | `A.o` | Relocatable object code generated |
| Linking | `A.exe` | Executable generated |
| Execution | `A.exe` | Printed `Hello World` |

Actual execution output:

```text
Hello World
```

## Stage explanation

- **Preprocessing:** handles `#include`, macros, comments and conditional compilation.
- **Compilation:** translates preprocessed C source into assembly text.
- **Assembly:** converts assembly text into machine/object code.
- **Linking:** combines the object file with required startup and library code.
- **Loading:** loads the executable into memory before process start.
- **Execution:** begins at `main()` and runs the printed-output statement.

## Platform comparison

This environment was able to verify GCC/MSYS2 UCRT64. Ubuntu 18.04.6, Turbo C and Code::Blocks were not available during verification. Therefore, no unsupported claim is made about their actual intermediate output or IDE behavior.
