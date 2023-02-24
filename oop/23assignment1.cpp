#include<iostream>

using namespace std;

class base
{
  public:
  int i;
  //float f;
  double d;
  
  void fun()
  {
  cout<<"Inside fun\n";
  }
  
  void gun()
  {
  cout<<"Inside gun\n";
  }
};

class derived:public base
{
public:
  int i;
  double d;
  
  void sun()
  {
  cout<<"Inside sun\n";
  }
};

int main()
{
base bobj;
derived dobj;

cout<<sizeof(bobj)<<"\n";
cout<<sizeof(dobj)<<"\n";

return 0;
} 