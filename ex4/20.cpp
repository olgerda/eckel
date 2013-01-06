#include <iostream>

using std::cout;
using std::endl;

struct Empty
{
};

struct Data
{
	int a;
	char b;
	short c;
	double d;
};

struct Funcs
{
	int aaa() {return 0;}
	void bbb() {};
};

struct Mix
{
	int z;
	char y;
	short x;
	double w;
	
	int vvv() {return 0;}
	void ttt() {};
};

int main ()
{
	Empty em;
	Data dat;
	Funcs fun;
	Mix m;
	
	cout << "Empty: " << sizeof(em) << endl;
	cout << "Data: " << sizeof(dat) << endl;
	cout << "Funcs: " << sizeof(fun) << endl;
	cout << "Mix: " << sizeof(m) << endl;
}
