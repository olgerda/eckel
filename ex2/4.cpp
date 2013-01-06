#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::ifstream;
using std::string;
using std::cin;
using std::endl;

int main()
{
	ifstream readFile("tmp");
	string query;
	string word;
	int counter = 0;
	cout << "What word are you looking for?" << endl;
	cin >> query;
	
	while (readFile >> word)
	{
		if (word == query)
		{
			counter++;
		}
	}
	
	cout << "counter = " << counter << endl;
	return 0;
}
