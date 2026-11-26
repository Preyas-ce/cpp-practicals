#include <iostream>
using namespace std;

// Factorial using a loop
int factorialIterative(int n) {
    int fact = 1;

    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
}

// Factorial using recursion
int factorialRecursive(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }

    return n * factorialRecursive(n - 1);
}

// Fibonacci using a loop
void fibonacciIterative(int terms) {
    int first = 0;
    int second = 1;

    for (int i = 0; i < terms; i++) {
        cout << first << " ";

        int next = first + second;
        first = second;
        second = next;
    }
}

// Find one Fibonacci number using recursion
int fibonacciRecursive(int n) {
    if (n <= 1) {
        return n;
    }

    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

int main() {
    // Sample values for testing
    int number = 5;
    int terms = 7;

    cout << "FACTORIAL" << endl;
    cout << "Using loop      : " << factorialIterative(number) << endl;
    cout << "Using recursion : " << factorialRecursive(number) << endl;

    cout << endl;
    cout << "FIBONACCI SERIES" << endl;

    cout << "Using loop      : ";
    fibonacciIterative(terms);

    cout << endl;
    cout << "Using recursion : ";
    for (int i = 0; i < terms; i++) {
        cout << fibonacciRecursive(i) << " ";
    }

    cout << endl;
    return 0;
}
