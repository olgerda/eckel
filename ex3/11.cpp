#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	double i, j;
	cout << "enter a double: ";
	cin >> i;
	cout << "enter another double: ";
	cin >> j;
	
	cout << "i > j is " << (i>j) << endl;
	cout << "i < j is " << (i<j) << endl;
	cout << "i >= j is " << (i>=j) << endl;
	cout << "i <= j is " << (i<=j) << endl;
	cout << "i == j is " << (i==j) << endl;
	cout << "i != j is " << (i not_eq j) << endl;
	cout << "i && j is " << (i and j) << endl;
	cout << "i || j is " << (i or j) << endl;
	cout << "(i<10)&&(j<10) is " << ((i<10) and (j<10)) << endl;
}
