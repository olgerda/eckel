//Исходная программа:
//#include <iostream>
//using namespace std;
//#define DF(N) void N() { \
//cout << "function " #N " called..." << endl;}
//DF(a); DF(b); DF(c); DF(d); DF(e); DF(f); DF(g);
//void (*func_table[])() = {a, b, c, d, e, f, g};
//int main() {
	//while(1) {
		//cout << "press a key from 'a' to 'g' "
		//"or q to quit" << endl;
		//char c, cr;
		//cin.get(c); cin.get(cr);
		//if (c=='q')
		//break;
		//if (c < 'a' || c > 'g')
		//continue;
		//(*func_table[c - 'a'])();
		//}
		//}
		
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

#define DF(N) string N() { \
	return "function " #N " called...";}
	
DF(a)
DF(b)
DF(c)
DF(d)
DF(e)
DF(f)
DF(g)

string (*func_table[])() = {a, b, c, d, e, f, g};
int main()
{
	while(1)
	{
		cout << "press a key from 'a' to 'g' "
		"or q to quit" << endl;
		char c, cr;
		cin.get(c);
		cin.get(cr);
		if (c=='q')
		{
			break;
		}
		if (c < 'a' || c > 'g')
		{
			continue;
		}
		cout << (*func_table[c - 'a'])() << endl;
	}
}
