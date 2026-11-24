#include <iostream>
using namespace std;

int main() {
    int cpfMarks = 70;
    int mathMarks = 80;

    cout << "Computer Programming Foundation increment/decrement operations" << endl;
    cout << "CPF marks before ++cpfMarks: " << cpfMarks << endl;
    ++cpfMarks;
    cout << "CPF marks after ++cpfMarks: " << cpfMarks << endl;

    cout << "CPF marks before --cpfMarks: " << cpfMarks << endl;
    --cpfMarks;
    cout << "CPF marks after --cpfMarks: " << cpfMarks << endl;

    cout << "CPF marks before cpfMarks++: " << cpfMarks << endl;
    cpfMarks++;
    cout << "CPF marks after cpfMarks++: " << cpfMarks << endl;

    cout << "CPF marks before cpfMarks--: " << cpfMarks << endl;
    cpfMarks--;
    cout << "CPF marks after cpfMarks--: " << cpfMarks << endl;

    cout << endl;
    cout << "Mathematics increment/decrement operations" << endl;
    cout << "Math marks before ++mathMarks: " << mathMarks << endl;
    ++mathMarks;
    cout << "Math marks after ++mathMarks: " << mathMarks << endl;

    cout << "Math marks before --mathMarks: " << mathMarks << endl;
    --mathMarks;
    cout << "Math marks after --mathMarks: " << mathMarks << endl;

    cout << "Math marks before mathMarks++: " << mathMarks << endl;
    mathMarks++;
    cout << "Math marks after mathMarks++: " << mathMarks << endl;

    cout << "Math marks before mathMarks--: " << mathMarks << endl;
    mathMarks--;
    cout << "Math marks after mathMarks--: " << mathMarks << endl;

    cpfMarks = 70;
    mathMarks = 80;

    cout << endl;
    cout << "Sequenced expression from the PDF values" << endl;
    cout << "Before: CPF = " << cpfMarks << ", Mathematics = " << mathMarks << endl;

    ++cpfMarks;
    int firstValue = cpfMarks;

    int secondValue = cpfMarks++;

    --mathMarks;
    int thirdValue = mathMarks;

    ++mathMarks;
    int fourthValue = mathMarks;

    int fifthValue = mathMarks--;

    const int result =
        firstValue + secondValue + thirdValue + fourthValue - fifthValue;

    cout << "After: CPF = " << cpfMarks << ", Mathematics = " << mathMarks << endl;
    cout << "Sequenced values: " << firstValue << " + " << secondValue
         << " + " << thirdValue << " + " << fourthValue
         << " - " << fifthValue << endl;
    cout << "Result: " << result << endl;
    cout << "The original combined expression was replaced with sequenced "
            "statements to avoid undefined behaviour."
         << endl;

    return 0;
}
