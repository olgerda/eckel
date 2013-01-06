#include <iostream>

using std::cout;
using std::endl;

char* cpArray (char* arr)
{
	int sz = 0;
	while (arr[sz] != '\0')
	{
		sz++;
	}
	cout << "sz: " << sz << endl;
	char* nArr = new char[sz];
	
	for (int i = 0; i < sz; i++)
	{
		nArr[i] = arr[i];
	}
	nArr[sz] = '\0';
	
	return nArr;
}

void print (char* a)
{
	int i = 0;
	while (a[i] != '\0')
	{
		cout << a[i] << " ";
		i++;
	}
	cout << endl;
}

int main ()
{
	char abc[] = "Hello, world";
	cout << "Array abc:" << endl;
	print (abc);
	cout << "Address: " << (long)abc << endl;
	
	char* newAbc = cpArray (abc);
	
	cout << "Array newAbc:" << endl;
	print (newAbc);
	cout << "Address: " << (long)newAbc << endl;
	
	char* nnAbc = cpArray (newAbc);
	print (nnAbc);
	cout << "Address: " << (long)nnAbc << endl;
	
	delete[] newAbc;
	delete[] nnAbc;
}
