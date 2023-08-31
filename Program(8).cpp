//Inside class definitions
#include<iostream>
using namespace std;
class A
{
	int a,b,s;
	public:
		void getdata()
		{
			cout<<"Enter the num1: ";
			cin>>a;
			cout<<"Enter the num2: ";
			cin>>b;
		}
		
		void display()
		{
			s=a+b;
		cout<<"Sum of the two numbers is: "<<s;	
		}
};
int main()
{
	A obj1;
	obj1.getdata();
	obj1.display();
	return 0;
}
