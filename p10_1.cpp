#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

// Part B - Hierarchical Composite Data Grouping
struct AcademicInfo {
    int semester;
    float percentage;
    string grade;
};

struct ContactInfo {
    string mobileNumber;
    string emailId;
};

// Part A - Composite Data Modeling
struct Student {
    string enrollmentNumber;
    string studentName;
    string branch;
    AcademicInfo academic;
    ContactInfo contact;
};

// Part D - Address-based Data Sharing Functions
void displayStudentDetails(const Student *s) {
    cout << s->enrollmentNumber << " " << s->studentName << " " << s->branch << "\n";
    cout << "Semester: " << s->academic.semester << "\n";
    cout << fixed << setprecision(2);
    cout << "Percentage: " << s->academic.percentage << "\n";
    cout << "Grade: " << s->academic.grade << "\n";
    cout << "Mobile: " << s->contact.mobileNumber << "\n";
    cout << "Email: " << s->contact.emailId << "\n\n";
}

bool updateMobileNumber(Student *student, const string &newMobileNumber) {
    if (student == nullptr) {
        return false;
    }

    if (newMobileNumber.length() != 10) {
        return false;
    }

    for (char digit : newMobileNumber) {
        if (digit < '0' || digit > '9') {
            return false;
        }
    }

    student->contact.mobileNumber = newMobileNumber;
    return true;
}

bool isValidMobileNumber(const string &mobileNumber) {
    if (mobileNumber.length() != 10) {
        return false;
    }

    for (char digit : mobileNumber) {
        if (digit < '0' || digit > '9') {
            return false;
        }
    }

    return true;
}

int main() {
    cout << "********************************************" << endl;
    cout << "      STUDENT RECORD MANAGEMENT SYSTEM      " << endl;
    cout << "********************************************" << endl << endl;

    int n;
    cout << "Enter Number of Students: ";
    if (!(cin >> n) || n <= 0) {
        cout << "Invalid number of students." << endl;
        return 1;
    }

    // Part C - Sequential Collection of Composite Data Types
    vector<Student> students(n);

    for (int i = 0; i < n; ++i) {
        cout << "\nStudent " << (i + 1) << endl;
        cout << "Enrollment Number: ";
        cin >> students[i].enrollmentNumber;
        cout << "Student Name     : ";
        cin.ignore();
        getline(cin, students[i].studentName);
        cout << "Branch           : ";
        cin >> students[i].branch;
        cout << "Semester         : ";
        if (!(cin >> students[i].academic.semester) ||
            students[i].academic.semester < 1 ||
            students[i].academic.semester > 8) {
            cout << "Invalid semester. Enter a value from 1 to 8." << endl;
            return 1;
        }
        cout << "Percentage       : ";
        if (!(cin >> students[i].academic.percentage) ||
            students[i].academic.percentage < 0.0f ||
            students[i].academic.percentage > 100.0f) {
            cout << "Invalid percentage. Enter a value from 0 to 100." << endl;
            return 1;
        }
        cout << "Grade            : ";
        cin >> students[i].academic.grade;
        cout << "Mobile Number    : ";
        cin >> students[i].contact.mobileNumber;
        if (!isValidMobileNumber(students[i].contact.mobileNumber)) {
            cout << "Invalid mobile number. Enter exactly 10 digits." << endl;
            return 1;
        }
        cout << "Email ID         : ";
        cin >> students[i].contact.emailId;
    }

    cout << "\nStudent Records\n" << endl;
    for (int i = 0; i < n; ++i) {
        // Pass by address
        displayStudentDetails(&students[i]);
    }

    if (n > 0) {
        cout << "Update Contact Information" << endl;
        cout << "Enter Student Number (1-" << n << "): ";
        int studentNumber = 0;
        cin >> studentNumber;

        if (studentNumber >= 1 && studentNumber <= n) {
            Student *selectedStudent = &students[studentNumber - 1];
            cout << "Record Before Update" << endl;
            displayStudentDetails(selectedStudent);

            cout << "Enter New Mobile Number: ";
            string newMobileNumber;
            cin >> newMobileNumber;

            if (updateMobileNumber(selectedStudent, newMobileNumber)) {
                cout << "Contact Information Updated Successfully" << endl;
                cout << "Record After Update" << endl;
                displayStudentDetails(selectedStudent);
            } else {
                cout << "Invalid Mobile Number. Enter exactly 10 digits."
                     << endl;
            }
        } else {
            cout << "Invalid Student Number." << endl;
        }
    }

    cout << "Program Executed Successfully" << endl;
    return 0;
}