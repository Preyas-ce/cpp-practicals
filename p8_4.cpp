#include <iostream>
using namespace std;

void print1ToNRecursive(int n) {
    if (n == 0) return;
    print1ToNRecursive(n - 1);
    cout << n << " ";
}

void printNTo1Recursive(int n) {
    if (n == 0) return;
    cout << n << " ";
    printNTo1Recursive(n - 1);
}

int reverseNumberRecursive(int n, int reversed) {
    if (n == 0) return reversed;
    return reverseNumberRecursive(n / 10, reversed * 10 + n % 10);
}

int sumOfDigitsRecursive(int n) {
    if (n == 0) return 0;
    return n % 10 + sumOfDigitsRecursive(n / 10);
}

void decimalToBinaryRecursive(int n) {
    if (n == 0) return;
    decimalToBinaryRecursive(n / 2);
    cout << n % 2;
}

int reverseNumberIterative(int n) {
    int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}

int sumOfDigitsIterative(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

void decimalToBinaryIterative(int n) {
    if (n == 0) {
        cout << "0";
        return;
    }

    int binary[32];
    int count = 0;
    while (n > 0) {
        binary[count] = n % 2;
        count++;
        n /= 2;
    }

    for (int i = count - 1; i >= 0; i--) {
        cout << binary[i];
    }
}

int main() {
    int n;
    cout << "Enter a positive integer (N): ";
    if (!(cin >> n) || n <= 0) {
        cout << "Please enter a positive integer greater than 0.\n";
        return 1;
    }

    cout << "Numbers 1 to N using recursion: ";
    print1ToNRecursive(n);
    cout << "\nNumbers N to 1 using recursion: ";
    printNTo1Recursive(n);

    cout << "\nNumbers 1 to N using iteration: ";
    for (int i = 1; i <= n; i++) cout << i << " ";
    cout << "\nNumbers N to 1 using iteration: ";
    for (int i = n; i >= 1; i--) cout << i << " ";

    int number;
    cout << "\n\nEnter a positive integer: ";
    if (!(cin >> number) || number <= 0) {
        cout << "Please enter a positive integer greater than 0.\n";
        return 1;
    }

    cout << "Reversed Number, recursive: " << reverseNumberRecursive(number, 0) << "\n";
    cout << "Reversed Number, iterative: " << reverseNumberIterative(number) << "\n";
    cout << "Sum of Digits, recursive: " << sumOfDigitsRecursive(number) << "\n";
    cout << "Sum of Digits, iterative: " << sumOfDigitsIterative(number) << "\n";

    int decimalNumber;
    cout << "\nEnter a non-negative decimal number: ";
    if (!(cin >> decimalNumber) || decimalNumber < 0) {
        cout << "Please enter a non-negative decimal integer.\n";
        return 1;
    }

    cout << "Binary, recursive: ";
    if (decimalNumber == 0) cout << "0";
    else decimalToBinaryRecursive(decimalNumber);

    cout << "\nBinary, iterative: ";
    decimalToBinaryIterative(decimalNumber);

    cout << "\n\nPart D - Comparative Analysis\n";
    cout << "\n1. Program Readability\n";
    cout << "Recursive: The function calls itself for a smaller value.\n";
    cout << "Iterative: The loop and its update are written in the function.\n";

    cout << "\n2. Execution Flow\n";
    cout << "Recursive: Calls continue until the base condition is reached.\n";
    cout << "Iterative: The loop repeats until its condition becomes false.\n";

    cout << "\n3. Number of Function Calls\n";
    cout << "Recursive: The function is called repeatedly for smaller values.\n";
    cout << "Iterative: The function is called once and repeats using a loop.\n";

    cout << "\n4. Ease of Implementation\n";
    cout << "Recursive: Needs a base condition and a recursive call.\n";
    cout << "Iterative: Needs loop initialization, condition and update.\n";

    return 0;
}
