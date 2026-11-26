#include <iostream>
#include <iomanip>
using namespace std;

struct Student {
    char enrollment[20];
    char name[50];
    char branch[20];
    int semester;
    float percentage;
    char grade[5];
};

void displayRecords(Student *students, int count) {
    cout << "\nStudent Records using Address-based Access\n";
    for (int i = 0; i < count; i++) {
        Student *current = students + i;
        cout << "Address: " << current << "\n";
        cout << current->enrollment << "  " << current->name << "  "
             << current->branch << "  " << current->semester << "  "
             << fixed << setprecision(2) << current->percentage << "  "
             << current->grade << "\n";
        cout << "--------------------------------------------\n";
    }
}

void displayAcademicSummary(Student *students, int count) {
    float total = 0;
    float highest = students[0].percentage;
    float lowest = students[0].percentage;

    for (int i = 0; i < count; i++) {
        float percentage = (students + i)->percentage;
        total += percentage;
        if (percentage > highest) highest = percentage;
        if (percentage < lowest) lowest = percentage;
    }

    cout << "\nAcademic Summary\n";
    cout << fixed << setprecision(2);
    cout << "Class Average Percentage : " << total / count << " %\n";
    cout << "Highest Percentage       : " << highest << " %\n";
    cout << "Lowest Percentage        : " << lowest << " %\n";
}

int main() {
    cout << "********************************************\n";
    cout << "      STUDENT RECORD MANAGEMENT SYSTEM      \n";
    cout << "********************************************\n";

    int count;
    cout << "Enter Number of Students: ";
    if (!(cin >> count) || count <= 0) {
        cout << "Invalid number of students.\n";
        return 1;
    }

    Student *students = new Student[count];
    cout << "Dynamic Memory Allocated Successfully\n";
    cin.ignore();

    for (int i = 0; i < count; i++) {
        Student *current = students + i;
        cout << "\nStudent " << i + 1 << "\n";
        cout << "Enrollment Number: ";
        cin.getline(current->enrollment, 20);
        cout << "Student Name: ";
        cin.getline(current->name, 50);
        cout << "Branch: ";
        cin.getline(current->branch, 20);

        cout << "Semester: ";
        if (!(cin >> current->semester) || current->semester < 1 || current->semester > 8) {
            cout << "Invalid semester.\n";
            delete[] students;
            return 1;
        }

        cout << "Percentage: ";
        if (!(cin >> current->percentage) || current->percentage < 0 || current->percentage > 100) {
            cout << "Invalid percentage.\n";
            delete[] students;
            return 1;
        }

        cout << "Grade: ";
        cin >> current->grade;
        cin.ignore();
    }

    displayRecords(students, count);
    displayAcademicSummary(students, count);

    delete[] students;
    cout << "\nDynamic Memory Released Successfully\n";
    cout << "Program Executed Successfully\n";
    return 0;
}
