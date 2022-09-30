// program to check voter eligibility 
#include <iostream>
using namespace std;
int main ()
{
    int age;
    cout<<"enter your age"<<endl;
    cin>>age;
    if(age>=18)
    {
        cout<<"eligible to vote"<<endl;
    }
    else
    {
        cout<<"not eligible to vote";
    }
    return 0;
}