#include<iostream>

using namespace std;

class base1
{
public:
int i;
float f;

void gun()
  {}
};

class base2
{
public:
int j;
float g;

void fun()
  {}
};

class derived:public base1,base2
{
public:
int i;
double d;
void sun()
  {}
};
int main()
{
derived dobj;

cout<<sizeof(dobj)<<"\n";
}