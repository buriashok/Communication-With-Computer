#include<iostream>
using namespace std;
int main(){
	void *p;
	int a=10;
	char b='#';
	float w=3.14;
	p=&a;
	cout<<*(int*)p<<endl;
	p=&b;
	cout<<*(char*)p;
}
