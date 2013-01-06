#include <iostream>

using std::cout;
using std::endl;

void printBinary (unsigned char res)
{
	for (int i = 7; i >= 0; i--)
	{
		if(res & (1 << i))
		{
			cout << "1";
		}
		else
		{
			cout << "0";
		}
	}
}

int main()
{
	float n = 3.25;
	float* np = &n;
	unsigned char* cp = (unsigned char*)np;
	
	for (unsigned int i = 0; i < sizeof(float); i++)
	{
		printBinary(cp[i]);
		cout << "\n";
	}
}
