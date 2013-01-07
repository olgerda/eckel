#include <iostream>
#include "6.h"

using std::cout;
using std::endl;

void Hen::display()
{
	cout << "This is a hen, 3.78 kg" << endl;
}

void Hen::Nest::display()
{
	cout << "This is a hen's nest" << endl;
}

void Hen::Nest::Egg::display()
{
	cout << "This is a hen's egg" << endl;
}

/*int main ()
{
	Hen hen;
	Hen::Nest nest;
	Hen::Nest::Egg egg;
	
	hen.display();
	nest.display();
	egg.display();
}
*/
