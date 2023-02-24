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
		int x = 10;
		int y = 20;
		int i = 30;
	}

	void fun()
	{
		cout<<"Inside public fun\n";
	}

private:
	void gun()
	{
		cout<<"Inside private gun\n";
	}
};

int main()
{
	Demo obj;
	obj.fun();
	//obj.gun();
	return 0;
}