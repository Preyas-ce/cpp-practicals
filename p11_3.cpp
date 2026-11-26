#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

struct Student {
    string enrollment;
    string name;
    string branch;
    int semester;
    float percentage;
    string grade;
};

int main() {
    const int MAX_STUDENTS = 100;
    Student students[MAX_STUDENTS];
    const string recordsFile = "StudentRecords.txt";
    const string backupFile = "BackupStudentRecords.txt";

    cout << "********************************************" << endl;
    cout << "      STUDENT RECORD MANAGEMENT SYSTEM      " << endl;
    cout << "********************************************" << endl << endl;

    int n;
    cout << "Enter Number of Students: ";
    if (!(cin >> n) || n <= 0 || n > MAX_STUDENTS) {
        cout << "Enter a number from 1 to 100." << endl;
        return 1;
    }

    ofstream outFile(recordsFile);
    if (!outFile.is_open()) {
        cout << "Could not create " << recordsFile << endl;
        return 1;
    }

    cin.ignore();
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Enrollment Number: ";
        cin >> students[i].enrollment;
        cin.ignore();
        cout << "Student Name: ";
        getline(cin, students[i].name);
        cout << "Branch: ";
        cin >> students[i].branch;
        cout << "Semester: ";
        if (!(cin >> students[i].semester) || students[i].semester < 1 || students[i].semester > 8) {
            cout << "Invalid semester." << endl;
            outFile.close();
            return 1;
        }
        cout << "Percentage: ";
        if (!(cin >> students[i].percentage) || students[i].percentage < 0 || students[i].percentage > 100) {
            cout << "Invalid percentage." << endl;
            outFile.close();
            return 1;
        }
        cout << "Grade: ";
        cin >> students[i].grade;

        outFile << students[i].enrollment << "\n"
                << students[i].name << "\n"
                << students[i].branch << "\n"
                << students[i].semester << "\n"
                << fixed << setprecision(2) << students[i].percentage << "\n"
                << students[i].grade << "\n";

        if (!outFile) {
            cout << "Error while writing student record." << endl;
            outFile.close();
            return 1;
        }
    }

    outFile.close();
    if (!outFile) {
        cout << "Error while closing the student records file." << endl;
        return 1;
    }
    cout << "\nStudent Records Stored Successfully" << endl;

    ifstream inFile(recordsFile);
    if (!inFile.is_open()) {
        cout << "Could not open " << recordsFile << " for reading." << endl;
        return 1;
    }

    cout << "\nReading Student Records" << endl;
    Student student;
    while (inFile >> student.enrollment) {
        inFile.ignore();
        getline(inFile, student.name);
        if (!(inFile >> student.branch >> student.semester >> student.percentage >> student.grade)) {
            cout << "Error while reading a student record." << endl;
            inFile.close();
            return 1;
        }

        cout << "Enrollment: " << student.enrollment << endl;
        cout << "Name: " << student.name << endl;
        cout << "Branch: " << student.branch << endl;
        cout << "Semester: " << student.semester << endl;
        cout << fixed << setprecision(2);
        cout << "Percentage: " << student.percentage << endl;
        cout << "Grade: " << student.grade << "\n" << endl;
    }

    if (!inFile.eof() || inFile.bad()) {
        cout << "Error while reading the student records file." << endl;
        inFile.close();
        return 1;
    }
    cout << "End of File Reached Successfully" << endl;
    inFile.close();

    cout << "\nCreating Backup File" << endl;
    ifstream sourceFile(recordsFile);
    ofstream destinationFile(backupFile);
    if (!sourceFile.is_open() || !destinationFile.is_open()) {
        cout << "Backup process could not be started." << endl;
        return 1;
    }

    char character;
    while (sourceFile.get(character)) {
        destinationFile.put(character);
    }

    if (sourceFile.bad() || !destinationFile) {
        cout << "Error while copying the backup file." << endl;
        sourceFile.close();
        destinationFile.close();
        return 1;
    }

    sourceFile.close();
    destinationFile.close();
    if (!destinationFile) {
        cout << "Error while closing the backup file." << endl;
        return 1;
    }

    cout << "Backup Completed Successfully" << endl;
    return 0;
}
