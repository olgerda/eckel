#include "14.h"
#include <iostream>

int main ()
{
	StackOfInt st;
	st.initialize();
	
	for (int i = 0; i < 20; i++)
	{
		st.push (i << 7);
	}
	
	for (int i = 0; i < 21; i++)
	{
		std::cout << st.peek() << std::endl;
		st.pop();
	}
	
	st.cleanup();
}
