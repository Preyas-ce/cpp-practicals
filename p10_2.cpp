#include <iostream>
#include <iomanip>
using namespace std;

struct Product {
    int productId;
    char category;
    double price;
};

// Same members arranged in a different order.
struct ProductOrderA {
    int productId;
    char category;
    double price;
};

struct ProductOrderB {
    char category;
    double price;
    int productId;
};

union SharedValue {
    int integerValue;
    float floatValue;
    char characterValue;
};

int main() {
    cout << "********************************************" << endl;
    cout << "       STRUCTURE AND UNION DEMONSTRATION    " << endl;
    cout << "********************************************" << endl;

    cout << "\nPart A - Product Structure" << endl;
    cout << "Size of product ID: " << sizeof(Product::productId) << " Bytes" << endl;
    cout << "Size of category: " << sizeof(Product::category) << " Bytes" << endl;
    cout << "Size of price: " << sizeof(Product::price) << " Bytes" << endl;
    cout << "Total size of Product structure: " << sizeof(Product) << " Bytes" << endl;

    // Part B - Padding and Alignment"
    cout << "Size of ProductOrderA: " << sizeof(ProductOrderA) << " Bytes" << endl;
    cout << "Size of ProductOrderB: " << sizeof(ProductOrderB) << " Bytes" << endl;
    cout << "Both structures contain the same members in a different order." << endl;
    cout << "The compiler may add padding to align the members in memory." << endl;

    //Part C - Union Shared Memory
    SharedValue value;
    cout << "Size of union: " << sizeof(SharedValue) << " Bytes" << endl;

    value.integerValue = 120;
    cout << "Integer value: " << value.integerValue << endl;

    value.floatValue = 120.50f;
    cout << fixed << setprecision(2);
    cout << "Float value: " << value.floatValue << endl;
    cout << "The float value is stored in the same memory used by the integer." << endl;

    value.characterValue = 'x';
    cout << "Character value: " << value.characterValue << endl;
    cout << "The character value now uses the shared memory." << endl;

    //Part D - Structure and Union Comparison
    cout << "Structure size: " << sizeof(Product) << " Bytes" << endl;
    cout << "Union size: " << sizeof(SharedValue) << " Bytes" << endl;
    cout << "Structure: Each member has its own memory space." << endl;
    cout << "Union: All members share the same memory space." << endl;

    return 0;
}
