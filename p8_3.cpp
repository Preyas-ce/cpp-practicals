#include <iostream>
#include <iomanip>

using namespace std;

// Global counter to monitor recursive function calls
int recursionCallCount = 0;

// Part A: Factorial Implementations
long long factorialIterative(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

long long factorialRecursive(int n) {
    recursionCallCount++;
    if (n <= 1) {
        return 1;
    }
    return n * factorialRecursive(n - 1);
}

// Part B: Fibonacci Implementations
void fibonacciIterative(int n) {
    long long first = 0, second = 1, next;
    for (int i = 0; i < n; ++i) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        cout << next << " ";
    }
    cout << endl;
}

long long fibonacciTermRecursive(int n) {
    recursionCallCount++;
    if (n <= 0) return 0;
    if (n == 1) return 1;
    return fibonacciTermRecursive(n - 1) + fibonacciTermRecursive(n - 2);
}

int main() {
    int nFact = 5;
    int nFibo = 7;

    cout << "====================================================" << endl;
    cout << "   RECURSIVE MATHEMATICAL OPERATIONS ANALYZER       " << endl;
    cout << "====================================================" << endl << endl;

    // Part A: Factorial
    cout << "--- Part A: Factorial (N = " << nFact << ") ---" << endl;
    cout << "Iterative Result : " << factorialIterative(nFact) << endl;

    recursionCallCount = 0;
    long long recFact = factorialRecursive(nFact);
    cout << "Recursive Result : " << recFact << endl;
    cout << "Total Recursive Function Calls: " << recursionCallCount << endl << endl;

    // Part B: Fibonacci
    cout << "--- Part B: Fibonacci Series (Terms = " << nFibo << ") ---" << endl;
    cout << "Iterative Generation : ";
    fibonacciIterative(nFibo);

    recursionCallCount = 0;
    cout << "Recursive Generation : ";
    for (int i = 0; i < nFibo; ++i) {
        cout << fibonacciTermRecursive(i) << " ";
    }
    cout << endl;
    cout << "Total Recursive Calls (for " << nFibo << " terms): " << recursionCallCount << endl << endl;

    //Part C: Comparison

    cout << "\n1. Number of Function Calls\n";
    cout << "Iterative: Function is called once and uses loops.\n";
    cout << "Recursive: Function calls itself until the base condition.\n";

    cout << "\n2. Program Readability\n";
    cout << "Iterative: Uses loops and variables.\n";
    cout << "Recursive: Uses a function calling itself.\n";

    cout << "\n3. Code Complexity\n";
    cout << "Iterative: Requires loop initialization, condition and update.\n";
    cout << "Recursive: Requires a base condition and recursive call.\n";

    cout << "\n4. Execution Flow\n";
    cout << "Iterative: Repeats the loop until the condition becomes false.\n";
    cout << "Recursive: Calls continue until the base condition is reached.\n";

    return 0;
}
