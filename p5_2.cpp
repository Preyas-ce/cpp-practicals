#include <iostream>
using namespace std;

int main()
{

	string eno, b, name;
	short int sem,n,i;
	long long int mno;
	char choice;

	choice = 'Y';
	while (choice == 'Y' || choice == 'y') {





		cout << "************************************************" << endl;
		cout << "        STUDENT RECORD MANAGEMENT SYSTEM" << endl;
		cout << "************************************************" << endl;

		cout<<"Student Registration"<<endl;
		cout << "Enter Enrollment Number : ";
		cin >> eno;


		cout << "Enter Student Name      : ";
		cin.ignore();
		getline(cin, name);


		cout << "Enter Branch            : ";
		cin >> b;


		cout << "Enter Semester          : ";
		cin >> sem;


		cout << "Enter Mobile Number     : ";
		cin >> mno;


		cout << "Enrollment Number : " << eno << endl;
		cout << "Student Name      : " << name << endl;
		cout << "Branch            : " << b << endl;
		cout << "Semester          : " << sem << endl;
		cout << "Mobile No.        : " << mno << endl;
		cout << "------------------------------------------" << endl;


		cout<<"Student Registered Successfully."<<endl;


		cout<<"Register Another Student? (Y/N)"<<":"<<endl;
		cin>>choice;
	}

	cout<<"Returning To Main Menu..."<<endl;
}

