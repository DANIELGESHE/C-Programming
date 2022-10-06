/// program to display numbers within a user's preferred range and their sum
#include <iostream>
using namespace std;
//the main function from where the program execution begins
int main ()
{
//variable declaration
int i,a,n,sum=0;
//promp user to enter the initial value
cout<<"enter the initial value"<<endl;
cin>>a;
//prompt user to enter the nth value
cout<<"enter the nth value";
cin>>n;
for (i=a;i<=n;i++)
{
    cout <<i<<endl;
    sum+=i;
}
{
//display the sum
    cout<<"The sum is" <<sum<<endl;
}
//program is terminated
return 0;
}