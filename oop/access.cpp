#include<iostream>

using namespace std;
 
class Demo
{
  int i;

  public:
  int x;

  private:
  int y;

  public:
  Demo()
{
  x = 14;
  y = 19;
  i = 32;
}

void fun()
{
  cout<<"Inside public fun\n";
  cout<<y;
  gun();
}

private:
void gun()
{
  cout<<"Inside private gun\n";
  cout<<y;
}
};

int main()
{
  Demo obj;

  cout<<obj.x<<"\n";
//cout<<obj.y<<"\n";  not allowed
//cout<<obj.i<<"\n";  not allowed

  obj.fun();
//obj.gun(); not allowed
}
