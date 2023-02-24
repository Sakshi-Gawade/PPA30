#include<iostream>
using namespace std;
class Base
{
  public: 
    int i;
	float f;
	
	virtual void gun() = 0;
	virtual void sun() = 0;
	virtual void run()
	{
	cout<<"Base run";
	}
};

class Derived:public Base
{
  public:
  int i;
  double d;
  
  void sun()
  {
    cout<<"Deived sun";
  }
 /* void fun()
  {
    cout<<"Deived fun";
  }*/
  void gun()
  {
    cout<<"Deived gun";
  }
 /* void mun()
  {
    cout<<"Deived mun";
  }*/
};

int main()
{
Base *bp = NULL;
Derived dobj;

bp = &dobj;

//bp-> fun();
bp-> gun();
bp-> sun();
bp-> run();	
//bp-> mun();

return 0;
}