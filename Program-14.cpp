#include<iostream>
using namespace std;

enum year
{
    january,february,march,april,may,june,july,
    august,september,october,november,december
};

int main()
{
    year current;
    current=september;
    cout<<"Current month number is: "<<current+1;
    return 0;
}
