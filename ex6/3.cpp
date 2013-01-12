#include <iostream>

using std::cout;
using std::endl;

class Simple
{
	int a;
	public:
	Simple (int i)
	{
		a = i;
		cout << "Inside constructor" << endl;
		cout << "a = " << a << endl;
	}
	~Simple()
	{
		cout << "Inside destructor" << endl;
		cout << "a = " << a << endl;
	}
};

int main ()
{
	Simple ex(19);
}
