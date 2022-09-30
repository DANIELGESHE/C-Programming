// Program to determine the bonus given to employees
#include <iostream>
using namespace std;
int main() {
    int salary,service,bonus;
    cout<<"enter your basic salary"<<endl;
    cin>>salary;
    cout<<"enter your years of service"<<endl;
    cin>>service;
    if (service>=10,bonus=salary*0.1)
    {
        cout<<"your bonus is"<< salary*0.1<<endl;
    }
   else if (service>=6&&service<=10,bonus=salary*0.08)
{
     cout<<"your bonus is"<< salary*0.08<<endl;
    } 
    else if (service<6,bonus=salary*0.050)
 {
     cout<<"your bonus is"<< salary*0.05<<endl;
 }
    return 0;
}