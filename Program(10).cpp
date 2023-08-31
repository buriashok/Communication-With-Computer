//Desomrate the public 
//access modifier
#include<iostream>
using namespace std;
class abc
{
	public:
		double radius,area;
		void CalArea()
		{
			
			cout<<"Enter the radius of circle: ";
			cin>>radius;
			area=3.14*radius*radius;
			cout<<"Area of circle: "<<area;
		}
};
int main()
{
	abc obj1;
	//Accessing public data member outside the class
	obj1.CalArea() ;
	return 0;
}
