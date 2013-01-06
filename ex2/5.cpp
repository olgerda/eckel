#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::ifstream;

int main ()
{
	ifstream readable("tmp");
	vector<string> lines;
	string line = "";
	while (getline(readable, line))
	{
		lines.push_back(line);
	}
	for (int i = lines.size()-1; i >= 0; --i)
	{
		cout << lines[i] << endl;
	}
	
	return 0;
}
