#include <iostream>

void printD (double a)
{
	std::cout << a << std::endl;
}

int main ()
{
	double few[5] = {1, 2, 3};
	
	for (int i = 0; i < sizeof(few)/sizeof(*few); i++)
	{
		printD(few[i]);
	}
	
	double unk[] = {1, 2, 3, 4, 5, 6};
	for (int i = 0; i < sizeof(unk)/sizeof(*unk); i++)
	{
		printD(unk[i]);
	}
}
