#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class Libc
{
//	string s[3]; //По мнению Эккеля, если заменить a, b и с на этот массив, все будет работать
	string a, b, c; //Похоже, Эккель неправ.
	
	public:
	void seta(string);
	string geta();
	void setb(string);
	string getb();
	void setc(string);
	string getc();
};

void Libc::seta (string val)
{
	a = val;
}

string Libc::geta()
{
	return a;
}

void Libc::setb (string val)
{
	b = val;
}

string Libc::getb()
{
	return b;
}

void Libc::setc (string val)
{
	c = val;
}

string Libc::getc()
{
	return c;
}

int main ()
{
	Libc x;
	x.seta("Die Katze");
	x.setb("The Cat");
	x.setc("Кошка");
	
	cout << x.geta() << endl;
	cout << x.getb() << endl;
	cout << x.getc() << endl;
}
