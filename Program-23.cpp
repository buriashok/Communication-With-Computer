//Insertion of an element at end position. .
#include <iostream>
using namespace std;
int main()
{
    int n=5,k,i;
    int a[n];
    cout<<"Enter the elements in the array: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"Enter element "<<i<<" : ";
        cin>>a[i];
    }
    cout<<"The array before insertion: ";
    cout<<"[";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"]."<<endl;
    a[n]=a[n+1];
   cout<<"Enter the element at end position: ";
   cin>>a[n];
   cout<<"[";
    for(i=0;i<n+1;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"].";
    return 0;
}
