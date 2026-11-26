# Practical 8.3 - Part C: Comparison

For this practical, I used the same sample values for both methods.

- Factorial number: 5
- Factorial result using both methods: 120
- Fibonacci terms: 7
- Fibonacci series using both methods: 0 1 1 2 3 5 8

## Comparison

| Point | Iterative method | Recursive method |
|---|---|---|
| Number of function calls | The function runs and repeats the work using a loop. | The function calls itself until it reaches the base condition. Fibonacci recursion makes more calls because each call can make two more calls. |
| Program readability | The loop steps are easy to follow. | The code can be shorter, but the base condition must be understood. |
| Code complexity | It needs a loop, its condition and its update. | It needs a base condition and a recursive call. |
| Execution flow | The loop repeats and then the function returns. | Calls continue with smaller values. After the base condition, the calls return one by one. |

## My observation

Both methods gave the same answers for the values tested. I found the loop method easier to trace. The recursive method helped me understand how a function can call itself to solve a smaller part of a problem.

This comparison is written separately because Part C of the practical asks for observations. It does not need extra comparison code in the program.
