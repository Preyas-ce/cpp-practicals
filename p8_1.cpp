#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Student {
    string enrollment;
    string name;
    string branch;
    int semester;
    int marks[5];
    int totalMarks;
    double percentage;
    string grade;
    string result;
};

void displayHeader();
void acceptStudentDetails(Student &student);
void calculateAcademicResult(Student &student);
void displayStudentReport(const Student &student);

int main() {
    Student student;

    displayHeader();
    acceptStudentDetails(student);
    calculateAcademicResult(student);
    displayStudentReport(student);

    return 0;
}

void displayHeader() {
    cout << "********************************************\n";
    cout << "      STUDENT RECORD MANAGEMENT SYSTEM      \n";
    cout << "********************************************\n\n";
}

void acceptStudentDetails(Student &student) {
    cout << "----------- Student Registration -----------\n";
    cout << "Enter Enrollment Number : ";
    cin >> student.enrollment;

    cout << "Enter Student Name      : ";
    cin.ignore();
    getline(cin, student.name);

    cout << "Enter Branch            : ";
    cin >> student.branch;

    cout << "Enter Semester          : ";
    cin >> student.semester;

    cout << "\nEnter Marks\n";
    for (int i = 0; i < 5; i++) {
        cout << "Subject " << i + 1 << " : ";
        cin >> student.marks[i];
    }
}

void calculateAcademicResult(Student &student) {
    student.totalMarks = 0;

    for (int i = 0; i < 5; i++) {
        student.totalMarks += student.marks[i];
    }

    student.percentage = student.totalMarks / 5.0;

    if (student.percentage >= 90) {
        student.grade = "O";
    } else if (student.percentage >= 80) {
        student.grade = "A+";
    } else if (student.percentage >= 70) {
        student.grade = "A";
    } else if (student.percentage >= 60) {
        student.grade = "B+";
    } else if (student.percentage >= 50) {
        student.grade = "B";
    } else if (student.percentage >= 40) {
        student.grade = "C";
    } else {
        student.grade = "F";
    }

    if (student.percentage >= 40) {
        student.result = "PASS";
    } else {
        student.result = "FAIL";
    }
}

void displayStudentReport(const Student &student) {
    cout << "\n--------------------------------------------\n";
    cout << "Academic Report\n";
    cout << "--------------------------------------------\n";
    cout << "Enrollment Number : " << student.enrollment << "\n";
    cout << "Student Name      : " << student.name << "\n";
    cout << "Branch            : " << student.branch << "\n";
    cout << "Semester          : " << student.semester << "\n";
    cout << "Total Marks       : " << student.totalMarks << "\n";
    cout << fixed << setprecision(2);
    cout << "Percentage        : " << student.percentage << "%\n";
    cout << "Grade             : " << student.grade << "\n";
    cout << "Result            : " << student.result << "\n";
    cout << "--------------------------------------------\n";
}
