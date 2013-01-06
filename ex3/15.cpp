#include <iostream>

using std::cout;
using std::endl;
using std::string;

typedef struct
{
	string name;
	string hobby;
	int age;
} child;

int main()
{
	child a;
	a.name = "Harry";
	a.hobby = "Magic";
	a.age = 11;
	
	cout << a.name << ", " << a.hobby << ", " << a.age << endl;
	
	child* cp = &a;
	cp->name = "Harry James Potter";
	cp->hobby = "chess";
	cp->age = 17;
	
	cout << cp->name << ", " << cp->hobby << ", " << cp->age << endl;
}
