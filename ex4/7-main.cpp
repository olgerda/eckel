#include "7.h"
#include <iostream>

using std::cout;
using std::endl;

int main ()
{
	Stash doubleStash;
	
	doubleStash.initialize (sizeof(double));
	for (int i = 0; i < 25; i++)
	{
		double val = (double)((double)i * 10/((double)i+1));
		const void* el = &val; 
		doubleStash.add (el);
	}
	for (int i = 0; i < doubleStash.count(); i++)
	{
		double* addr = reinterpret_cast<double*>(doubleStash.fetch(i));
		cout << i << ": " << (double) *addr << endl;
	}
}
