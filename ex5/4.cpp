#include <iostream>

using std::cout;
using std::endl;

class C2;

class C1
{
	public:
	void f (C2* c2);
	int a;
};

class C2
{
	public:
	void f (C1* c1);
	int a;
};

void C1::f (C2* c2)
{
	cout << "I am C1::f(). In C2 I see a = " << c2->a << endl;
}

void C2::f (C1* c1)
{
	cout << "I am C2::f(). In C1 I see a = " << c1->a << endl;
}

int main ()
{
	C1 c1;
	c1.a = 8;
	C2 c2;
	c2.a = 88;
	
	c1.f(&c2);
	c2.f(&c1);
}
