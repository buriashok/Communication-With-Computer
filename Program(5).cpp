#include<iostream>
using namespace std;
int main()
{
	int first,second,third,n;
	first=0;
	second=1;
	cout<<"Enter the number of fibonacci terms you want: ";
	cin>>n;
	cout<<first<<" "<<second<<" ";
	for(int i=1;i<n;i++)
	{
		third=first+second;
		first=second;
		second=third;
		cout<<third<<" ";
	}
	return 0;
}
