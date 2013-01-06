#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "7.h"
#include "8.h"

using std::vector;
using std::string;
using std::ifstream;
using std::cout;
using std::endl;

int main ()
{
	ifstream file ("5.cpp");
	
	Stack st;
	st.initialize();
	
	while (file)
	{
		vector<string> lines;
		string line = "";
		size_t count = 0;
		Stash* block = new Stash;
		block->initialize(sizeof(char)*80);
		
		while (getline(file, line))
		{
			lines.push_back(line);
			count++;
			if (count == 5)
			{
				break;
			}
		}
		for (int i = 0; i < count; i++)
		{
			cout << i << ": " << lines[i] << endl;
			block->add(lines[i].c_str());
		}
		
		st.push(reinterpret_cast<void*>(block));
	}
	
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
	st.cleanup();
	origin.cleanup();
}
