#include <iostream>

using std::cout;
using std::endl;

enum colours {white, red, orange, yellow, green,
	blue, navy, purple, black};

int main ()
{
	colours c;
	for (int i = (int)white; i<=(int)black; i++)
	{
		c = (colours)i;
		cout << c << endl;
	}
}
