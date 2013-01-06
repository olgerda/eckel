#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "7.h"
#include "8.h"
#include "23.h"

using std::vector;
using std::string;
using std::ifstream;
using std::cout;
using std::endl;

Stack st;

void StashStack::push (const char* file)
{	
	ifstream is(file);
	while (is)
	{
		vector<string> lines;
		string line = "";
		size_t count = 0;
		Stash* block = new Stash;
		block->initialize(sizeof(char)*80);
		
		while (count < 5 && getline(is, line))
		{
			lines.push_back(line);
			count++;
		}
		for (int i = 0; i < count; i++)
		{
			cout << i << ": " << lines[i] << endl;
			block->add(lines[i].c_str());
		}
		
		st.push(reinterpret_cast<void*>(block));
	}
}

void StashStack::pop()
{
	Stack origin;
	origin.initialize();
	while (st.peek() != 0)
	{
		origin.push(st.pop());
	}
	while (origin.peek() != 0)
	{
		Stash* ret = reinterpret_cast<Stash*>(origin.pop());
		int k = 0;
        char* cp;
        while((cp =(char*)(ret->fetch(k++))))
		{
			cout << cp << endl;
		}
	}
	origin.cleanup();
}

void StashStack::initialize()
{
	st.initialize();
}

void StashStack::cleanup()
{
	st.cleanup();
}
