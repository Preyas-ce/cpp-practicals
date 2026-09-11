#include <iostream>
using namespace std;
int main(){
    int ch;
     string eno,b,name,Option;
    short int sem;
    long long int mno;
    short int m1,m2,m3,Total;
     double avg,p;
 cout<<"************************************************"<<endl;
    cout<<"     STUDENT RECORD MANAGEMENT SYSTEM"<<endl;
    cout<<"************************************************"<<endl;
    cout<<"1. Register New Student"<<endl;
    cout<<"2. Display Student Record"<<endl;
    cout<<"3. Enter Student Marks"<<endl;
    cout<<"4. Display Academic Result"<<endl;
    cout<<"5. Exit"<<endl;

    m:cout<<"Enter your Choice Number(1-5):";
    cin>>ch;
    switch (ch)
    {


    Option 1:Register New Student


    cout<<"------------------------------------------"<<endl;
    cout<<"Student Registration"<<endl;
    cout<<"------------------------------------------"<<endl;
     cout<<"Enter Enrollment Number :";
    cin>>eno;
    cout<<"Enter Student Name      :";
    cin>>name;
    cout<<"Enter Branch            :";
    cin>>b;
    cout<<"Enter Semester          :";
    cin>>sem;
    cout<<"Enter Mobile Number     :";
    cin>>mno;
    cout<<"------------------------------------------"<<endl;
    cout<<"Student Information"<<endl;
    cout<<"------------------------------------------"<<endl;
    cout<<"Enrollment Number :"<<eno<<endl;
    cout<<"Student Name      :"<<name<<endl;
    cout<<"Branch            :"<<b<<endl;
    cout<<"Semester          :"<<sem<<endl;
    cout<<"Mobile No.        :"<<mno<<endl;
    cout<<"Student Registered Successfully!"<<endl;
    cout<<"------------------------------------------"<<endl;
    break;
    goto m;




    Option 2:Display Student Details;

    cout<<"Enrollment Number :26CE001"<<eno<<endl;
    cout<<"Student Name      :Amit Patel"<<name<<endl;
    cout<<"Branch            :CE"<<b<<endl;
    cout<<"Semester          :1"<<sem<<endl;
    cout<<"Mobile No.        :9876543210"<<mno<<endl;
    break;
    goto m;

    Option 3:Academic Marks

    cout<<"Enter Physics Marks               :"<<endl;
    cin>>m1;
    cout<<"Enter Maths Marks                 :"<<endl;
    cin>>m2;
    cout<<"Enter Programming Foundation Marks:"<<endl;
    cin>>m3;
    cout<<"Marks Entered Successfully!";
    break;
    goto m;


    Option 4:Display Academic Result

         Total=m1+m2+m3;
    cout<<"Total:"<<Total<<endl;
    avg= (m1+m2+m3) / 3.0;
    cout<<"Average Marks:"<<avg<<endl;
    p= (m1+m2+m3)/3.0;
    cout<<"Percentage:"<<p<<endl;
    cout<<"------------------------------------------"<<endl;
    cout<<"Academic Result"<<endl;
    cout<<"------------------------------------------"<<endl;
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

    cout<<"------------------------------------------";
    break;
    goto m;


    Option 5:default choice
    cout<<"Choice Not Found";
    }
return 0;

}
