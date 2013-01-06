#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main ()
{
	int x = 1;
	int y = 2;
	int z = 3;
	
	int a = x + y -2/2 +z;
	cout << "a = " << a << endl;
	a = x + (y-2)/(2+z);
	cout << "a = " << a << endl;
	
	return 0;
}
