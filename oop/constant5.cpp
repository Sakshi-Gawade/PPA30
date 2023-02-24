#include<iostream>

using namespace std;
class demo
{
	public:
	int i;
	const int j;
	
	demo(int a, int b): j(b)
	{
		i=a;	
	}
	
	void fun()
	{
		cout<<"Inside\n";
		i++;
		//j++;
	}
	
	void gun(int a,const int b) const
	{
		int x = 10;
		const int y = 20;
		cout<<"Inside gun\n";
		
		//i++;    // not allowed
		//j++; //not allowed
		
		x++;    //allowed
		//y++;  //not allowed
		
		a++; // allowed
		//b++;  // not allowed
	}
};
int main()
{
	demo obj(11,21);

	return 0;
}