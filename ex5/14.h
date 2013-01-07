#ifndef STACKOFINT_H
#define STACKOFINT_H

class StackOfInt
{
	class StackImp;
	StackImp* stImp;
public:
	void initialize();
	void push(int);
	void pop();
	int peek();
	void cleanup();
};
#endif
