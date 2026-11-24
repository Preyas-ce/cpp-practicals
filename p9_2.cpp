#include <iostream>
#include <iomanip>
#include <cstring>
#include <limits>
using namespace std;

struct Student {
    char enrollment[20];
    char name[50];
    char branch[20];
    int semester;
    float percentage;
    char grade[5];
};

void displayRecords(const Student *basePtr, int count) {
    cout << "\nStudent Records using Address-based Access\n";
    for (int i = 0; i < count; ++i) {
        const Student *current = basePtr + i;
        cout << "Address: " << current << "\n";
        cout << current->enrollment << "  " << current->name << "  "
             << current->branch << "  " << current->semester << "  "
             << fixed << setprecision(2) << current->percentage << "  "
             << current->grade << "\n";
        cout << "--------------------------------------------\n";
    }
}

void displayAcademicSummary(const Student *basePtr, int count) {
    if (basePtr == nullptr || count <= 0) return;
    float total = 0.0f;
    float highest = basePtr->percentage;
    float lowest = basePtr->percentage;
    for (int i = 0; i < count; ++i) {
        float percentage = (basePtr + i)->percentage;
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

    int count = 0;
    cout << "Enter Number of Students: ";
    if (!(cin >> count) || count <= 0) {
        cout << "Invalid number of students.\n";
        return 1;
    }

    if (static_cast<size_t>(count) >
        numeric_limits<size_t>::max() / sizeof(Student)) {
        cout << "Requested allocation is too large.\n";
        return 1;
    }

    Student *students = new(nothrow) Student[count];
    if (students == nullptr) {
        cout << "Dynamic Memory Allocation Failed.\n";
        return 1;
    }

    cout << "Dynamic Memory Allocated Successfully\n";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int i = 0; i < count; ++i) {
        Student *current = students + i;
        cout << "\nStudent " << i + 1 << "\n";
        cout << "Enrollment Number: ";
        cin.getline(current->enrollment, sizeof(current->enrollment));
        cout << "Student Name: ";
        cin.getline(current->name, sizeof(current->name));
        cout << "Branch: ";
        cin.getline(current->branch, sizeof(current->branch));
        cout << "Semester: ";
        if (!(cin >> current->semester) || current->semester < 1 || current->semester > 8) {
            cout << "Invalid semester.\n";
            delete[] students;
            return 1;
        }
        cout << "Percentage: ";
        if (!(cin >> current->percentage) || current->percentage < 0.0f || current->percentage > 100.0f) {
            cout << "Invalid percentage.\n";
            delete[] students;
            return 1;
        }
        cout << "Grade: ";
        cin >> current->grade;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    displayRecords(students, count);
    displayAcademicSummary(students, count);

    cout << "\nDynamic Memory Released Successfully\n";
    delete[] students;
    students = nullptr;
    cout << "Address Variable Reset Successfully\n";
    cout << "--------------------------------------------\n";
    cout << "Program Executed Successfully\n";
    return 0;
}
