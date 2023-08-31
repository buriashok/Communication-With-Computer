#include<iostream>
using namespace std;
int main()
{
int n,c;
c=0;
cout<<"Enter the number: ";
cin>>n;
for(int i=1;i<n;i++)
{
	if(n/i)
	{
		c++;
	}
}

if(c==2)
{
	cout<<"This is a prime number.";
}
else
{
	cout<<"This number is composite number.";
}

return 0;

}
