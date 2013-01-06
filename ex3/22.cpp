#include <iostream>
#include <cstdlib>

using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
	if(argc < 3)
	{
		cout << "We need 3 or more args" << endl;
		return 1;
	}
	for (int i = 1; i < 3; i++)
	{
		cout << atol(argv[i]) << endl;
	}
	for (int i = 3; i < argc; i++)
	{
		cout << atof(argv[i]) << endl;
	}
}
