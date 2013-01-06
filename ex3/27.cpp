#include <iostream>

using std::cout;
using std::endl;

int main()
{
	const double cArray[5] {0, 1, 2, 3, 4};
	volatile double vArray[5];

	cout << "   cArray\tvArray" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << i << ": " << cArray[i] << "\t\t" << vArray[i] << endl;
	}
	
	for (int i = 0; i < 5; i++)
	{
		(const_cast<double*>(cArray))[i] = i+0.75;
		(const_cast<double*>(vArray))[i] = i*10 - 2.654;
	}
	
	cout << "   cArray\tvArray" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << i << ": " << cArray[i] << "\t\t" << vArray[i] << endl;
	}
}
