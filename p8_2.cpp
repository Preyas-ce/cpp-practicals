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
void displayScope();
void displayStudentDetails(string name);
void displayStudentDetails(string name, int semester);
void displayStudentDetails(string name, int semester, string mobileNumber);

void printWelcome() {
    cout << "Welcome to the Function Design Program" << endl;
}

void printSum(int firstNumber, int secondNumber) {
    cout << "Function with arguments and no return value: "
         << firstNumber + secondNumber << endl;
}

int getFixedScore() {
    return 85;
}

int addNumbers(int firstNumber, int secondNumber) {
    return firstNumber + secondNumber;
}

void modifyByValue(int score) {
    score = 150;
    cout << "Inside call by value: " << score << endl;
}

void modifyByReference(int &score) {
    score = 150;
    cout << "Inside call by reference: " << score << endl;
}

void displayScope() {
    int localScore = 200;
    cout << "Inside function - global variable: " << globalScore << endl;
    cout << "Inside function - local variable: " << localScore << endl;
}

void displayStudentDetails(string name) {
    cout << "Student Name: " << name << endl;
}

void displayStudentDetails(string name, int semester) {
    cout << "Student Name: " << name << ", Semester: " << semester << endl;
}

void displayStudentDetails(string name, int semester, string mobileNumber) {
    cout << "Student Name: " << name << ", Semester: " << semester
         << ", Mobile Number: " << mobileNumber << endl;
}

int main() {
    cout << "********************************************" << endl;
    cout << "     FUNCTION DESIGN AND PARAMETER PASSING " << endl;
    cout << "********************************************" << endl;

    cout << "\nPart A - Four Function Categories" << endl;
    printWelcome();
    printSum(10, 20);
    cout << "Function without arguments and with return value: "
         << getFixedScore() << endl;
    cout << "Function with arguments and with return value: "
         << addNumbers(30, 55) << endl;

    cout << "\nPart B - Call by Value and Call by Reference" << endl;
    int score = 100;
    cout << "Original value: " << score << endl;
    modifyByValue(score);
    cout << "After call by value: " << score << endl;
    modifyByReference(score);
    cout << "After call by reference: " << score << endl;

    cout << "\nPart C - Scope and Visibility" << endl;
    cout << "Inside main - global variable: " << globalScore << endl;
    int mainLocalScore = 250;
    cout << "Inside main - local variable: " << mainLocalScore << endl;
    displayScope();
    cout << "Back in main - global variable: " << globalScore << endl;

    cout << "\nPart D - Function Overloading" << endl;
    displayStudentDetails("Amit Patel");
    displayStudentDetails("Amit Patel", 1);
    displayStudentDetails("Amit Patel", 1, "9876543210");

    return 0;
}
