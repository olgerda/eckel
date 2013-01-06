#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::ifstream;

int main()
{
	string prog[10];
	ifstream src("19.cpp");
	
	for (int i = 0; i < 10; i++)
	{
		getline(src, prog[i]);
	}
	
	for (int i = 0; i < 10; i++)
	{
		cout << i << ": " << prog[i] << endl;
	}
}
