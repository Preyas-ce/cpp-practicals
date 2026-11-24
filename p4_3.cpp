
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int choice = 0;
    string enrollmentNumber;
    string studentName;
    string branch;
    int semester = 0;
    string mobileNumber;
    int mathematicsMarks = 0;
    int physicsMarks = 0;
    int programmingFoundationMarks = 0;
    bool studentRegistered = false;
    bool marksEntered = false;
    int totalMarks = 0;
    double averageMarks = 0.0;
    double percentage = 0.0;

m:
    cout << "************************************************" << endl;
    cout << "        STUDENT RECORD MANAGEMENT SYSTEM" << endl;
    cout << "************************************************" << endl;

    cout << "1. Register New Student" << endl;
    cout << "2. Display Student Record" << endl;
    cout << "3. Enter Student Marks" << endl;
    cout << "4. Display Academic Result" << endl;
    cout << "5. Exit" << endl;

    cout << "Enter your Choice Number (1-5): ";
    if (!(cin >> choice)) {
        cout << "Invalid choice. Enter a number from 1 to 5." << endl;
        cin.clear();
        cin.ignore(10000, '\n');
        goto m;
    }

    switch (choice)
    {
        case 1:
            cout << "------------------------------------------" << endl;
            cout << "Student Registration" << endl;
            cout << "------------------------------------------" << endl;

            cout << "Enter Enrollment Number : ";
            cin >> enrollmentNumber;
            cin.ignore(10000, '\n');

            cout << "Enter Student Name      : ";
            getline(cin, studentName);

            cout << "Enter Branch            : ";
            cin >> branch;

            cout << "Enter Semester          : ";
            if (!(cin >> semester) || semester < 1 || semester > 8) {
                cout << "Invalid Semester. Enter a value from 1 to 8." << endl;
                cin.clear();
                cin.ignore(10000, '\n');
                goto m;
            }

            cout << "Enter Mobile Number     : ";
            cin >> mobileNumber;

            cin.ignore(10000, '\n');
            studentRegistered = true;
            marksEntered = false;
            mathematicsMarks = 0;
            physicsMarks = 0;
            programmingFoundationMarks = 0;
            cout << "------------------------------------------" << endl;
            cout << "Student Information" << endl;

            cout << "Enrollment Number : " << enrollmentNumber << endl;
            cout << "Student Name      : " << studentName << endl;
            cout << "Branch            : " << branch << endl;
            cout << "Semester          : " << semester << endl;
            cout << "Mobile No.        : " << mobileNumber << endl;

            cout << "Student Registered Successfully!" << endl;
            cout << "------------------------------------------" << endl;

            goto m;


        case 2:
            goto display;


        case 3:
            goto marks;


        case 4:
            goto result;


        case 5:
            cout << "Exiting the program..." << endl;
            return 0;


        default:
            cout << "Choice Not Found!" << endl;
            goto m;
    }


display:
    if (!studentRegistered) {
        cout << "No student record is registered." << endl;
        goto m;
    }

    cout << "------------------------------------------" << endl;
    cout << "Student Record" << endl;
    cout << "------------------------------------------" << endl;

    cout << "Enrollment Number : " << enrollmentNumber << endl;
    cout << "Student Name      : " << studentName << endl;
    cout << "Branch            : " << branch << endl;
    cout << "Semester          : " << semester << endl;
    cout << "Mobile No.        : " << mobileNumber << endl;

    cout << "------------------------------------------" << endl;

    goto m;


marks:
    if (!studentRegistered) {
        cout << "Please register a student first." << endl;
        goto m;
    }

    marksEntered = false;
    mathematicsMarks = 0;
    physicsMarks = 0;
    programmingFoundationMarks = 0;

    cout << "------------------------------------------" << endl;
    cout << "Enter Student Marks" << endl;
    cout << "------------------------------------------" << endl;

    cout << "Enter Mathematics Marks            : ";
    if (!(cin >> mathematicsMarks) ||
        mathematicsMarks < 0 || mathematicsMarks > 100) {
        cout << "Invalid Mathematics marks. Enter a value from 0 to 100." << endl;
        cin.clear();
        cin.ignore(10000, '\n');
        goto m;
    }

    cout << "Enter Physics Marks                : ";
    if (!(cin >> physicsMarks) ||
        physicsMarks < 0 || physicsMarks > 100) {
        cout << "Invalid Physics marks. Enter a value from 0 to 100." << endl;
        cin.clear();
        cin.ignore(10000, '\n');
        goto m;
    }

    cout << "Enter Programming Foundation Marks : ";
    if (!(cin >> programmingFoundationMarks) ||
        programmingFoundationMarks < 0 || programmingFoundationMarks > 100) {
        cout << "Invalid Programming Foundation marks. Enter a value from 0 to 100." << endl;
        cin.clear();
        cin.ignore(10000, '\n');
        goto m;
    }

    marksEntered = true;
    cout << "Marks Entered Successfully!" << endl;
    cout << "------------------------------------------" << endl;

    goto m;


result:
    if (!studentRegistered) {
        cout << "Please register a student first." << endl;
        goto m;
    }

    if (!marksEntered) {
        cout << "No student marks are entered." << endl;
        goto m;
    }

    totalMarks = mathematicsMarks + physicsMarks + programmingFoundationMarks;
    averageMarks = totalMarks / 3.0;
    percentage = averageMarks;

    cout << "------------------------------------------" << endl;
    cout << "Academic Result" << endl;
    cout << "------------------------------------------" << endl;

    cout << fixed << setprecision(2);
    cout << "Total Marks   : " << totalMarks << endl;
    cout << "Average Marks : " << averageMarks << endl;
    cout << "Percentage    : " << percentage << "%" << endl;

    if (percentage >= 90.0)
    {
        cout << "Result        : PASS" << endl;
        cout << "Grade         : O" << endl;
        cout << "Performance   : Outstanding" << endl;
    }
    else if (percentage >= 80.0)
    {
        cout << "Result        : PASS" << endl;
        cout << "Grade         : A+" << endl;
        cout << "Performance   : Excellent" << endl;
    }
    else if (percentage >= 70.0)
    {
        cout << "Result        : PASS" << endl;
        cout << "Grade         : A" << endl;
        cout << "Performance   : Very Good" << endl;
    }
    else if (percentage >= 60.0)
    {
        cout << "Result        : PASS" << endl;
        cout << "Grade         : B+" << endl;
        cout << "Performance   : Good" << endl;
    }
    else if (percentage >= 50.0)
    {
        cout << "Result        : PASS" << endl;
        cout << "Grade         : B" << endl;
        cout << "Performance   : Satisfactory" << endl;
    }
    else if (percentage >= 40.0)
    {
        cout << "Result        : PASS" << endl;
        cout << "Grade         : C" << endl;
        cout << "Performance   : Needs Improvement" << endl;
    }
    else
    {
        cout << "Result        : FAIL" << endl;
        cout << "Grade         : F" << endl;
        cout << "Performance   : Failed" << endl;
    }

    cout << "------------------------------------------" << endl;

    goto m;
}

