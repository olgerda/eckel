#ifndef VIDEO_H
#define VIDEO_H

class Video
{
	Date lastRentingStart; //Дата начала последнего периода проката
	Date lastRentingEnd; //Дата конца последнего прокатного периода

	bool dateCompare (Date newer, Date old);
	
	public:
	std::string name;
	int rotation; //Количество дней проката за месяц
	Date inDate; //Дата поступления в прокат
	void print ();
	void rent (Date today);
	void ret (Date today);
};
#endif
