#include <iostream>

using std::cout;
using std::endl;

void func()
{
	int i = 0;
	cout << "i = " << ++i << endl;
}

int main()
{
	for (int x = 0; x < 10; x++)
	{
		func();
	}
}
