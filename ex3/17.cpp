#include <iostream>

using std::cout;
using std::endl;
using std::cin;

union Packed
{
	char i;
	short j;
	int k;
	long l;
	float f;
};

int main()
{
	cout << "sizeof(Packed) = " << sizeof(Packed) << endl;
	Packed x;
	cout << x.i << endl;
	cout << x.k << endl;
	cout << x.l << endl;
	x.i = 'c';
	cout << x.i << endl;
	cout << x.k << endl;
	cout << x.l << endl;
	x.f = 3.14159;
	cout << x.f << endl;
	cout << x.k << endl;
	cout << x.i << endl;
	cout << x.l << endl;
}
