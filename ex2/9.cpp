#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main ()
{
	vector<float> first;
	vector<float> second;
	vector<float> result;
	float input = 0;
	float sum = 0;
	
	for (int i = 0; i<25; ++i)
	{
		cout << i << ": ";
		cin >> input;
		first.push_back(input);
	}
	cout << "\n";
	for (int i = 0; i<25; ++i)
	{
		cout << i << ": ";
		cin >> input;
		second.push_back(input);
	}
	cout << "\n";
	for (int i = 0; i < first.size(); ++i)
	{
		sum = first[i] + second[i];
		result.push_back(sum);
	}
	
	for (int i = 0; i < result.size(); ++i)
	{
		cout << result[i] << endl;
	}
	return 0;
}
