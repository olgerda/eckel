#include <iostream>

using std::cin;
using std::cout;
using std::endl;

struct Parameter
{
	int size;
};

void init (Parameter* pp, int value)
{
	pp->size = value;
}

void show (Parameter* pp)
{
	cout << "size = " << pp->size << endl;
}

int main()
{
	Parameter p1;
	Parameter* pp1 = &p1;
	int val = 0;
	
	show (pp1);
	
	cout << "Enter number: ";
	cin >> val;
	
	init (pp1, val);
	show (pp1);
}
