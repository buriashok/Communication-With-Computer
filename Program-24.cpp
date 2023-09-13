//Insertion of an element at a given postion .
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
    cout<<"Enter the Position where element should insert: ";
    cin>>k;
    for(i=n;i>=k;i--)
    {
        a[i+1]=a[i];
    }
    cout<<"Enter the element should be inserted: ";
    cin>>a[k];
    cout<<"[";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"].";
    return 0;
}
