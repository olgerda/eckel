#ifndef DATE_H
#define DATE_H

struct Date
{
	int day;
	int month;
	int year;
	
	void init (std::string);
	void print ();
};//Даты

#endif
