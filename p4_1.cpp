#include <iostream>
using namespace std;
int main(){
    short int m1,m2,m3,Total;
    double p,avg;
    cout<<"************************************************"<<endl;
    cout<<"     STUDENT RECORD MANAGEMENT SYSTEM"<<endl;
    cout<<"************************************************"<<endl;
    cout<<"------------------------------------------"<<endl;
    cout<<"Academic Summary"<<endl;
    cout<<"------------------------------------------"<<endl;
    Total=m1+m2+m3;
    cout<<"Total:"<<Total<<endl;
    avg= (m1+m2+m3) / 3.0;
    cout<<"Average Marks:"<<avg<<endl;
    p= (m1+m2+m3)/3.0;
    cout<<"Percentage:"<<p<<endl;
    cout<<"------------------------------------------"<<endl;
    cout<<"Academic Result"<<endl;
    cout<<"------------------------------------------"<<endl;
    if(p>=40)
    {
    cout<<"Result:Pass"<<endl;
    cout<<"Congratulations you have successfully Passed!"<<endl;
    }
    else
    {
    cout<<"Result:Fail"<<endl;
    cout<<"Better Luck Next Time!"<<endl;
    cout<<"------------------------------------------";
    }

    return 0;
}