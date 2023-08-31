#include<iostream>
using namespace std;

 
int main()
{
   enum days
    {
        sun,mon,tue,wed,thr,fri,sat
    };
    days day1,day2;
    day1=sun;
    day2=mon;
    
    if(day1<day2)
    {
        cout<<"day1 comes first ";
        cout<<day1<<"\t"<<day2;
    }
    else
    {
        cout<<"day2 comes first";
        cout<<day2<<"\t"<<day1;
    }
    return 0;
}
