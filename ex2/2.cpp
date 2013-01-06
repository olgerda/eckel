#include <iostream>

using std::cin;
using std::cout;
using std::dec;

int main ()
{
	int radius;
	float square;
	cin >> radius;
	square = 3.14*radius*radius;
	cout << dec << square;
	return 0;
}
