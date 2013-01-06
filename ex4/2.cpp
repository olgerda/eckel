#include <iostream>

using std::cout;
using std::endl;
using std::string;

struct Printer
{
	void printLine (string);
};

void Printer::printLine (string s)
{
	cout << s << endl;
}

int main ()
{
	Printer pr;
	string str = "Hello, world";
	pr.printLine (str);
}
