#include <iostream>
#include <cstdio>
using std::cout;
using std::endl;

class Example
{
	int a;
	int b;
	void f(){};
	
	protected:
	int e;
	int g;
	void fff(){};
	
	public:
	int c;
	int d;
	void ff(){};
	void showMap()
	{		
		cout << "Private section contains: \nint a: " << &a << endl;
		cout << "int b: " << &b << endl;
		printf("%p\n", &Example::f);
		cout << "Protected section contains: \nint e: "
			<< &e << endl;
		cout << "int g: " << &g << endl;
		printf("%p\n", &Example::fff);
		cout << "Public section contains: \nint c: " 
			<< &c << endl;
		cout << "int d: " << &d << endl;
		printf("%p\n", &Example::ff);
		printf("%p\n", &Example::showMap);;
	}
};

int main ()
{
	Example ex;
	ex.showMap();
}
