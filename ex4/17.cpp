#include <iostream>

using std::cout;
using std::endl;

int main ()
{
	int* a = new int;
	long* b = new long;
	char* arrc = new char[100];
	float* arrf = new float[100];
	
	cout << "a: " << (long)a << endl;
	cout << "b: " << (long)b << endl;
	cout << "arrc: " << (long)arrc << endl;
	cout << "arrf: " << (long)arrf << endl;
	
	delete a;
	delete b;
	delete[] arrc;
	delete[] arrf;
}
