// program to check the largest of three numbers
#include <iostream>
using namespace std;
int main ()
{
    int num1,num2,num3;
    cout<<"enter three numbers"<<endl;
    cin>>num1;
     cin>>num2;
       cin>>num3;
    if (num1>num2&&num1>num3)
    {
        cout<<"num1 is the largest"<<endl;
    }
    else if (num2>num1&&num2>num3)
    {
        cout<<"num2 is the largest"<<endl;
    }
    else if (num3>num1&&num3>num2)
    {
        cout<<"num3 is the largest"<<endl;
    }
    return 0;
}