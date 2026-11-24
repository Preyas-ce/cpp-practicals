# Practical 11.1 — Execution and Error-Handling Observations

## Compile-time and run-time memory

Actual output:

```text
Global Variable Value : 100
Local Variable Value  : 200
Dynamic Memory Value  : 300
```

The global and local variables exist from compile-time and stack allocation respectively. The integer allocated with `new` is created at run time.

## Safe overflow demonstration

An `unsigned short` initialized to `65535` is incremented once. The observed result is `0`, demonstrating unsigned modular wraparound rather than undefined signed overflow.

## Pointer aliasing

Two pointers refer to the same integer:

```text
Original Value : 50
Updated Value : 75
Both pointers refer to the same memory location.
```

## Memory release

A dynamic integer is allocated, displayed conceptually, deleted, and reset to `nullptr`.

## Division testing

| Dividend | Divisor | Actual result |
|---:|---:|---|
| 25 | 5 | `Result: 5` |
| 25 | 0 | `Division by Zero is not Allowed` |
| Alphabetic | 0 | `Invalid numeric dividend` |
| 25 | Alphabetic | `Invalid numeric divisor` |

## File testing

Actual observations:

- An existing filename produced `File Opened Successfully`.
- `MissingPhase5.txt` produced `Unable to Open File`.
- An empty filename produced `Unable to Open File: empty file name`.

## Execution observations

Invalid input and file-opening failures return messages and then preserve graceful program termination. Division by zero is checked before division. The program does not intentionally dereference invalid pointers or perform undefined arithmetic overflow.
