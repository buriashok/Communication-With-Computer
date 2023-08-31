#include<iostream>
using namespace std;
struct stud
{
	int roll;
	char name[10];
	char sec[5];
	int fee;
	float CGP;
};
int main()
{
	stud s1;
	cout<<"Enter the Roll.No: ";
	cin>>s1.roll;
	cout<<"Enter the Name: ";
	cin>>s1.name;
	cout<<"Enter the Section name: ";
	cin>>s1.sec;
	cout<<"Enter the fee: ";
	cin>>s1.fee;
	
	cout<<"Enter the CGP: ";
	cin>>s1.CGP;
	
	cout<<"Roll.No: "<<s1.roll<<endl;
	cout<<"Name: "<<s1.name<<endl;
	cout<<"Section: "<<s1.sec<<endl;
	cout<<"Fee: "<<s1.fee<<endl;
	cout<<"CGP: "<<s1.CGP<<endl;	
	return 0;
	
}
