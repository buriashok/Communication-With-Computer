//syntax of inline function
#include<iostream>
using namespace std;

class oper
{
    public:
    int a,b,s;
   
    void getdata()//inline function in class
    {
       cout<<"Enter the num1: ";
       cin>>a;
       cout<<"Enter the num2: ";
       cin>>b;
    }
    void display();
    
};

inline void oper::display()
{   s=a+b;
    
    cout<<"Sum: "<<s;
}

int main()
{
    oper o1;
    o1.getdata();
    o1.display();
    return 0;
}
