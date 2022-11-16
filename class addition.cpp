// creating a class addition
#include <iostream>
using namespace std;
class addition //class name
{
    public: //public data function
    int a, b, c,ans;
   addition()  { //member function
        a = 22;
        b = 30;
        c = 50;
   }
    int product () //member function
    {
    ans=(a*b*c);
        return ans;
    }
};
int main()
{
    addition add;
    int a,b,c;
    int ans;
    add.a=22; //accessing data members and member function using a dot operator
    add.b=30;
    add.c=50;
    ans=add.product();
    {
cout << "The product of the integers is: " <<ans;
}
    return 0;
}