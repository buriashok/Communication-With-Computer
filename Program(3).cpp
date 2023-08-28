#include<iostream>
using namespace std;
class A
{
	int a;
	public:
		void var(int a)
		{
			
			this ->a=a;
		}
		void disp()
		{
			cout<<a;
		}
}o1;

main()
{
	o1.var(30);
	o1.disp();
}
