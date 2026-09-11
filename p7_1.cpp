#include <iostream>
#include <string>
using namespace std;

int main()
{
    string enrollmentNumber;
    string studentName;
    string branch;
    string keyword;

    cout << "********************************************" << endl;
    cout << "     STUDENT RECORD MANAGEMENT SYSTEM" << endl;
    cout << "********************************************" << endl;

    // Accept student details
    cout << "Enter Enrollment Number : ";
    cin >> enrollmentNumber;

    cin.ignore();

    cout << "Enter Student Name : ";
    getline(cin, studentName);

    cout << "Enter Branch : ";
    getline(cin, branch);

    // Student Reference ID
    string studentReference = studentName + "-" + enrollmentNumber;

    cout << "--------------------------------------------" << endl;
    cout << "Student Reference" << endl;
    cout << studentReference << endl;

    // Extract first and last name
    int spacePosition = studentName.find(' ');

    string firstName;
    string lastName;

    if (spacePosition != string::npos)
    {
        firstName = studentName.substr(0, spacePosition);
        lastName = studentName.substr(spacePosition + 1);
    }
    else
    {
        firstName = studentName;
        lastName = "";
    }

    cout << "--------------------------------------------" << endl;
    cout << "First Name" << endl;
    cout << firstName << endl;

    cout << "Last Name" << endl;
    cout << lastName << endl;

    // Keyword search
    cout << "--------------------------------------------" << endl;
    cout << "Enter Keyword : ";
    getline(cin, keyword);

    if (studentName.find(keyword) != string::npos)
    {
        cout << "Keyword Found." << endl;
    }
    else
    {
        cout << "Keyword Not Found." << endl;
    }

    // Student report
    cout << "--------------------------------------------" << endl;
    cout << "Student Report" << endl;
    cout << "--------------------------------------------" << endl;

    cout << "Enrollment Number : " << enrollmentNumber << endl;
    cout << "Student Name      : " << studentName << endl;
    cout << "Branch            : " << branch << endl;

    return 0;
}