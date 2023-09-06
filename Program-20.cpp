#include <iostream>
using namespace std;

class rectangle
{
  private: 
  int len,bre;
  public:
    rectangle(int a,int b)//constructor
    {
      len=a;
      bre=b;
    }
    void logic()
    {
      int a;
      a=len*bre;
      cout<<a<<endl;
    }
};

int main()
{
  rectangle area2(76,54),area3(53,89),area4(90,45);
  
  area2.logic();
  area3.logic();
  area4.logic();
  
  return 0;
  }
