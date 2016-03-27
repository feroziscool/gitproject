#include<iostream>

using namespace std;

class A
{
	int a;
public:
	A()
	{
		a=5;
	}

	void disp()
	{
		cout << a << endl;
	}
};

int main()
{
	A obj;
	
	obj.disp();

	return 0;
}
