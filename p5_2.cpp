#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main()
{
    string enrollmentNumber;
    string studentName;
    string branch;
    int semester = 0;
    string mobileNumber;
    char choice = 'Y';
    int registeredStudents = 0;

    while (choice == 'Y' || choice == 'y') {
        cout << "************************************************" << endl;
        cout << "        STUDENT RECORD MANAGEMENT SYSTEM" << endl;
        cout << "************************************************" << endl;
        cout << "Student Registration" << endl;

        cout << "Enter Enrollment Number : ";
        if (!(cin >> enrollmentNumber) || enrollmentNumber.empty()) {
            cout << "Invalid Enrollment Number." << endl;
            return 1;
        }
        cin.ignore(10000, '\n');

        cout << "Enter Student Name      : ";
        getline(cin, studentName);
        if (studentName.empty()) {
            cout << "Invalid Student Name." << endl;
            return 1;
        }

        cout << "Enter Branch            : ";
        cin >> branch;
        if (branch.empty()) {
            cout << "Invalid Branch." << endl;
            return 1;
        }

        cout << "Enter Semester          : ";
        if (!(cin >> semester) || semester < 1 || semester > 8) {
            cout << "Invalid Semester. Enter a value from 1 to 8." << endl;
            return 1;
        }

        cout << "Enter Mobile Number     : ";
        if (!(cin >> mobileNumber) || mobileNumber.empty()) {
            cout << "Invalid Mobile Number." << endl;
            return 1;
        }
        cin.ignore(10000, '\n');

        cout << "------------------------------------------" << endl;
        cout << "Enrollment Number : " << enrollmentNumber << endl;
        cout << "Student Name      : " << studentName << endl;
        cout << "Branch            : " << branch << endl;
        cout << "Semester          : " << semester << endl;
        cout << "Mobile No.        : " << mobileNumber << endl;
        cout << "------------------------------------------" << endl;
        cout << "Student Registered Successfully." << endl;
        ++registeredStudents;

        cout << "Register Another Student? (Y/N): ";
        if (!(cin >> choice)) {
            cout << "Invalid choice. Returning to the Main Menu." << endl;
            choice = 'N';
        } else if (choice != 'Y' && choice != 'y' &&
                   choice != 'N' && choice != 'n') {
            cout << "Invalid choice. Returning to the Main Menu." << endl;
            choice = 'N';
        }
        cin.ignore(10000, '\n');
    }

    cout << "Students registered: " << registeredStudents << endl;
    cout << "Returning To Main Menu..." << endl;
    return 0;
}

