# Practical 9.2 — Dynamic Memory Observations

## Allocation

`p9_2.cpp` accepts a positive student count, validates overflow limits, and uses `new(nothrow) Student[count]`.

If allocation fails, it prints `Dynamic Memory Allocation Failed` and exits.

## Pointer arithmetic

The program obtains record addresses using:

```cpp
const Student *current = basePtr + i;
```

Actual execution with two records produced addresses separated by one `Student` record size:

```text
Address: 0x23f43486600
Address: 0x23f4348666c
```

Addresses are environment-specific and may change in every run.

## Address-based functions

`displayRecords()` receives `Student *` as a base address and traverses with `basePtr + i`.

`displayAcademicSummary()` receives the same base address and calculates:

- Class average
- Highest percentage
- Lowest percentage

Actual two-record evidence:

```text
Class Average Percentage : 84.50 %
Highest Percentage       : 86.40 %
Lowest Percentage        : 82.60 %
```

## Deallocation

After processing:

```cpp
delete[] students;
students = nullptr;
```

`delete[]` releases the complete dynamically allocated array. Resetting the pointer prevents subsequent accidental use of the old address.

## Observation

Dynamic memory size is decided at runtime, while pointer offset arithmetic provides sequential record access. Address-based functions avoid copying complete student structures. Valid deallocation prevents memory leaks, and resetting the pointer makes stale-address status explicit.
