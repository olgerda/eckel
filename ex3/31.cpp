//Исходная программа:
//#include <iostream>

//using namespace std;

//#define P(A) cout << #A << ": " << (A) << endl;

//int main () {
	//int a = 1, b = 2, c = 3;
	//P(a); P(b); P(c);
	//P(a+b);
	//P((c-a)/b);
//}

#include <iostream>

using std::cout;
using std::string;
using std::endl;

#ifdef DEBUG
	#define P(A) cout << #A << ": " << (A) << endl;
#endif

int main ()
{
	int a = 1, b = 2, c = 3;
	#ifdef DEBUG
	{
		P(a);
		P(b);
		P(c);
		P(a+b);
		P((c-a)/b);
	}
	#endif
	cout << "end" << endl;
}
