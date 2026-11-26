#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numberOfSubjects = 0;
    int marks = 0;
    int totalMarks = 0;

    cout << "Enter number of subjects: ";
    if (!(cin >> numberOfSubjects) || numberOfSubjects <= 0) {
        cout << "Invalid number of subjects. Enter a positive integer." << endl;
        return 1;
    }

    for (int i = 1; i <= numberOfSubjects; i++) {
        cout << "Enter marks of subject " << i << ": ";
        if (!(cin >> marks) || marks < 0 || marks > 100) {
            cout << "Invalid marks for subject " << i
                 << ". Enter a value from 0 to 100." << endl;
            return 1;
        }

        totalMarks = totalMarks + marks;
    }

    double averageMarks = static_cast<double>(totalMarks) / numberOfSubjects;
    double percentage = averageMarks;

    cout << "------------------------------------------" << endl;
    cout << "Academic Result" << endl;
    cout << "------------------------------------------" << endl;
    cout << fixed << setprecision(2);
    cout << "Total Marks   : " << totalMarks << endl;
    cout << "Average Marks : " << averageMarks << endl;
    cout << "Percentage    : " << percentage << "%" << endl;

    if (percentage >= 90) {
        cout << "Result: PASS" << endl;
        cout << "Grade: O" << endl;
        cout << "Performance: Outstanding" << endl;
    } else if (percentage >= 80) {
        cout << "Result: PASS" << endl;
        cout << "Grade: A+" << endl;
        cout << "Performance: Excellent" << endl;
    } else if (percentage >= 70) {
        cout << "Result: PASS" << endl;
        cout << "Grade: A" << endl;
        cout << "Performance: Very Good" << endl;
    } else if (percentage >= 60) {
        cout << "Result: PASS" << endl;
        cout << "Grade: B+" << endl;
        cout << "Performance: Good" << endl;
    } else if (percentage >= 50) {
        cout << "Result: PASS" << endl;
        cout << "Grade: B" << endl;
        cout << "Performance: Satisfactory" << endl;
    } else if (percentage >= 40) {
        cout << "Result: PASS" << endl;
        cout << "Grade: C" << endl;
        cout << "Performance: Needs Improvement" << endl;
    } else {
        cout << "Result: FAIL" << endl;
        cout << "Grade: F" << endl;
        cout << "Performance: Failed" << endl;
    }

    cout << "------------------------------------------" << endl;
    return 0;
}
