#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int i;
	cout << "type a number" << endl;
	cin >> i;
	i > 5 ? (cout << "It's greater than 5" << endl) : 
		(i<5 ? (cout << "It's less than 5" << endl) : 
		(cout << "It's equal to 5" << endl));
	}
