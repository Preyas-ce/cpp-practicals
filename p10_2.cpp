#include <iostream>
#include <iomanip>
#include <cstddef>

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
    cout << "Member char a size : " << sizeof(CompositeA::a) << " Bytes" << endl;
    cout << "Member double b size : " << sizeof(CompositeA::b) << " Bytes" << endl;
    cout << "Member int c size : " << sizeof(CompositeA::c) << " Bytes" << endl;
    cout << "Member size sum : "
         << sizeof(CompositeA::a) + sizeof(CompositeA::b) + sizeof(CompositeA::c)
         << " Bytes" << endl;
    cout << "Offsets: a=" << offsetof(CompositeA, a)
         << ", b=" << offsetof(CompositeA, b)
         << ", c=" << offsetof(CompositeA, c) << endl;
    cout << "--------------------------------------------" << endl << endl;

    cout << "Composite Data Type B" << endl;
    cout << "Size : " << sizeof(CompositeB) << " Bytes" << endl;
    cout << "Member double b size : " << sizeof(CompositeB::b) << " Bytes" << endl;
    cout << "Member int c size : " << sizeof(CompositeB::c) << " Bytes" << endl;
    cout << "Member char a size : " << sizeof(CompositeB::a) << " Bytes" << endl;
    cout << "Member size sum : "
         << sizeof(CompositeB::b) + sizeof(CompositeB::c) + sizeof(CompositeB::a)
         << " Bytes" << endl;
    cout << "Offsets: b=" << offsetof(CompositeB, b)
         << ", c=" << offsetof(CompositeB, c)
         << ", a=" << offsetof(CompositeB, a) << endl;
    cout << "--------------------------------------------" << endl << endl;

    cout << "Padding and Alignment Observed" << endl;
    cout << "--------------------------------------------" << endl << endl;

    // Part C
    SharedMemory u;
    cout << "Union size : " << sizeof(u) << " Bytes" << endl;
    cout << "Integer member size : " << sizeof(u.intVal) << " Bytes" << endl;
    cout << "Float member size : " << sizeof(u.floatVal) << " Bytes" << endl;
    cout << "Character member size : " << sizeof(u.charVal) << " Bytes" << endl;
    cout << "Integer/float/character addresses are: "
         << static_cast<void*>(&u.intVal) << ", "
         << static_cast<void*>(&u.floatVal) << ", "
         << static_cast<void*>(&u.charVal) << endl;

    u.intVal = 120;
    cout << "Shared Memory Representation" << endl;
    cout << "Active member - Integer Value : " << u.intVal << endl;

    u.floatVal = 120.00f;
    cout << fixed << setprecision(2);
    cout << "Active member - Floating Value : " << u.floatVal << endl;
    cout << "Inactive integer interpretation is not retained as 120" << endl;

    u.charVal = 'x';
    cout << "Active member - Character Value : " << u.charVal << endl;
    cout << "Inactive integer and float interpretations are no longer valid"
         << endl << endl;

    u.floatVal = 120.50f;
    cout << "After Assigning Floating Value Again" << endl;
    cout << "Active member - Floating Value : " << u.floatVal << endl;
    cout << "Character is no longer the active member" << endl;
    cout << "--------------------------------------------" << endl << endl;

    // Part D
    cout << "Trade-off Analysis" << endl << endl;
    cout << "Structure" << endl;
    cout << "CompositeA: " << sizeof(CompositeA)
         << " bytes; CompositeB: " << sizeof(CompositeB) << " bytes" << endl;
    cout << "Separate Memory for Every Member" << endl;
    cout << "Suitable for Storing Complete Records" << endl;
    cout << "--------------------------------------------" << endl << endl;

    cout << "Union" << endl;
    cout << "SharedMemory: " << sizeof(SharedMemory)
         << " bytes (largest member)" << endl;
    cout << "Shared Memory for All Members" << endl;
    cout << "Suitable for Memory-efficient Applications" << endl;
    cout << "--------------------------------------------" << endl;

    cout << "Program Executed Successfully" << endl;
    return 0;
}