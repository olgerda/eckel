#include <iostream>

using std::cout;
using std::endl;
using std::cin;

void initialize (void* ar, int b, int val)
{
	unsigned char* bAddr = (unsigned char*)ar;
		
	for (int i = 0; i < b; i++)
	{
		bAddr[i] = val;
	}
}

int main()
{
	int a[10];
	for (int i = 0; i < 10; i++)
	{
		a[i] = i;
		cout << i << ": " << a[i] << endl;
	}
	int* ap = a;
	void* vp = static_cast<void*>(ap);
	
	int bytes;
	int value;
	cout << "How many bytes do you want to modify? (from 0 to " 
		<< 10*sizeof(int) << ") ";
	cin >> bytes;
	if (bytes > 10*sizeof(int))
	{
		cout << "The array contains only 10 integers. You are out." << endl;
		return 1;
	}
	cout << "Enter value: ";
	cin >> value;
	
	initialize (vp, bytes, value);
	
	for (int i = 0; i < 10; i++)
	{
		cout << i << ": " << a[i] << endl;
	}
}
