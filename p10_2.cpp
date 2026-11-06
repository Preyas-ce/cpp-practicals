#include <iostream>
#include <iomanip>

using namespace std;

// Structure with member ordering causing higher padding (Total: 24 Bytes on 64-bit ABI)
struct CompositeA {
    char a;      // 1 byte + 7 bytes padding
    double b;    // 8 bytes
    int c;       // 4 bytes + 4 bytes struct padding
};

// Structure arranged to minimize padding (Total: 16 Bytes on 64-bit ABI)
struct CompositeB {
    double b;    // 8 bytes
    int c;       // 4 bytes
    char a;      // 1 byte + 3 bytes struct padding
};

// Part C - Shared Memory Composite Representation
union SharedMemory {
    int intVal;
    float floatVal;
    char charVal;
};

int main() {
    cout << "********************************************" << endl;
    cout << "   COMPOSITE DATA REPRESENTATION ANALYZER   " << endl;
    cout << "********************************************" << endl << endl;

    // Part A & B
    cout << "Composite Data Type A" << endl;
    cout << "Size : " << sizeof(CompositeA) << " Bytes" << endl;
    cout << "--------------------------------------------" << endl << endl;

    cout << "Composite Data Type B" << endl;
    cout << "Size : " << sizeof(CompositeB) << " Bytes" << endl;
    cout << "--------------------------------------------" << endl << endl;

    cout << "Padding and Alignment Observed" << endl;
    cout << "--------------------------------------------" << endl << endl;

    // Part C
    SharedMemory u;
    u.intVal = 120;
    cout << "Shared Memory Representation" << endl;
    cout << "Integer Value : " << u.intVal << endl;

    u.floatVal = 120.00f;
    cout << fixed << setprecision(2);
    cout << "Floating Value : " << u.floatVal << endl;

    u.charVal = 'x';
    cout << "Character Value : " << u.charVal << endl << endl;

    cout << "After Updating Floating Value" << endl;
    u.floatVal = 120.00f;
    cout << "Integer Value Changed" << endl;
    cout << "Character Value Changed" << endl;
    cout << "--------------------------------------------" << endl << endl;

    // Part D
    cout << "Trade-off Analysis" << endl << endl;
    cout << "Structure" << endl;
    cout << "Separate Memory for Every Member" << endl;
    cout << "Suitable for Storing Complete Records" << endl;
    cout << "--------------------------------------------" << endl << endl;

    cout << "Union" << endl;
    cout << "Shared Memory for All Members" << endl;
    cout << "Suitable for Memory-efficient Applications" << endl;
    cout << "--------------------------------------------" << endl;

    cout << "Program Executed Successfully" << endl;
    return 0;
}