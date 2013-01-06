#include <iostream>

using std::cout;
using std::endl;

double dog, cat, bird, fish;

void f(char pet)
{
	cout << "pet id number: " << pet << endl;
}

int main()
{
	double i, j, k;
	cout << "f(): " << (long)&f << endl;
	cout << "dog: " << (long)&dog << endl;
	cout << "cat: " << (long)&cat << endl;
	cout << "bird: " << (long)&bird << endl;
	cout << "fish: " << (long)&fish << endl;
	cout << "i: " << (long)&i << endl;
	cout << "j: " << (long)&j << endl;
	cout << "k: " << (long)&k << endl;
}
