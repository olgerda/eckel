#include <iostream>
#include "14d.h"
#include "14.h"

using std::cout;
using std::endl;

bool Video::dateCompare (Date newer, Date old)
{
	if(newer.year >= old.year)
	{
		if (newer.month >= old.month)
		{
			if (newer.day > old.day)
			{
				return true;
			}
		}
	}
	return false;
}

void Video::print ()
{
	cout << "Фильм: " << name << endl;
	cout << "Дата поступления в прокат: ";
	inDate.print();
	cout << endl;
	cout << "Количество дней проката за последний месяц: " << rotation << endl;
	if (!dateCompare(lastRentingEnd, lastRentingStart))
	{
		cout << "Кассета в сейчас прокате" << endl;
	}
	else
	{
		cout << "Кассета доступна для проката" << endl;
	}
}

void Video::rent (Date cur)
{
	lastRentingStart.day = cur.day;
	lastRentingStart.month = cur.month;
	lastRentingStart.year = cur.year;
}

void Video::ret (Date cur)
{
	lastRentingEnd.day = cur.day;
	lastRentingEnd.month = cur.month;
	lastRentingEnd.year = cur.year;
}
