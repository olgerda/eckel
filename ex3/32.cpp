#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int compare (double a)
{
	if (a > 10)
	{
		return 1;
	}
	return 0;
}

int main ()
{
	int (*fp)(double) = &compare;
	double a = 0;
	
	cout << "Введите число: ";
	cin >> a;
	cout << (*fp)(a) << endl;
}
