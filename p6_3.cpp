#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    const int MAX_STUDENTS = 100;
    string enrollment[MAX_STUDENTS];
    string name[MAX_STUDENTS];
    double percentage[MAX_STUDENTS];
    string grade[MAX_STUDENTS];
    int n;

    cout << "********************************************" << endl;
    cout << "       STUDENT RECORD MANAGEMENT SYSTEM" << endl;
    cout << "********************************************" << endl;

    cout << "\nEnter Number of Students : ";
    if (!(cin >> n) || n < 1 || n > MAX_STUDENTS) {
        cout << "Enter a number from 1 to 100." << endl;
        return 1;
    }

    cout << "\nEnter Student Details" << endl;
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Enter Enrollment Number : ";
        cin >> enrollment[i];
        cout << "Enter Student Name : ";
        cin >> name[i];
        cout << "Enter Percentage : ";
        cin >> percentage[i];
        cout << "Enter Grade : ";
        cin >> grade[i];
    }

    cout << "\n--------------------------------------------" << endl;
    cout << "Current Student Records" << endl;
    cout << "--------------------------------------------" << endl;
    for (int i = 0; i < n; i++) {
        cout << enrollment[i] << " " << name[i] << " "
             << fixed << setprecision(2) << percentage[i] << " "
             << grade[i] << endl;
    }

    cout << "\n--------------------------------------------" << endl;
    cout << "Insert New Student" << endl;
    if (n == MAX_STUDENTS) {
        cout << "Array is full. A new student cannot be inserted." << endl;
        return 1;
    }

    int position;
    cout << "Enter Position (1 to " << n + 1 << ") : ";
    if (!(cin >> position) || position < 1 || position > n + 1) {
        cout << "Invalid insertion position." << endl;
        return 1;
    }
    position--;

    for (int i = n; i > position; i--) {
        enrollment[i] = enrollment[i - 1];
        name[i] = name[i - 1];
        percentage[i] = percentage[i - 1];
        grade[i] = grade[i - 1];
    }

    cout << "Enter Enrollment Number : ";
    cin >> enrollment[position];
    cout << "Enter Student Name : ";
    cin >> name[position];
    cout << "Enter Percentage : ";
    cin >> percentage[position];
    cout << "Enter Grade : ";
    cin >> grade[position];
    n++;
    cout << "\nRecord Inserted Successfully." << endl;

    cout << "\n--------------------------------------------" << endl;
    cout << "Updated Student Records" << endl;
    cout << "--------------------------------------------" << endl;
    for (int i = 0; i < n; i++) {
        cout << enrollment[i] << " " << name[i] << " "
             << fixed << setprecision(2) << percentage[i] << " "
             << grade[i] << endl;
    }

    string searchEnrollment;
    cout << "\n--------------------------------------------" << endl;
    cout << "Update Student Record" << endl;
    cout << "Enter Enrollment Number : ";
    cin >> searchEnrollment;

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (enrollment[i] == searchEnrollment) {
            cout << "Enter New Percentage : ";
            cin >> percentage[i];
            cout << "Enter New Grade : ";
            cin >> grade[i];
            cout << "\nRecord Updated Successfully." << endl;
            found = true;
            break;
        }
    }
    if (!found) cout << "\nStudent Record Not Found." << endl;

    cout << "\n--------------------------------------------" << endl;
    cout << "Delete Student Record" << endl;
    cout << "Enter Position (1 to " << n << ") : ";
    if (!(cin >> position)) {
        cout << "Invalid position." << endl;
        return 1;
    }
    position--;

    if (position >= 0 && position < n) {
        for (int i = position; i < n - 1; i++) {
            enrollment[i] = enrollment[i + 1];
            name[i] = name[i + 1];
            percentage[i] = percentage[i + 1];
            grade[i] = grade[i + 1];
        }
        n--;
        cout << "Record Deleted Successfully." << endl;
    } else {
        cout << "Invalid Position." << endl;
    }

    cout << "\n--------------------------------------------" << endl;
    cout << "Final Student Records" << endl;
    cout << "--------------------------------------------" << endl;
    for (int i = 0; i < n; i++) {
        cout << enrollment[i] << " " << name[i] << " "
             << fixed << setprecision(2) << percentage[i] << " "
             << grade[i] << endl;
    }

    return 0;
}
