#include <iostream>
#include <string>
#include "Stack.h"

using std::string;

int main ()
{
	string str[] = {"meow", "murrr", "murrmeow"};
	Stack st;
	size_t sz = sizeof(str)/sizeof(*str);
	
	for (unsigned int i = 0; i < sz; i++)
	{
		st.push(&str[i]);
	}
	
	for (unsigned int i = 0; i < sz; i++)
	{
		void* ptr = st.pop();
		string* s = reinterpret_cast<string*>(ptr);
		std::cout << *s << std::endl;
	}
}
