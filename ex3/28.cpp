#include <iostream>

using std::cout;
using std::endl;

void showDoubleArray (double* pArr, int size)
{
	cout << "Your array:" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << i << ": " << pArr[i] << endl;
	}
}

int main ()
{
	double da[5];
	for (int i = 0; i < 5; i++)
	{
		da[i] = 0;
	}

	showDoubleArray (da, 5);

	unsigned char* pda = reinterpret_cast<unsigned char*>(&da);
	for (unsigned int i = 0; i < 5*sizeof(double); i++)
	{
		pda[i] = 1;
	}
 
	showDoubleArray (da, 5);
}
