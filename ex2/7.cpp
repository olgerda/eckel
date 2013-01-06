#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::ifstream;
using std::cin;

int main ()
{
	ifstream readable("tmp");
	string line = "";
	string enter = "";
	
	while (getline(readable, line))
	{
		cout << line << endl;
		getline(cin, enter);
	}
	return 0;
}	
