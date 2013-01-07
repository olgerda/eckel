#include "14.h"
#include <iostream>

class StackOfInt::StackImp
{
	friend class StackOfInt;
	int stack[50];
	int count;
};

void StackOfInt::initialize ()
{
	stImp = new StackImp;
	stImp->count = 0;
}

void StackOfInt::push(int a)
{
	if (stImp->count > 50)
	{
		std::cout << "Stack is full" << std::endl;
		return;
	}
	stImp->stack[stImp->count] = a;
	stImp->count += 1;
}

void StackOfInt::pop()
{
	if (stImp->count < 1)
	{
		std::cout << "Stack is empty" << std::endl;
		return;
	}
	stImp->count -= 1;
}
	
int StackOfInt::peek()
{
	return stImp->stack[stImp->count-1];
}

void StackOfInt::cleanup()
{
	delete stImp;
}
