
#include <iostream>
using namespace std;

int main()
{
    int ch;
    string eno, b, name;
    short int sem;
    long long int mno;

    short int m1 = 0, m2 = 0, m3 = 0, Total;
    double avg, p;

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
    cin >> ch;

    switch (ch)
    {
        case 1:
            cout << "------------------------------------------" << endl;
            cout << "Student Registration" << endl;
            cout << "------------------------------------------" << endl;

            cout << "Enter Enrollment Number : ";
            cin >> eno;

            cout << "Enter Student Name      : ";
            cin.ignore();
            getline(cin, name);

            cout << "Enter Branch            : ";
            cin >> b;

            cout << "Enter Semester          : ";
            cin >> sem;

            cout << "Enter Mobile Number     : ";
            cin >> mno;

            cout << "------------------------------------------" << endl;
            cout << "Student Information" << endl;
            

            cout << "Enrollment Number : " << eno << endl;
            cout << "Student Name      : " << name << endl;
            cout << "Branch            : " << b << endl;
            cout << "Semester          : " << sem << endl;
            cout << "Mobile No.        : " << mno << endl;

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
    cout << "------------------------------------------" << endl;
    cout << "Student Record" << endl;
    cout << "------------------------------------------" << endl;

    cout << "Enrollment Number : " << eno << endl;
    cout << "Student Name      : " << name << endl;
    cout << "Branch            : " << b << endl;
    cout << "Semester          : " << sem << endl;
    cout << "Mobile No.        : " << mno << endl;

    cout << "------------------------------------------" << endl;

    goto m;


marks:
    cout << "------------------------------------------" << endl;
    cout << "Enter Student Marks" << endl;
    cout << "------------------------------------------" << endl;

    cout << "Enter Physics Marks                : ";
    cin >> m1;

    cout << "Enter Maths Marks                  : ";
    cin >> m2;

    cout << "Enter Programming Foundation Marks : ";
    cin >> m3;

    cout << "Marks Entered Successfully!" << endl;
    cout << "------------------------------------------" << endl;

    goto m;


result:
    Total = m1 + m2 + m3;

    avg = Total / 3.0;
    p = Total / 3.0;

    cout << "------------------------------------------" << endl;
    cout << "Academic Result" << endl;
    cout << "------------------------------------------" << endl;

    cout << "Total Marks   : " << Total << endl;
    cout << "Average Marks : " << avg << endl;
    cout << "Percentage    : " << p << "%" << endl;

    if (p >= 90 && p <= 100)
    {
        cout << "Result        : PASS" << endl;
        cout << "Grade         : O" << endl;
        cout << "Performance   : Outstanding" << endl;
    }
    else if (p >= 80 && p < 90)
    {
        cout << "Result        : PASS" << endl;
        cout << "Grade         : A+" << endl;
        cout << "Performance   : Excellent" << endl;
    }
    else if (p >= 70 && p < 80)
    {
        cout << "Result        : PASS" << endl;
        cout << "Grade         : A" << endl;
        cout << "Performance   : Very Good" << endl;
    }
    else if (p >= 60 && p < 70)
    {
        cout << "Result        : PASS" << endl;
        cout << "Grade         : B+" << endl;
        cout << "Performance   : Good" << endl;
    }
    else if (p >= 50 && p < 60)
    {
        cout << "Result        : PASS" << endl;
        cout << "Grade         : B" << endl;
        cout << "Performance   : Satisfactory" << endl;
    }
    else if (p >= 40 && p < 50)
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

