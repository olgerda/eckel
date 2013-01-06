#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main ()
{
	int max;
	cout << "Enter a number" << endl;
	cin >> max;
	
	for (int i = 0; i<=max; i++)
	{
		int counter = 0;
		for (int iter = 1; iter<=i; iter++)
		{
			if (i%iter==0)
			{
				counter++;
			}
		}
		if (counter == 2)
		{
			cout << i << " is prime" << endl;
		}
	}
	return 0;
}
