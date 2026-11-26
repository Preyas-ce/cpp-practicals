#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct AcademicInfo {
    int semester;
    float percentage;
    string grade;
};

struct ContactInfo {
    string mobileNumber;
    string emailId;
};

struct Student {
    string enrollmentNumber;
    string studentName;
    string branch;
    AcademicInfo academic;
    ContactInfo contact;
};

void displayStudentDetails(Student *student) {
    cout << student->enrollmentNumber << " "
         << student->studentName << " "
         << student->branch << endl;
}

void displayAcademicInformation(Student *student) {
    cout << "Semester: " << student->academic.semester << endl;
    cout << fixed << setprecision(2);
    cout << "Percentage: " << student->academic.percentage << endl;
    cout << "Grade: " << student->academic.grade << endl;
}

bool isValidMobileNumber(string mobileNumber) {
    if (mobileNumber.length() != 10) return false;

    for (int i = 0; i < 10; i++) {
        if (mobileNumber[i] < '0' || mobileNumber[i] > '9') {
            return false;
        }
    }
    return true;
}

bool updateContactInformation(Student *student) {
    string newMobileNumber;
    string newEmailId;

    cout << "Enter New Mobile Number: ";
    cin >> newMobileNumber;
    if (!isValidMobileNumber(newMobileNumber)) {
        return false;
    }

    cout << "Enter New Email ID: ";
    cin >> newEmailId;

    student->contact.mobileNumber = newMobileNumber;
    student->contact.emailId = newEmailId;
    return true;
}

int main() {
    const int MAX_STUDENTS = 100;
    Student students[MAX_STUDENTS];

    cout << "********************************************" << endl;
    cout << "      STUDENT RECORD MANAGEMENT SYSTEM      " << endl;
    cout << "********************************************" << endl << endl;

    int n;
    cout << "Enter Number of Students: ";
    if (!(cin >> n) || n <= 0 || n > MAX_STUDENTS) {
        cout << "Enter a number from 1 to 100." << endl;
        return 1;
    }

    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Enrollment Number: ";
        cin >> students[i].enrollmentNumber;
        cout << "Student Name: ";
        cin.ignore();
        getline(cin, students[i].studentName);
        cout << "Branch: ";
        cin >> students[i].branch;
        cout << "Semester: ";
        if (!(cin >> students[i].academic.semester) ||
            students[i].academic.semester < 1 || students[i].academic.semester > 8) {
            cout << "Invalid semester." << endl;
            return 1;
        }
        cout << "Percentage: ";
        if (!(cin >> students[i].academic.percentage) ||
            students[i].academic.percentage < 0 || students[i].academic.percentage > 100) {
            cout << "Invalid percentage." << endl;
            return 1;
        }
        cout << "Grade: ";
        cin >> students[i].academic.grade;
        cout << "Mobile Number: ";
        cin >> students[i].contact.mobileNumber;
        if (!isValidMobileNumber(students[i].contact.mobileNumber)) {
            cout << "Enter a valid 10-digit mobile number." << endl;
            return 1;
        }
        cout << "Email ID: ";
        cin >> students[i].contact.emailId;
    }

    cout << "\nStudent Records" << endl;
    for (int i = 0; i < n; i++) {
        cout << "--------------------------------------------" << endl;
        displayStudentDetails(&students[i]);
        displayAcademicInformation(&students[i]);
        cout << "Mobile: " << students[i].contact.mobileNumber << endl;
        cout << "Email: " << students[i].contact.emailId << endl;
    }

    cout << "\nUpdate Contact Information" << endl;
    cout << "Enter Student Number (1-" << n << "): ";
    int studentNumber;
    cin >> studentNumber;

    if (studentNumber >= 1 && studentNumber <= n) {
        if (updateContactInformation(&students[studentNumber - 1])) {
            cout << "Contact Information Updated Successfully." << endl;
        } else {
            cout << "Invalid mobile number. Contact information not changed." << endl;
        }
    } else {
        cout << "Invalid Student Number." << endl;
    }

    cout << "\nProgram Executed Successfully" << endl;
    return 0;
}
