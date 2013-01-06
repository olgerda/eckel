#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int a[10];
	cout << "sizeof(int) = " << sizeof(int) << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "&a[" << i << "] = " << (long)&a[i] << endl;
	}
	
	char ch[10];
	cout << "sizeof(char) = " << sizeof(char) << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "&ch[" << i << "] = " << (long)&ch[i] << endl;
	}
	
	long int li[10];
	cout << "sizeof(long int) = " << sizeof(long int) << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "&li[" << i << "] = " << (long)&li[i] << endl;
	}
	
	float f[10];
	cout << "sizeof(float) = " << sizeof(float) << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "&f[" << i << "] = " << (long)&f[i] << endl;
	}
	
	double d[10];
	cout << "sizeof(double) = " << sizeof(double) << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "&d[" << i << "] = " << (long)&d[i] << endl;
	}
}
