//Handle.cpp
#include "6.h"

struct Handle::Cheshire
{
	int i;
};

Handle::Handle()
{
	smile = new Cheshire;
	smile->i = 0;
}

Handle::~Handle()
{
	delete smile;
}
int Handle::read()
{
	return smile->i;
}

void Handle::change(int x)
{
	smile->i = x;
}
