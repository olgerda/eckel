#include "1.h"
#include <iostream>

using std::cout;
using std::endl;

int seconds (int a, char b)
{
	cout << "function: seconds\n" << "args: int = " << a << ", char = "
	<< b << "\n" << "returned meaning is int\n" << endl;
	return 0; 
}

float depth (int a, float b)
{
	cout << "function: depth\n" << "args: int = " << a << ", float = "
	<< b << "\n" << "returned meaning is float\n" << endl;
	return 0;
}

void nope (char a)
{
	cout << "function: nope\n" << "args: char = " << a << "\n" 
	<< "returned meaning is void\n" << endl;
}

char abc ()
{
	cout << "function: abc\n" << "has no args\n" << "returned meaning is char\n" << endl;
	return 'a';
}

int main ()
{
	int a = 5;
	float fl = 1.5;
	char s = 'b';
	
	seconds (a, s);
	depth (a, fl);
	nope (s);
	abc ();
	
	return 0;
}
