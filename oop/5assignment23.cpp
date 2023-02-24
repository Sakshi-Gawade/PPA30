#include<iostream>

using namespace std;

class base
{
public:
int i;
float f;
double d;

};

class derived:public base
{
public:
int x,y;

};

class derivedX : public derived
{
public:
int j, k;
};

int main()
{
base bobj;
derived dobj1;
derived dobj2;

cout<<sizeof(bobj)<<"\n";
cout<<sizeof(dobj1)<<"\n";
cout<<sizeof(dobj2)<<"\n";
return 0;
}