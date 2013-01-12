//Исходный файл:
#include "Stack.h"
#include <iostream>
#include <cassert>

void Stack::Link::initialize (void* dat, Link* nxt)
{
	data = dat;
	next = nxt;
}

Stack::Stack ()
{
	head = 0;
}

void Stack::push (void* dat)
{
//	if(head != 0) std::cerr << "Previous push value, before insertion: " << *reinterpret_cast<double*>(head->data) << std::endl;
//	std::cerr << "Pushing value: " << *reinterpret_cast<double*>(dat) << std::endl;
	Link* newLink = new Link;
	newLink->initialize (dat, head);
//	std::cerr << "Pushed value: " << *reinterpret_cast<double*>(newLink->data) << std::endl;
	head = newLink;
//	if(head->next != 0) std::cerr << "Previous push value, after insertion: " << *reinterpret_cast<double*>(head->next->data) << std::endl;
}

void* Stack::peek ()
{
	if(head == 0)
		return 0;
	return head->data;
}

void* Stack::pop ()
{
	if (head == 0)
	{
		return 0;
	}
//	std::cerr << "Pop value: " << *reinterpret_cast<double*>(head->data) << std::endl;
	void* result = head->data;
	Link* oldHead = head;
	head = head->next;
	delete oldHead;
	return result;
}

Stack::~Stack()
{
	assert (head == 0);
}
