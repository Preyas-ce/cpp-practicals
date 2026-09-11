#include <iostream>
using namespace std;
int main(){
    int cpfMarks=70;
    int mathMarks=80;
    int result;
    result = ++cpfMarks + cpfMarks++ + --mathMarks +
++mathMarks - mathMarks--;
cout<<"result:"<<result<<endl;
}
