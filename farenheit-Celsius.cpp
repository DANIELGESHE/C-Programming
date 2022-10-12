//C++ program to convert temperature from fahrenheit to degree Celsius 
#include <iostream>
using namespace std;
float temp (float celsius); //functions prototype
int main()
{
    float celsius,fahrenheit;
    cout<<"enter the temperature in fahrenheit"<<endl;
cin>>fahrenheit;
celsius=temp(fahrenheit); //function calling
cout<<"the temperature in celsius is"<<celsius<<endl;
    return 0;
}
  float temp (float fahrenheit)  //function definition
{
    float celsius;
    celsius=0.556*(fahrenheit-32);
    return celsius;
}