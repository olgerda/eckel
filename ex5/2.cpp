#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

struct Lib
{
	string s[3];
};

int main()
{
	Lib x;
	x.s[0] = "Die Katze";
	x.s[1] = "The Cat";
	x.s[2] = "Кошка";
	
	cout << x.s[0] << endl;
	cout << x.s[1] << endl;
	cout << x.s[2] << endl;
}
