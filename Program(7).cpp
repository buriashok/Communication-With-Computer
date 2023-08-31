#include<iostream>
using namespace std;
int a=5;
int main()
{
	int a=3;
	cout<<a<<endl;//local variable
	cout<<::a;//global variable
	return 0;
}
