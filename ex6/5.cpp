#include <iostream>

int main ()
{
	int a=6;
	int iter = 0;
	for (iter = 0; iter < 10; iter++)
	{
		float a=3;
		std::cout << iter << std::endl;
	}
	
	for (int iter = 10; iter >= 0; iter--)
	{
		std::cout << iter << std::endl;
	}
}
