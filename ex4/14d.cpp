#include <iostream>
#include <sstream>
#include "14d.h"
#include <vector>
#include <cstdlib>

using std::string;
using std::vector;
using std::stringstream;
using std::atoi;
using std::cout;

void Date::init (string dateStr)
{
	vector<string> dElem;
	stringstream inStream (dateStr);
	string parsed;
	
	while (getline (inStream, parsed, '.'))
	{
		dElem.push_back(parsed);
	}
	
	day = atoi(dElem[0].c_str());
//	std::cerr << "dd: " << day << std::endl;
	month = atoi(dElem[1].c_str());
//	std::cerr << "mm: " << month << std::endl;
	year = atoi(dElem[2].c_str());
//	std::cerr << "yyyy: " << year << std::endl;
}

void Date::print ()
{
	cout << day	<< "." << month << "." << year;
}
