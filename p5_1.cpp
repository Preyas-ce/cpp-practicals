#include <iostream>
using namespace std;
int main() {
	short int marks;
	double Total;
	double avg,p;
	short int n,i,j;
	cout<<"Enter No. Of Subjects:"<<endl;
	cin>>n;
	for (i=1; i<=n; i++)
	{
		cout<<"Enter Marks Of Subject"<<i<<":";
		cin>>marks;
		Total=Total+marks;
	}
	avg = Total / n;
	p = Total / (n * 100) * 100;

	cout<<"------------------------------------------"<<endl;
	cout<<"Academic Result"<<endl;
	cout<<"------------------------------------------"<<endl;

	cout << "Total Marks : " << Total << endl;
	cout << "Average Marks : " << avg << endl;
	cout << "Percentage : " << p << "%" << endl;
	if(p>=90)
	{
		cout<<"Result:Pass"<<endl;
		cout<<"Grade:O"<<endl;
		cout<<"Performance:Outstanding"<<endl;
		cout<<"Congratulations you have successfully Passed!"<<endl;
	}

	else if (p<89  || p>80)
	{


		cout<<"Result:Pass"<<endl;
		cout<<"Grade:A+"<<endl;
		cout<<"Performance:Excellent"<<endl;
		cout<<"Congratulations you have successfully Passed!"<<endl;
	}

	else if (p<79  || p>70)
	{


		cout<<"Result:Pass"<<endl;
		cout<<"Grade:A"<<endl;
		cout<<"Performance:Very Good"<<endl;
		cout<<"Congratulations you have successfully Passed!"<<endl;
	}

	else if (p<69  || p>60)
	{


		cout<<"Result:Pass"<<endl;
		cout<<"Grade:B+"<<endl;
		cout<<"Performance:Good"<<endl;
		cout<<"Congratulations you have successfully Passed!"<<endl;
	}

	else if (p<59  || p>50)
	{


		cout<<"Result:Pass"<<endl;
		cout<<"Grade:B"<<endl;
		cout<<"Performance:Satisfactory"<<endl;
		cout<<"Congratulations you have successfully Passed!"<<endl;
	}

	else if (p<49  || p>40)
	{


		cout<<"Result:Pass"<<endl;
		cout<<"Grade:C"<<endl;
		cout<<"Performance:Needs Improvement"<<endl;
		cout<<"Congratulations you have successfully Passed!"<<endl;
	}

	else
	{



		cout<<"Result:Fail"<<endl;
		cout<<"Grade:F"<<endl;
		cout<<"Better Luck Next Time!"<<endl;
	}
	cout<<"------------------------------------------";
}












