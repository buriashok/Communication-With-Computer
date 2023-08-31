// outside the class definitions
#include<iostream>
using namespace std;
class B
{
int roll;
char name[10];
public:
void getdata();
void display();	
};
void B::getdata() 
{
	cout<<"Enter the roll.no: ";
	cin>>roll;
	cout<<"Enter the name: ";
	cin>>name;
}
void B::display() 
{
	cout<<"Your roll.no is "<<roll<<endl;
	cout<<"Your name is "<<name;
}
int main()
{
	B obj1;
	obj1.getdata() ;
	obj1.display() ;
	return 0;
}
