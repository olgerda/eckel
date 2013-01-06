#include <iostream>

using std::cout;
using std::endl;

struct Ext
{
	int a;
	void b ();
	
	struct Int
	{
		int z;
		void y ();
	};
	
	Int in;
};

void Ext::b ()
{
	cout << "I am function of external struct." << endl;
	cout << "a = " << a << endl;
}

void Ext::Int::y ()
{
	cout << "I am function of internal struct." << endl;
	cout << "z = " << z << endl;
}

int main ()
{
	Ext example;
	example.a = 15;
	example.in.z = -7;
	example.b();
	example.in.y();
}
