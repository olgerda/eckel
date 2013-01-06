#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using std::cout;
using std::ifstream;
using std::string;
using std::fstream;
using std::endl;
using std::vector;

int main ()
{
	ifstream readFile("tmp");
	string word;
	vector<string> words;
	int counter;
	
	while (readFile >> word)
	{
		words.push_back(word);
	}
	counter = words.size();
	cout << counter << endl;
	
	return 0;
}
