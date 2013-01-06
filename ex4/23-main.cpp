#include <iostream>
#include <fstream>
#include "23.h"

using std::ifstream;

int main ()
{
	StashStack ss;
	ss.initialize();
	
	ss.push("22.cpp");
	
	ss.pop();
	
	ss.cleanup();
}
