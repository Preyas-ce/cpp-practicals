#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
   string enrollmentNumber;
   string studentName;
   string branch;
   int semester;
   string mobileNumber;
   int mathematicsMarks;
   int physicsMarks;
   int programmingFoundationMarks;

   cout << "************************************************" << endl;
   cout << "     STUDENT RECORD MANAGEMENT SYSTEM" << endl;
   cout << "************************************************" << endl;
   cout << "Student Registration" << endl;
   cout << "------------------------------------------" << endl;

   cout << "Enter Enrollment Number : ";
   cin >> enrollmentNumber;
   cin.ignore();
   cout << "Enter Student Name      : ";
   getline(cin, studentName);
   cout << "Enter Branch            : ";
   cin >> branch;
   cout << "Enter Semester          : ";
   cin >> semester;
   cout << "Enter Mobile Number     : ";
   cin >> mobileNumber;

   cout << "------------------------------------------" << endl;
   cout << "Academic Information" << endl;
   cout << "------------------------------------------" << endl;
   cout << "Enter Mathematics Marks                  : ";
   cin >> mathematicsMarks;
   cout << "Enter Physics Marks                      : ";
   cin >> physicsMarks;
   cout << "Enter Programming Foundation Marks      : ";
   cin >> programmingFoundationMarks;

   const int totalMarks =
       mathematicsMarks + physicsMarks + programmingFoundationMarks;
   const double averageMarks = totalMarks / 3.0;
   const double percentage = averageMarks;

   string result;
   string grade;
   string performanceRemark;

   if (percentage >= 40.0) {
       result = "PASS";
   } else {
       result = "FAIL";
   }

   if (percentage >= 90.0) {
       grade = "O";
       performanceRemark = "Outstanding";
   } else if (percentage >= 80.0) {
       grade = "A+";
       performanceRemark = "Excellent";
   } else if (percentage >= 70.0) {
       grade = "A";
       performanceRemark = "Very Good";
   } else if (percentage >= 60.0) {
       grade = "B+";
       performanceRemark = "Good";
   } else if (percentage >= 50.0) {
       grade = "B";
       performanceRemark = "Satisfactory";
   } else if (percentage >= 40.0) {
       grade = "C";
       performanceRemark = "Needs Improvement";
   } else {
       grade = "F";
       performanceRemark = "Failed";
   }

   cout << "------------------------------------------" << endl;
   cout << "Student Information" << endl;
   cout << "------------------------------------------" << endl;
   cout << "Enrollment Number : " << enrollmentNumber << endl;
   cout << "Student Name      : " << studentName << endl;
   cout << "Branch            : " << branch << endl;
   cout << "Semester          : " << semester << endl;
   cout << "Mobile Number     : " << mobileNumber << endl;

   cout << "------------------------------------------" << endl;
   cout << "Academic Report" << endl;
   cout << "------------------------------------------" << endl;
   cout << fixed << setprecision(2);
   cout << "Total Marks       : " << totalMarks << endl;
   cout << "Average Marks     : " << averageMarks << endl;
   cout << "Percentage        : " << percentage << "%" << endl;
   cout << "Result            : " << result << endl;
   cout << "Grade             : " << grade << endl;
   cout << "Performance Remark: " << performanceRemark << endl;

   return 0;
}
