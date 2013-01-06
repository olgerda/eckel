#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class Redund
{
	int a, b, c;
	
	public: void init ()
	{ 
		cout << "Enter value for int a: ";
		cin >> this->a;
		cout << "Enter value for int b: ";
		cin >> this->b;
		cout << "Enter value for int c: ";
		cin >> this->c;
	}
	
	float calc ()
	{
		if (this->a == this ->c)
		{
			return 0;
		}
		return ((this->b * this->b)/2*(this->a-this->c));
	}
	
	public: void showRes ()
	{
		float res = this->calc();
		cout << "b*b/2*(a-c) = " << res << endl;
	}
};

int main ()
{
	Redund red;
	red.init();
	red.showRes();
}
	
