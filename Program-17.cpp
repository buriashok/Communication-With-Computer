#include<iostream>
using namespace std;
int main()
{
    int num=10;
    int *ptr=&num;
    int &ref=num;
    cout<<*ptr<<"\t"<<ref<<endl;
    num=20;
    cout<<*ptr<<"\t"<<ref;
    return 0;
} 
