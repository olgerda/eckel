#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void printBinary (unsigned char res)
{
	for (int i = 7; i >= 0; i--)
	{
		if(res & (1 << i))
		{
			cout << "1";
		}
		else
		{
			cout << "0";
		}
	}
}

#define PR(STR, EXPR) \
cout << STR; printBinary(EXPR); cout << endl;

unsigned char rol (unsigned char val)
{
	int highbit;
	if (val & 0x80)
	{
		highbit = 1;
	}
	else
	{
		highbit = 0;
	}
	val <<= 1;
	val |= highbit;
	return val;
}

unsigned char ror (unsigned char val)
{
	int lowbit;
	if (val & 1)
	{
		lowbit = 1;
	}
	else
	{
		lowbit = 0;
	}
	val >>= 1;
	val |= (lowbit << 7);
	return val;
}

int main()
{
	unsigned int getval;
	unsigned char a, b;
	cout << "Enter a number between 0 and 255: ";
	cin >> getval;
	a = getval;
	PR("a in binary: ", a);
	cout << "Enter a number between 0 and 255: ";
	cin >> getval;
	b = getval;
	PR("b in binary: ", b);
	PR("a|b = ", a or b);
	PR("a&b = ", a and b);
	PR("a^b = ", a xor b);
	PR("~a = ", compl a);
	PR("~b = ", compl b);
	
	unsigned char c = 0x5A;
	PR("c in binary: ", c);
	a or_eq c;
	PR("a|=c: a = ", a);
	b and_eq c;
	PR("b&=c: b = ", b);
	b xor_eq a;
	PR("b^=a: b = ", b);
	
	a = rol(a);
	PR("rol(a): a = ", a);
	b = ror(b);
	PR("ror(b): b = ", b);
}
