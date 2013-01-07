#include "11.h"
#include "6.h"

int main ()
{
	Stack henStack;
	henStack.initialize();
	
	Hen hens[7];
	for (int i = 0; i < 7; i++)
	{
		henStack.push(&hens[i]);
	}
	
	void* ptr;
	while ((ptr = henStack.pop()) != 0)
	{
		Hen* hen = reinterpret_cast<Hen*>(ptr);
		hen->display();
	}
	henStack.cleanup();
}
