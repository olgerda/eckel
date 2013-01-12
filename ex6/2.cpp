#include <iostream>

class Simple
{
	public:
	Simple ()
	{
		std::cout << "Inside constructor" << std::endl;
	}
	~Simple()
	{
		std::cout << "Inside destructor" << std::endl;
	}
};

int main ()
{
	Simple ex;
}
