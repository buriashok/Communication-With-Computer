#include<iostream>
using namespace std;
void max_of_four(int a,int b,int c,int d)
  {
        
        if(a>b && a>c && a>d)
        {
            cout<<a;
        }
        else if(b>a && b>c && b>d)
        {
            cout<<b;
        }
        else if(c>b && c>a && c>d)
        {
            cout<<c;
        }
        else
        {
            cout<<d;
        }
  }

int main()
{ int a,b,c,d;
cin>>a>>b>>c>>d;
max_of_four(a,b,c,d);
    return 0;
}

