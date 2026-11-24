#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <vector>
#include <limits>

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
    cout << "********************************************" << endl;
    cout << "      STUDENT RECORD MANAGEMENT SYSTEM      " << endl;
    cout << "********************************************" << endl << endl;

    const string recordsFile = "StudentRecords.txt";
    const string backupFile = "BackupStudentRecords.txt";

    // Part A - Create and Write Student Records
    ofstream outFile(recordsFile);
    if (!outFile.is_open()) {
        cerr << "Error: Could not create " << recordsFile << endl;
        return 1;
    }
    cout << recordsFile << " Created Successfully\n" << endl;

    int n;
    cout << "Enter Number of Students: ";
    if (!(cin >> n) || n <= 0) {
        cout << "Invalid number of students." << endl;
        return 1;
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<Student> list(n);
    for (int i = 0; i < n; ++i) {
        cout << "\nStudent " << (i + 1) << endl;
        cout << "Enrollment Number: ";
        if (!(cin >> list[i].enrollment)) {
            cout << "Invalid enrollment number." << endl;
            return 1;
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Student Name: ";
        getline(cin, list[i].name);
        cout << "Branch: ";
        cin >> list[i].branch;
        cout << "Semester: ";
        if (!(cin >> list[i].semester) ||
            list[i].semester < 1 || list[i].semester > 8) {
            cout << "Invalid semester." << endl;
            return 1;
        }
        cout << "Percentage: ";
        if (!(cin >> list[i].percentage) ||
            list[i].percentage < 0.0f || list[i].percentage > 100.0f) {
            cout << "Invalid percentage." << endl;
            return 1;
        }
        cout << "Grade: ";
        cin >> list[i].grade;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        // Writing structured records to file
        outFile << list[i].enrollment << "\n"
                << list[i].name << "\n"
                << list[i].branch << "\n"
                << list[i].semester << "\n"
                << fixed << setprecision(2) << list[i].percentage << "\n"
                << list[i].grade << "\n";
        if (!outFile) {
            cout << "Error: Could not write student record " << i + 1 << "." << endl;
            outFile.close();
            return 1;
        }
    }
    outFile.close();
    cout << "\nStudent Records Stored Successfully\n" << endl;

    // Part B - Read and Display Student Records
    ifstream inFile(recordsFile);
    if (!inFile.is_open()) {
        cerr << "Error: Could not open " << recordsFile << " for reading." << endl;
        return 1;
    }

    cout << "Reading " << recordsFile << endl;
    Student s;
    while (inFile >> s.enrollment) {
        inFile.ignore();
        getline(inFile, s.name);
        inFile >> s.branch >> s.semester >> s.percentage >> s.grade;

        cout << "Enrollment: " << s.enrollment << endl;
        cout << "Name: " << s.name << endl;
        cout << "Branch: " << s.branch << endl;
        cout << "Semester: " << s.semester << endl;
        cout << fixed << setprecision(2);
        cout << "Percentage: " << s.percentage << endl;
        cout << "Grade: " << s.grade << "\n" << endl;
    }

    if (inFile.eof()) {
        cout << "End of File Reached Successfully\n" << endl;
    }
    inFile.close();

    // Part C - Backup Student Records
    cout << "Creating " << backupFile << endl;
    ifstream srcFile(recordsFile);
    ofstream destFile(backupFile);

    if (!srcFile.is_open() || !destFile.is_open()) {
        cerr << "Error: Backup process failed." << endl;
        return 1;
    }

    destFile << srcFile.rdbuf();
    srcFile.close();
    destFile.close();

    cout << "Backup Completed Successfully\n" << endl;
    cout << "Program Executed Successfully" << endl;

    return 0;
}