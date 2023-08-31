 #include<iostream>
using namespace std;

union Bill
{
    int num;
    float cost;
    char symbol;
};

int main()
{
    Bill item;
    item.num=243;
    item.cost=45.32;
    item.symbol = '#';
    cout<<item.num<<endl;
    cout<<item.cost<<endl;
    cout<<item.symbol;
    
    return 0;
}
