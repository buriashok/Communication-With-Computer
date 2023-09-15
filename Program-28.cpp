// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() 
{
    int n=5;
    int a[n];
    int loc=-1;
    int lin_Se;
    cout<<"Enter the elements in the array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element "<<i<<" : ";
        cin>>a[i];
    }
    cout<<"The array before deletion is: ";
    cout<<"[";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"]"<<endl;
    cout<<"Enter the element you want to search: ";
    cin>>lin_Se;
    for(int i=0;i<n;i++)
    {
        if(lin_Se==a[i])
        {
            loc=i;
        }
    }
    
    if(loc==-1)
    {
    cout<<"Element is not found";
    }
    else
    {
    cout<<"The location the element is: "<<loc;
    }
    
return 0;
}
