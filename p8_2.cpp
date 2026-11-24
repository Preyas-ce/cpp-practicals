#include <iostream>
#include <string>
using namespace std;

int globalScore = 100;

void printWelcome();
void printSum(int firstNumber, int secondNumber);
int getFixedScore();
int addNumbers(int firstNumber, int secondNumber);
void modifyByValue(int score);
void modifyByReference(int &score);

void displayStudentDetails(const string &name);
void displayStudentDetails(const string &name, int semester);
void displayStudentDetails(const string &name, int semester,
                           const string &mobileNumber);
void displayStudentDetails(const string &name, const string &branch);

void printWelcome() {
    cout << "Welcome to the Function Design Analyzer" << endl;
}

void printSum(int firstNumber, int secondNumber) {
    cout << "Arguments and no return: "
         << firstNumber << " + " << secondNumber
         << " = " << firstNumber + secondNumber << endl;
}

int getFixedScore() {
    return 85;
}

int addNumbers(int firstNumber, int secondNumber) {
    return firstNumber + secondNumber;
}

void modifyByValue(int score) {
    score = 150;
    cout << "Inside call by value: score = " << score << endl;
}

void modifyByReference(int &score) {
    score = 150;
    cout << "Inside call by reference: score = " << score << endl;
}

void displayStudentDetails(const string &name) {
    cout << "Student: " << name << endl;
}

void displayStudentDetails(const string &name, int semester) {
    cout << "Student: " << name << ", Semester: " << semester << endl;
}

void displayStudentDetails(const string &name, int semester,
                           const string &mobileNumber) {
    cout << "Student: " << name << ", Semester: " << semester
         << ", Mobile: " << mobileNumber << endl;
}

void displayStudentDetails(const string &name, const string &branch) {
    cout << "Student: " << name << ", Branch: " << branch << endl;
}

int main() {
    cout << "********************************************" << endl;
    cout << "     FUNCTION DESIGN AND PARAMETER ANALYZER " << endl;
    cout << "********************************************" << endl;

    cout << "\nPart A - Four Function Categories" << endl;
    printWelcome();

    printSum(10, 20);

    int fixedScore = getFixedScore();
    cout << "No arguments and return value: fixed score = "
         << fixedScore << endl;

    int calculatedScore = addNumbers(30, 55);
    cout << "Arguments and return value: 30 + 55 = "
         << calculatedScore << endl;

    cout << "\nPart B - Call by Value and Call by Reference" << endl;
    int valueScore = 100;
    cout << "Call by value before: " << valueScore << endl;
    modifyByValue(valueScore);
    cout << "Call by value after: " << valueScore << endl;

    int referenceScore = 100;
    cout << "Call by reference before: " << referenceScore << endl;
    modifyByReference(referenceScore);
    cout << "Call by reference after: " << referenceScore << endl;

    cout << "\nPart C - Scope and Visibility" << endl;
    cout << "Global variable visible in main: " << globalScore << endl;
    int localScore = 200;
    cout << "Local variable in main: " << localScore << endl;

    {
        int blockScore = 300;
        cout << "Block variable visible inside block: " << blockScore << endl;
        int globalScore = 400;
        cout << "Shadowing: local block globalScore = " << globalScore << endl;
    }

    cout << "Global variable after block: " << globalScore << endl;
    cout << "Block variable is not visible outside its block" << endl;

    cout << "\nPart D - Function Overloading" << endl;
    displayStudentDetails("Amit Patel");
    displayStudentDetails("Amit Patel", 1);
    displayStudentDetails("Amit Patel", 1, "9876543210");
    displayStudentDetails("Amit Patel", "CE");

    cout << "\nThe compiler selects the overload from the argument types "
            "and argument count." << endl;

    return 0;
}
