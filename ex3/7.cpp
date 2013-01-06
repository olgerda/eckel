#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void addNum (string* str)
{
	*str += " 1234567890";
}

void addSymb (string& str)
{
	str += " abcdefgh";
}

int main ()
{
	string words = "";
	cout << "Type a word" << endl;
	cin >> words;
	
	string* str1 = &words;
	string& str2 = words;
	
	cout << "We are working with this string: " << words << endl;
	addNum (str1);
	cout << "Now string is: " << words << endl;
	addSymb (str2);
	cout << "Now string is: " << words << endl;
	
	return 0;
}
