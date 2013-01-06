#include <iostream>
#include <fstream>
#include <vector>
#include "7.h"
#include "8.h"

using std::ifstream;
using std::string;
using std::vector;

int main ()
{
	Stack st;
	st.initialize();
	
	ifstream file("5.cpp");
	vector<string> tmp;
	string line;
	while (getline(file, line))
	{
		tmp.push_back(line);
		std::cout << line << std::endl;
	}
	size_t count = tmp.size();
	//int r = count%5;
	unsigned int sz = 1+(count-1)/5;
	/*if (r > 0)
	{
		sz = count/5 + 1;
		std::cout << "count/5 = " << count/5 << std::endl;
		std::cout << "Сташей будет " << sz << std::endl;
	}
	else
	{
		sz = count/5;
	}*/
	Stash* fives[sz];
	
	for(int i = 0; i < sz-1; i++)
	{
		fives[i] = new Stash;
		fives[i]->initialize(sizeof(string));
		for (int j = 0; j < 5; j++)
		{
			fives[i]->add (&tmp[i*5+j]);
		}
		st.push(fives[i]);
	}
	if(!count%5)
	{
		int i = sz-1;
		fives[i] = new Stash;
		fives[i]->initialize(sizeof(string));
		for (int j = 0; j < count%5; j++)
		{
			fives[i]->add (&tmp[i*5+j]);
		}
		st.push(fives[i]);
	}
	/*
	if (r > 0)
	{
		fives[count/5] = new Stash;
		for (int i = 0; i < r; i++)
		{
			fives[count/5]->add (&tmp[(count/5)*5 + i]);
		}
		st.push(fives[count/5]);
	}
		*/	
	Stack origin;
	origin.initialize();
	for (int i = 0; i < sz; i++)
	{
		origin.push(st.pop());
	}
	/*if (r > 0)
	{
		origin.push(st.pop());
	}*/
	for(int i = 0; i < sz-1; i++)
	{ 
		Stash* temp = reinterpret_cast<Stash*>(origin.pop());
		for (int j = 0; j < 5; j++)
		{
			string* str = reinterpret_cast<string*>(temp->fetch(j));
			std::cout << *str << std::endl;
		}
	}
	if(!count%5)
	{
		Stash* temp = reinterpret_cast<Stash*>(origin.pop());
		for (int j = 0; j < count%5; j++)
		{
			string* str = reinterpret_cast<string*>(temp->fetch(j));
			std::cout << *str << std::endl;
		}
	}
	/*if (r > 0)
	{
		std::cout << "Хвост из " << r << std::endl;
		Stash* temp = reinterpret_cast<Stash*>(origin.pop());
		for (int j = 0; j < r; j++)
		{
			string* str = reinterpret_cast<string*>(temp->fetch(j));
						std::cerr << (str!=0);
			std::cout << str << std::endl;
		}
	}*/
	//Stash * begin = new Stash;
	//begin->initialize(sizeof(string));
	
	//for (int i = 0; i < 5; i++)
	//{
		//getline(file, tmp[i]);
		//begin->add (&tmp[i]);
	//}
	
	//st.push(begin);
	
	//Stash * middle = new Stash;
	//middle->initialize(sizeof(string));
	//for (int i = 0; i < 5; i++)
	//{
		//getline(file, tmp[5+i]);
		//middle->add (&tmp[5+i]);
	//}
	
	//st.push(middle);
	
	//Stash* end = new Stash;
	//end->initialize(sizeof(string));
	//for (int i = 0; i < 5; i++)
	//{
		//getline(file, tmp[10+i]);
		//end->add (&tmp[10+i]);
	//}
	
	//st.push(end);
	
	//Stash* temp[3];
	//for (int i = 2; i >= 0; i--)
	//{
		//temp[i] = reinterpret_cast<Stash*>(st.pop());
	//}
	//for (int i = 0; i < 3; i++)
	//{
		//for (int j = 0; j < 5; j++)
		//{
			//string* str = reinterpret_cast<string*>(temp[i]->fetch(j));
			//std::cout << *str << std::endl;
		//}
	//}
	origin.cleanup();
	st.cleanup();
	for (int i = 0; i < count/5; i++)
	{
		delete fives[i];
	}

}
