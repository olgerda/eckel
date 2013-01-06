#include <iostream>

struct Elem
{
	int num;
	Elem* next;
};

void init (Elem* a)
{
	a->num = 0;
	a->next = 0;
}

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

int main ()
{
	Elem start;
	init(&start);
	chainBuilder (&start, 5);
	chainWalker (&start);
}
	 
