//Insertion of an element at Beginning  position. .
#include <iostream>
using namespace std;
int main()
{
    int n=5;
    int a[n];
    cout<<"Enter the elements in the array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element "<<i<<" : ";
        cin>>a[i];
    }
    cout<<"The array before insertion: ";
    cout<<"[";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"]."<<endl;
  
   for(int i=n;i>=0;i--)
   {
       a[i+1]=a[i];
   }
   cout<<"Enter the element at begining position: ";
   cin>>a[0];
   cout<<"[";
    for(int i=0;i<n+1;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"].";
    return 0;
}
