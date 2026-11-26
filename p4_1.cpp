#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int mathematicsMarks = 0;
    int physicsMarks = 0;
    int programmingFoundationMarks = 0;
    int totalMarks = 0;
    double averageMarks = 0.0;
    double percentage = 0.0;

    cout << "************************************************" << endl;
    cout << "     STUDENT RECORD MANAGEMENT SYSTEM" << endl;
    cout << "************************************************" << endl;
    cout << "------------------------------------------" << endl;
    cout << "Academic Summary" << endl;
    cout << "------------------------------------------" << endl;

    cout << "Enter Mathematics Marks : ";
    if (!(cin >> mathematicsMarks) || mathematicsMarks < 0 || mathematicsMarks > 100) {
        cout << "Invalid Mathematics marks. Enter a value from 0 to 100." << endl;
        return 1;
    }

    cout << "Enter Physics Marks : ";
    if (!(cin >> physicsMarks) || physicsMarks < 0 || physicsMarks > 100) {
        cout << "Invalid Physics marks. Enter a value from 0 to 100." << endl;
        return 1;
    }

    cout << "Enter Programming Foundation Marks : ";
    if (!(cin >> programmingFoundationMarks) ||
        programmingFoundationMarks < 0 || programmingFoundationMarks > 100) {
        cout << "Invalid Programming Foundation marks. Enter a value from 0 to 100." << endl;
        return 1;
    }

    totalMarks = mathematicsMarks + physicsMarks + programmingFoundationMarks;
    averageMarks = totalMarks / 3.0;
    percentage = averageMarks;

    cout << fixed << setprecision(2);
    cout << "Total Marks   : " << totalMarks << endl;
    cout << "Average Marks : " << averageMarks << endl;
    cout << "Percentage    : " << percentage << "%" << endl;
    cout << "------------------------------------------" << endl;
    cout << "Academic Result" << endl;
    cout << "------------------------------------------" << endl;

    if (percentage >= 40.0) {
        cout << "Result: PASS" << endl;
        cout << "Congratulations, you have passed!" << endl;
    } else {
        cout << "Result: FAIL" << endl;
        cout << "Better luck next time!" << endl;
    }

    cout << "------------------------------------------" << endl;
    return 0;
}
