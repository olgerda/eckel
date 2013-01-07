#include <iostream>

using std::cout;
using std::endl;

class Hen
{
	public:
	class Nest
	{
		friend class Hen;
		float diameter;
		public:
		class Egg
		{
			friend class Nest;
			friend class Hen;
			float weight;
			public:
			void display ();
			void init(float a);
		};

		void display(Hen::Nest::Egg* ep);
		void init(float a);
	};
	
	void display(Hen::Nest* np, Hen::Nest::Egg* ep);
};

void Hen::display(Hen::Nest* np, Hen::Nest::Egg* ep)
{
	cout << "This is a hen, 3.78 kg. Hen seats in nest (" 
		<< np->diameter << " cm in diameter) with egg (" 
		<< ep->weight << "g weight." << endl;
}

void Hen::Nest::display(Hen::Nest::Egg* ep)
{
	cout << "This is a hen's nest. It has " << diameter
		<< "cm in diameter. There are egg of " << ep->weight <<
		" g in it." << endl;
}

void Hen::Nest::Egg::display()
{
	cout << "This is a hen's egg. It has " << weight 
		<< " g of weight" << endl;
}

void Hen::Nest::init (float a)
{
	diameter = a;
}

void Hen::Nest::Egg::init (float a)
{
	weight = a;
}

int main ()
{
	Hen hen;
	Hen::Nest nest;
	nest.init(17.6);
	Hen::Nest::Egg egg;
	egg.init(55.7);
	
	char c;
	cout << "Choose 'h', 'n' or 'e'" << endl;
	std::cin >> c;
	if (c == 'h')
		hen.display(&nest, &egg);
	else if (c == 'n')
		nest.display(&egg);
	else if (c == 'e')
		egg.display();
}
