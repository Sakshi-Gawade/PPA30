#include<iostream>

using namespace std;

class Base
{
public:
int i,j;

void fun() //definition
{
cout<<"Inside fun\n";
}

void gun()
{
cout<<"inside gun\n"; //definition
}
};

class derived:public base
void sun()
{
cout<<"Inside sun\n"; //definition
}

void gun()
{
cout<<"Inside gun\n"; //redefinition
}

int main()
{

return 0;
}