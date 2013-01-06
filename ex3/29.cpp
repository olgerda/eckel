//Исходная программа:
//#include “printBinary.h”
//#include <cstdlib>
//#include <iostream>
//using namespace std;
//
//int main(int argc, char* argv[]) {
//if(argc != 2) {
//cout << “Must provide a number” << endl;
//exit(1);
//}
//double d = atof(argv[1]);
//unsigned char* cp = reinterpret_cast<unsigned char*>(&d);
//for(int i = sizeof(double)-1; i  >= 0 ; i -=2){
//printBinary(cp[i-1]);
//printBinary(cp[i]);
//}
//}

#include <iostream>
#include <cstdlib>

using std::cout;
using std::endl;

void printBinaryD (unsigned char res, int byteNum)
{
	if (byteNum == 6)
	{
		for (int i = 7; i >= 4; i--)
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
		cout << "\t";
		for (int i = 3; i >= 0; i--)
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
	else if (byteNum == 7)
	{
		if(res & 128)
		{
			cout << "1";
		}
		else
		{
			cout << "0";
		}
		cout << "\t";	
		for (int i = 6; i >= 0; i--)
		if(res & (1 << i))
		{
			cout << "1";
		}
		else
		{
			cout << "0";
		}
	}
	else
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
}

int main(int argc, char* argv[])
{
	if(argc != 2)
	{
		cout << "Must provide a number" << endl;
		exit(1);
	}
	
	//int a = 1;
	//unsigned char* ap = reinterpret_cast<unsigned char*>(&a);
	//for (int i = sizeof(int)-1; i >= 0; i--)
	//{
		//printBinaryD(ap[i]);
	//}
	//cout << endl;
	double d = atof(argv[1]);
	unsigned char* cp = reinterpret_cast<unsigned char*>(&d);
	
	for(int i = sizeof(double)-1; i >= 0; i--)
	{
		printBinaryD(cp[i], i);
	}
}
