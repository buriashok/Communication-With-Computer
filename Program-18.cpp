#include <iostream>
using namespace std;

int main()
{
    int arr[]={23,78,90,56,34};
    int *ptr=arr;
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;
    cout<<&arr[3]<<endl;
    cout<<&arr[4]<<endl;
    cout<<ptr<<endl;
    cout<<ptr+3<<endl;
    int *ptr2=ptr+3;
    cout<<ptr2<<endl;;
    int result=ptr2-ptr;
    cout<<result;
    return 0;
}
