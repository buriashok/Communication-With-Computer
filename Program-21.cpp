#include<iostream>
using namespace std;

class ankith
{
	int a,b;
	public:
		ankith()
		{
			cin>>a>>b;
			
		}
void max()
{
if(a>b)	
{
	cout<<"A is Max"<<endl;
}
else
{
	cout<<"B is Max"<<endl;
}
}
~ankith(){
	cout<<"Destructor is working";
}
};
int main()
{
	ankith obj1;
	obj1.max();	
	return 0;
}
