#include <iostream>

using std::cout;
using std::endl;

typedef struct
{
	int i, j, k;
} ThreeDpoint;

int main()
{
	ThreeDpoint p[10];
	cout << "sizeof(ThreeDpoint) = " << sizeof(ThreeDpoint) << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "&p[" << i << "]" << (long)&p[i] << endl;
	}
}
