#include <iostream>
#include "11.h"

using std::cout;
using std::endl;

int main ()
{
	Stack nums;
	nums.initialize ();
	
	double val[25];
	for (int i = 0; i < 25; i++)
	{
		val[i] = 125 * (double)i/2.5;
		nums.push (reinterpret_cast<void*>(&val[i]));
	}
	
	for (int i = 24; i >= 0; i--)
	{
		void* res = nums.pop();
		double* dp = reinterpret_cast<double*>(res);
		cout << i << ": " << *dp << endl;
	}
	nums.cleanup();
}
