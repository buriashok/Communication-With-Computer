#include <iostream>
using namespace std;

class rectangle
{
  private: 
  int len,bre;
  public:
    rectangle()
    {
      len=79;
      bre=60;
    }
    void logic()
    {
      int area;
      area=len*bre;
      cout<<area;
    }
};

int main()
{
  rectangle area1;
  area1.logic();
  }
