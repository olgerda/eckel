#include <iostream>

using std::cout;
using std::endl;

void printArray (int a[])
{
	cout << "Your array contains: " << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << endl;
	}
}

int main()
{
	int a1[10];
	char z;
	int a2[10];
	printArray(a1);
	cout << "z: " << z << endl;
	printArray(a2);
	for (int i = 10; i<20; i++)
	{
		a1[i] = i;
	}
	cout << "z: " << z << endl;
	printArray(a2);
}
