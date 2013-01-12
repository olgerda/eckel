//Stack.h

#ifndef STACK2_H
#define STACK2_H

class Stack
{
	struct Link
	{
		void* data;
		Link* next;
		void initialize (void* dat, Link* nxt);
	}* head;
	
	public:
		Stack();
		void push (void* dat);
		void* peek();
		void* pop();
		~Stack();
};
#endif
