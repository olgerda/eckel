#include <iostream>

using std::cin;
using std::cout;
using std::endl;

struct Parameter
{
	int size;
	void init (int value);
	void show ();
};

void Parameter::init (int value)
{
	size = value;
}

void Parameter::show ()
{
	cout << "size = " << size << endl;
}

int main()
{
	Parameter p1;
	int val = 0;
	
	p1.show ();
	
	cout << "Enter number: ";
	cin >> val;
	
	p1.init (val);
	p1.show ();
}
