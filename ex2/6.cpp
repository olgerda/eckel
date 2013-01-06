#include <iostream>
#include <string>
#include <fstream>

using std::cout;
using std::string;
using std::ifstream;
using std::endl;

int main()
{
	ifstream readable("tmp");
	string line = "";
	string allLines = "";
	
	while (getline(readable, line))
	{
		allLines += line + " ";
	}
	
	cout << allLines << endl;
	return 0;
}
