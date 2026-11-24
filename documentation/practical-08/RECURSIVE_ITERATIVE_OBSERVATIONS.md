# Practical 8.4 — Recursive and Iterative Observations

## Traversal

`print1ToNRecursive()` uses its base case `n == 0`, then recurses with `n - 1` and prints while returning. `printNTo1Recursive()` prints before its recursive call.

The iterative traversal functions use loops:

- Ascending traversal increments `i`.
- Descending traversal decrements `i`.

## Number processing

`reverseNumberRecursive()` and `sumOfDigitsRecursive()` use the base case `n == 0`. Their iterative equivalents use `while (n > 0)`.

Actual test evidence:

```text
Number: 12345
Reversed recursive: 54321
Reversed iterative: 54321
Digit sum recursive: 15
Digit sum iterative: 15
```

## Decimal-to-binary conversion

`decimalToBinaryRecursive()` divides by 2 and prints after recursive return. `decimalToBinaryIterative()` stores remainders in an array and prints in reverse.

| Decimal | Recursive | Iterative |
|---:|---|---|
| 0 | `0` | `0` |
| 10 | `1010` | `1010` |
| 13 | `1101` | `1101` |
| 25 | `11001` | `11001` |

## Comparison

| Area | Recursive | Iterative |
|---|---|---|
| Execution | Function calls create and unwind stack frames | Repeated loop statements |
| Readability | Closely expresses decomposition | Uses explicit state and loop conditions |
| Function-call overhead | Present | Not required |
| Base case | Required | Replaced by loop condition |
| Memory | Stack frames vary with recursion depth | Fixed local-loop storage |

No execution times or performance percentages were invented.
