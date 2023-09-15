//Deletion of element in the array at Begining,at End ,at Given pos......
#include <iostream>
using namespace std;
const int n=5;
int k;
int a[n];

void create()
{
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
}

void delBeg()
{
    for(int i=0;i<n;i++)
    {
        a[i]=a[i+1];
    }
    cout<<"The array after deletion of beginning element: ";
    cout<<"[";
    for(int i=0;i<n-1;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"]";
}

void delEnd()
{
    cout<<"The array after deletion of End element: ";
    cout<<"[";
    for(int i=0;i<n-1;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"]";
}
void delPos()
{
    cout<<"Enter the position you want to delete: ";
    cin>>k;
     for(int i=k;i<=n;i++)
    {
        a[i]=a[i+1];
    }
    cout<<"The array after deletion of a given position  element: ";
    cout<<"[";
    for(int i=0;i<n-1;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"]";
    
}
int main()
{
    create();
    delBeg();
   delEnd();
  delPos();
    return 0;
}
