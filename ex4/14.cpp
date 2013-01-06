#include <iostream>
#include "14d.h" //Date
#include "14.h" //Video
#include "8.h" //Stack

using std::string;

int main ()
{
	Stack videoStack;
	videoStack.initialize();
	
	Video films[3];
	
	films[1].name = "Across the Universe";
	films[2].name = "The Hobbit";
	films[0].name = "Home Alone";
	
	Date tmp;
	
	films[0].rotation = 1;
	films[0].inDate.init("10.11.1990");
	tmp.init("29.12.2012");
	films[0].rent(tmp);
	tmp.init("15.01.2011");
	films[0].ret(tmp);
	
	films[1].rotation = 5;
	films[1].inDate.init("10.09.2007");
	tmp.init("20.12.2012");
	films[1].rent(tmp);
	tmp.init("25.12.2012");
	films[1].ret(tmp);
	
	films[2].rotation = 3;
	films[2].inDate.init("20.12.2012");
	tmp.init("03.01.2013");
	films[2].rent(tmp);
	tmp.init("29.12.2012");
	films[2].ret(tmp);
	
	for (int i = 0; i < 3; i++)
	{
		videoStack.push (&films[i]);
	}
	
	for (int i = 0; i < 3; i++)
	{
		Video* vp = reinterpret_cast<Video*>(videoStack.peek());
		Video outp = *vp;
		outp.print();
		videoStack.pop();
	}
	
	videoStack.cleanup();
	return 0;
}
