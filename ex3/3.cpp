#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main ()
{
	while(1)
	{
		string s = "";
		cout << "Type a word" << endl;
		cin >> s;
		int reflex = 0;
		if (s == "stop" || s == "quit")
		{
			cout << "Goodbye" << endl;
			break;
		}
		if (s == "sleep")
		{
			reflex = 2;
		}
		if (s == "makeup")
		{
			reflex = 3;
		}
		
		switch (reflex)
		{
			case 2:
			{
				cout << "Goodnight" << endl;
				break;
			}
			case 3:
			{
				cout << "You are beautiful" << endl;
				break;
			}
			default:
			{
				cout << "Let's go for a walk" << endl;
				break;
			}
		}
	}
}
