#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string enrollmentNumber;
    string studentName;
    string branch;
    int semester;
    string mobileNumber;
    int mathematicsMarks;
    int physicsMarks;
    int programmingFoundationMarks;

    cout << "************************************************" << endl;
    cout << "     STUDENT RECORD MANAGEMENT SYSTEM" << endl;
    cout << "************************************************" << endl;
    cout << "Software Version : 1.1" << endl;
    cout << "------------------------------------------" << endl;
    cout << "Student Registration" << endl;
    cout << "------------------------------------------" << endl;

    cout << "Enter Enrollment Number : ";
    cin >> enrollmentNumber;
    cin.ignore();
    cout << "Enter Student Name      : ";
    getline(cin, studentName);
    cout << "Enter Branch            : ";
    cin >> branch;
    cout << "Enter Semester          : ";
    cin >> semester;
    cout << "Enter Mobile Number     : ";
    cin >> mobileNumber;

    cout << "------------------------------------------" << endl;
    cout << "Academic Information" << endl;
    cout << "------------------------------------------" << endl;
    cout << "Enter Mathematics Marks                  : ";
    cin >> mathematicsMarks;
    cout << "Enter Physics Marks                      : ";
    cin >> physicsMarks;
    cout << "Enter Programming Foundation Marks      : ";
    cin >> programmingFoundationMarks;

    const int totalMarks =
        mathematicsMarks + physicsMarks + programmingFoundationMarks;
    const double averageMarks = totalMarks / 3.0;
    const double percentage = averageMarks;

    cout << "------------------------------------------" << endl;
    cout << "Academic Summary" << endl;
    cout << "------------------------------------------" << endl;
    cout << "Total Marks    : " << totalMarks << endl;
    cout << fixed << setprecision(2);
    cout << "Average Marks  : " << averageMarks << endl;
    cout << "Percentage     : " << percentage << "%" << endl;

    cout << "------------------------------------------" << endl;
    cout << "Student Information" << endl;
    cout << "------------------------------------------" << endl;
    cout << "Enrollment Number : " << enrollmentNumber << endl;
    cout << "Student Name      : " << studentName << endl;
    cout << "Branch            : " << branch << endl;
    cout << "Semester          : " << semester << endl;
    cout << "Mobile Number     : " << mobileNumber << endl;

    return 0;
}
