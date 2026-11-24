#include <iostream>
#include <string>
using namespace std;

size_t manualLength(const string &text) {
    size_t length = 0;
    while (text[length] != '\0') {
        ++length;
    }
    return length;
}

void manualCopy(string &destination, const string &source) {
    destination = source;
}

int manualCompare(const string &first, const string &second) {
    size_t length = first.length();
    if (second.length() < length) {
        length = second.length();
    }
    for (size_t i = 0; i < length; ++i) {
        if (first[i] < second[i]) return -1;
        if (first[i] > second[i]) return 1;
    }
    if (first.length() < second.length()) return -1;
    if (first.length() > second.length()) return 1;
    return 0;
}

int main() {
    cout << "********************************************" << endl;
    cout << "     STUDENT RECORD MANAGEMENT SYSTEM" << endl;
    cout << "********************************************" << endl;

    string enrollmentNumber;
    cout << "Enter Enrollment Number : ";
    cin >> enrollmentNumber;
    cin.ignore();

    cout << "Enter Student Name : ";
    string studentName;
    getline(cin, studentName);

    cout << "Enter Branch : ";
    string branch;
    getline(cin, branch);

    string studentReference = studentName + "-" + enrollmentNumber;

    cout << "--------------------------------------------" << endl;
    cout << "Student Reference" << endl;
    cout << studentReference << endl;

    size_t spacePosition = studentName.find(' ');
    string firstName;
    string lastName;
    if (spacePosition == string::npos) {
        firstName = studentName;
        lastName = "";
    } else {
        firstName = studentName.substr(0, spacePosition);
        lastName = studentName.substr(spacePosition + 1);
    }

    cout << "--------------------------------------------" << endl;
    cout << "First Name" << endl;
    cout << firstName << endl;
    cout << "Last Name" << endl;
    cout << lastName << endl;

    cout << "--------------------------------------------" << endl;
    cout << "Enter Keyword : ";
    string keyword;
    getline(cin, keyword);

    if (!keyword.empty() && studentName.find(keyword) != string::npos) {
        cout << "Keyword Found." << endl;
    } else {
        cout << "Keyword Not Found." << endl;
    }

    cout << "--------------------------------------------" << endl;
    cout << "Manual and Standard String Operations" << endl;
    cout << "Manual String Length : " << manualLength(studentName) << endl;
    cout << "Standard String Length : " << studentName.length() << endl;

    string copiedName;
    manualCopy(copiedName, studentName);
    cout << "Manual Copy : " << copiedName << endl;
    cout << "Manual Comparison with Enrollment Text : "
         << manualCompare(studentName, enrollmentNumber) << endl;
    cout << "Standard Comparison : " << studentName.compare(enrollmentNumber)
         << endl;

    cout << "Manual Concatenation : " << studentName + "-" + enrollmentNumber
         << endl;
    cout << "Standard Concatenation : " << studentReference << endl;

    cout << "Character Traversal : ";
    for (size_t i = 0; i < studentName.length(); ++i) {
        cout << studentName[i];
        if (i + 1 < studentName.length()) cout << ' ';
    }
    cout << endl;

    cout << "--------------------------------------------" << endl;
    cout << "Student Report" << endl;
    cout << "Enrollment Number : " << enrollmentNumber << endl;
    cout << "Student Name      : " << studentName << endl;
    cout << "Branch            : " << branch << endl;
    return 0;
}
