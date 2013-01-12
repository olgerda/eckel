#include <iostream>

class Simple
{
	public:
	Simple ()
	{
		std::cout << "Inside constructor" << std::endl;
	}
};

int main ()
{
	Simple ex;
}
