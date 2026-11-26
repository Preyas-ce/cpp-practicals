# Practical 8.4 - Part D: Comparison

I tried the recursive and iterative methods with the same values. Both methods gave the same answers in the tests.

## Test results

For the number `12345`:

- Reverse using recursion: `54321`
- Reverse using a loop: `54321`
- Sum of digits using recursion: `15`
- Sum of digits using a loop: `15`

For decimal-to-binary conversion:

| Decimal number | Recursive result | Iterative result |
|---:|---|---|
| 0 | `0` | `0` |
| 10 | `1010` | `1010` |
| 13 | `1101` | `1101` |
| 25 | `11001` | `11001` |

## Comparison

| Point | Recursive method | Iterative method |
|---|---|---|
| Program readability | The function calls itself with a smaller value. I need to understand the base condition. | The loop steps are written one by one, so they are easy to follow. |
| Execution flow | The function calls continue until the base condition is reached. Then the calls return. | The loop keeps running while its condition is true. |
| Number of function calls | The recursive function is called again for smaller values. | The loop repeats inside the same function. |
| Ease of implementation | It needs a base condition and a recursive call. | It needs loop initialization, condition and update. |

## My observation

For the examples I tried, both methods gave the same output. I found the iterative method easier to trace because I could follow the loop step by step. Recursion was useful for understanding how a problem can be divided into smaller steps.
