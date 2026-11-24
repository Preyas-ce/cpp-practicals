# Practical 9.3 — Memory Organization Observations

## Stack memory

`localStackVar` is created in stack storage inside `demonstrateStackAndHeap()`. Its value and address are displayed.

Actual run example:

```text
Stack Memory
Local Variable Value : 100
Memory Address       : 0x962fbffb34
```

The address is environment-specific.

## Heap memory

`heapVar` points to dynamically allocated integer storage:

```text
Allocated Value      : 250
Memory Address       : 0x1f3abe22400
```

The program deletes the allocation and sets the pointer to `nullptr`.

## Three-level referencing

`ptr1` points to `originalVal`, `ptr2` points to `ptr1`, and `ptr3` points to `ptr2`. The program accesses the final value using `***ptr3`, which produced `50`.

## Pointer safety

| Pointer situation | Implementation |
|---|---|
| Null | Initialized to `nullptr`; checked before use |
| Uninitialized | Not created or dereferenced; shown only descriptively |
| Dangling | Allocation is deleted and pointer reset to `nullptr` |
| Valid heap | Dereferenced while the allocation is known to exist |

The program does not deliberately dereference an invalid, dangling or uninitialized pointer.
