//C++ program to convert temperature from degree celsius to fahrenheit
#include <iostream>
using namespace std;
float temp (float fahrenheit); //function prototype
int main()
{
    float celsius,fahrenheit;
    cout<<"enter the temperature in celsius"<<endl;
cin>>celsius;
fahrenheit=temp(celsius);
cout<<"the temperature in fahrenheit is"<<fahrenheit<<endl;
    return 0;
}
  float temp (float celsius)  
{
    float fahrenheit;
    fahrenheit=(celsius * 9 / 5) + 32;
    return fahrenheit;
}