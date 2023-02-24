#include<iostream>

using namespace std;

class Base
{
 public:
  int i,j;
  static int k;
  
  Base()
  {
  i = 10;
  j = 20;
  }
  
  void fun()
  {
   cout<<"Base fun\n";
  }
};
int Base::k=11;

class Derived:public Base
{
 public:
 int x,y;
 
  Derived()
  {
  x = 50;
  y = 60;
  }
 
  void gun()
  {
   cout<<"Derived gun\n";
  }  
};

int main()
{
Base bobj;
Derived dobj;

cout<<sizeof(bobj)<<"\n";
cout<<sizeof(dobj)<<"\n";
}