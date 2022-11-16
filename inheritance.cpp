//c++ program to demonstrate single inheritance
#include <iostream>
using namespace std;
//base class 
class Animal {
    public:
    void recreation (){
        cout <<"i can give birth"<<endl;
    }
        void manure (){
            cout<<"i can providr manure"<<endl;
        }
    };
    //derived class
    class Goat:public Animal{
        public :
        void meat (){
            cout<<"i can provide meat"<<endl;
        }
    };
    
    int main (){
        // create object of the class goat
        Goat goat1;
        //calling members of the base class
        goat1.recreation();
        goat1.manure();
        //calling members of the derived class
        goat1.meat();
        return 0;
}