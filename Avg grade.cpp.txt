// program to get the average grade for five units
#include <iostream>
using namespace std;
int main() 
{
 int maths,eng,french,sci,CRE,avg;
cout<<"enter marks for the five units"<<endl;
cin>>maths>>eng>>french>>sci>>CRE;
avg=(maths+eng+french+sci+CRE)/5;
if (avg>=70&avg<=100)
{
    cout<<"Grade A<<";
}
else if (avg>=60&&avg<=69)
{
    cout<<"Grade B<<";
}
else if (avg>=50&&avg<=59)
{
    cout<<"Grade C<<";
}
else if (avg>=40&&avg<=49)
{
    cout<<"Grade D<<";
}
else if(avg<40)
{
    cout<<"Grade E<<";
}
    return 0;
}