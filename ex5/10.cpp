#include "9.h"
#include "6.h"

int main()
{
	Stash henStash;
	henStash.initialize (sizeof(Hen));
	
	for (int i = 0; i < 5; i++)
	{
		Hen* hen = new Hen;
		henStash.add (hen);
	}
	
	for (int i = 0; i < 5; i++)
	{
		void* ptr = henStash.fetch(i);
		Hen* oHen = reinterpret_cast<Hen*>(ptr);
		oHen->display();
	}
}
