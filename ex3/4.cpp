#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main ()
{
	char c;
	while (true)
	{
		cout << "MAIN MENU:" << endl;
		cout << "l: left, r: right, q: quit -> ";
		cin >> c;
		switch (c)
		{
			case 'l':
			{
				cout << "LEFT MENU:" << endl;
				cout << "select a or b: ";
				cin >> c;
				switch (c)
				{
					case 'a'
