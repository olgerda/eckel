#include <iostream>

using std::cout;
using std::endl;

class Cfriend;
class Cprivate;

class C
{
	public:
	void f(Cprivate* cp);
	void nothing(void* vp);
};

class Cprivate
{
	int a;
	float b;
	char c;
	
	friend class Cfriend;
	friend void C::f(Cprivate* cp);
};

class Cfriend
{
	public:
	float x(Cprivate* cp, int a, float b);
	void y(Cprivate* cp, char k);
};

float Cfriend::x(Cprivate* cp, int a, float b)
{
	cp->a = a;
	cp->b = b;
	
	return a*b;
}

void Cfriend::y(Cprivate* cp, char k)
{
	cp->c = k;
}

void C::f (Cprivate* cp)
{
	cout << "a = " << cp->a << "; b = " << cp->b <<
		"; c = " << cp->c << endl;
}

void C::nothing (void* vp)
{
	Cprivate* cp = reinterpret_cast<Cprivate*>(vp);
	//cout << "Look: I get 'a' from Cprivate object. It is "
		//<< cp->a << endl; //Это не будет работать, потому что nothing не друг Cprivate
}

int main ()
{
	Cprivate cp;
	Cfriend cf;
	C cz;
	cf.x(&cp, 5, 7.9);
	cf.y(&cp, 'i');
	cz.f(&cp);
	void* vp = reinterpret_cast<void*>(&cp);
	cz.nothing(vp);
}
