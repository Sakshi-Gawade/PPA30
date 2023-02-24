#include<iostream>

using namespace std;
class demo
{
	public:
	int i;
	const int j;
	
	demo(): j(20)
	{
		i=10;
		//j=20;	
			
	}
	
	demo(int a, int b):i(a),j(b)
	{
		cout<<"inside parametrised constructor\n";
	}
};
int main()
{
	demo obj(11,21);

	cout<<obj.i<<"\n";
	cout<<obj.j<<"\n";
	//obj.j++;
	obj.i++;
	cout<<obj.i<<"\n";
	return 0;
}