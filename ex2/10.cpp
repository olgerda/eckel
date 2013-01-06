#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<float> numbers;
	float input = 0;
	
	for (int i = 0; i < 25; ++i)
	{
		cout << i << ": ";
		cin >> input;
		numbers.push_back(input);
	}
	
	for (int i = 0; i < numbers.size(); ++i)
	{
		cout << i << ": " << numbers[i];
		numbers[i] *= numbers[i];
		cout << "\t" << numbers[i] << endl;
	}
	
	return 0;
}
