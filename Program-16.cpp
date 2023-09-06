#include<iostream>
using namespace std;

void apple(int *ptr)
{
    *ptr=10;
}

void orange(int &ref)
{
    ref =20;
}

int main()
{
    
    int num=5;
    cout<<num<<endl;
    int *ptr=&num;
    *ptr=7;
    cout<<num<<endl;
    int &ref=num;
    ref=9;
    cout<<num<<endl;
    apple(&num);
    cout<<num<<endl;
    orange(num);
    cout<<num<<endl;
    
    return 0;
    
}
