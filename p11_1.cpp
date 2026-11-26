#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int globalVal = 100;

int main() {
    cout << "********************************************\n";
    cout << " PROGRAM EXECUTION & ERROR HANDLING ANALYZER\n";
    cout << "********************************************\n";

    int localVal = 200;
    int *dynamicVal = new int(300);

    cout << "\nCompile-time and Run-time Memory\n";
    cout << "Global Variable Value : " << globalVal << "\n";
    cout << "Local Variable Value  : " << localVal << "\n";
    cout << "Dynamic Memory Value  : " << *dynamicVal << "\n";

    delete dynamicVal;
    dynamicVal = nullptr;

    cout << "\nLow-level Error Demonstration\n";
    unsigned short overflowTest = 65535;
    overflowTest++;
    cout << "Unsigned Short 65535 + 1 wraps to : " << overflowTest << "\n";
    cout << "This shows unsigned wraparound.\n";

    cout << "\nPointer Aliasing\n";
    int sharedTarget = 50;
    int *ptrA = &sharedTarget;
    int *ptrB = &sharedTarget;
    cout << "Original Value: " << *ptrA << "\n";
    *ptrB = 75;
    cout << "Updated Value : " << *ptrA << "\n";
    cout << "Both pointers refer to the same memory location.\n";

    cout << "\nMemory Leak (Conceptual Demonstration)\n";
    int *temporarilyAllocated = new int(400);
    cout << "Dynamic Memory Allocated\n";
    delete temporarilyAllocated;
    temporarilyAllocated = nullptr;
    cout << "Memory Released Successfully\n";

    cout << "\nArithmetic Operation\n";
    int dividend = 0;
    int divisor = 0;

    cout << "Enter Dividend: ";
    if (!(cin >> dividend)) {
        cout << "Error: Invalid numeric dividend.\n";
        return 1;
    }

    cout << "Enter Divisor: ";
    if (!(cin >> divisor)) {
        cout << "Error: Invalid numeric divisor.\n";
        return 1;
    }

    if (divisor == 0) {
        cout << "Error: Division by Zero is not Allowed.\n";
    } else {
        cout << "Result: " << dividend / divisor << "\n";
    }

    cout << "\nFile Operation\n";
    cout << "Enter File Name: ";
    cin.ignore(10000, '\n');

    string filename;
    getline(cin, filename);

    if (filename.empty()) {
        cout << "Unable to Open File: empty file name.\n";
    } else {
        ifstream inputFile(filename.c_str());

        if (!inputFile.is_open()) {
            cout << "Unable to Open File: " << filename << "\n";
        } else {
            cout << "File Opened Successfully: " << filename << "\n";
            inputFile.close();
        }
    }

    cout << "\nProgram Executed Successfully\n";
    return 0;
}
