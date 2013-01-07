#include "14.h"
#include <iostream>
#include <vector>

using std::vector;

class StackOfInt::StackImp
{
	friend class StackOfInt;
	vector<int> stack;
	int count;
};

void StackOfInt::initialize ()
{
	stImp = new StackImp;
	stImp->count = 0;
}

void StackOfInt::push(int a)
{
	stImp->stack.push_back(a);
	stImp->count += 1;
}

void StackOfInt::pop()
{
	if (stImp->count < 1)
	{
		std::cout << "Stack is empty" << std::endl;
		return;
	}
	stImp->stack.pop_back();
	stImp->count -= 1;
}
	
int StackOfInt::peek()
{
	return stImp->stack.back();
}

void StackOfInt::cleanup()
{
	delete stImp;
}
