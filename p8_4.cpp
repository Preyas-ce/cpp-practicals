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

int reverseNumberRecursive(int n, int reversed = 0) {
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
        binary[count++] = n % 2;
        n /= 2;
    }
    for (int i = count - 1; i >= 0; --i) cout << binary[i];
}

int main() {
    cout << "********************************************\n";
    cout << "         RECURSIVE UTILITY ANALYZER         \n";
    cout << "********************************************\n";

    int n = 0;
    cout << "\nEnter a positive integer (N): ";
    if (!(cin >> n) || n <= 0) {
        cout << "Please enter a positive integer greater than 0.\n";
        return 1;
    }

    cout << "Numbers 1 to N, recursive: ";
    print1ToNRecursive(n);
    cout << "\nNumbers N to 1, recursive: ";
    printNTo1Recursive(n);

    cout << "\n\nNumbers 1 to N, iterative: ";
    for (int i = 1; i <= n; ++i) cout << i << " ";
    cout << "\nNumbers N to 1, iterative: ";
    for (int i = n; i >= 1; --i) cout << i << " ";

    int number = 0;
    cout << "\n\nEnter a positive integer: ";
    if (!(cin >> number) || number <= 0) {
        cout << "Please enter a positive integer greater than 0.\n";
        return 1;
    }

    cout << "Reversed Number, recursive: "
         << reverseNumberRecursive(number) << "\n";
    cout << "Reversed Number, iterative: "
         << reverseNumberIterative(number) << "\n";
    cout << "Sum of Digits, recursive: "
         << sumOfDigitsRecursive(number) << "\n";
    cout << "Sum of Digits, iterative: "
         << sumOfDigitsIterative(number) << "\n";

    int decimalNumber = -1;
    cout << "\nEnter a decimal number: ";
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
    cout << "Traversal: recursion uses stack calls; iteration uses a loop.\n";
    cout << "Number processing: both results match; iteration avoids stack overhead.\n";
    cout << "Binary conversion: both results match; recursion prints from high to low.\n";

    cout << "\nProgram Executed Successfully.\n";
    return 0;
}
