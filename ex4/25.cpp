#include <iostream>

struct Chain
{
	struct Elem
	{
		int num;
		Elem* next;
		
		void init();
	};

	Elem start;

	void chainBuilder (Elem* first, int size)
	{
		if (size == 0)
		{
			return;
		}
		first->next = new Elem;
		first->next->num = first->num+1;
		first->next->next = 0;
		chainBuilder(first->next, size-1);
	}

	void chainWalker (Elem* start)
	{
		std::cout << start->num << ": " << (long)start->next << std::endl;
		if (start->next != 0)
		{
			chainWalker(start->next);
		}
	}
};

void Chain::Elem::init ()
{
	num = 0;
	next = 0;
}

int main ()
{
	Chain ch;
	ch.start.init();
	ch.chainBuilder (&ch.start, 5);
	ch.chainWalker (&ch.start);
}
	 
