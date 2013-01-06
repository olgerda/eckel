#include <iostream>

using std::cout;
using std::endl;

int main ()
{
	#ifdef SMILE
	cout << "Hi there! :) How are you?" << endl;
	#else
	cout << "I don't have time for talking" << endl;
	#endif
}
