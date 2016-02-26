//CODEFIGHTS # Given array of integers,
//check if it represents either a strictly increasing or a strictly decreasing sequence.

#include<iostream>
#include<vector>

using namespace std;

bool isMonotonous(vector<int>sequence);

int main()
{
	//test

	vector<int> v = { 1, 7, 3, 4, 5, 6 };

	if (isMonotonous(v) == true)
	{
		cout << "The array is strictly increasing or strictly decreasing.\n";
	}
	else
	{
		cout << "The array is not strictly increasing or strictly decreasing.\n";
	}
}

bool isMonotonous(vector<int> sequence) {

	if (sequence.size() == 1)
	{
		return true;
	}

	int firstCounter = 0;
	int secondCounter = 0;

	for (int i = 1; i < sequence.size(); i++)
	{
		if (sequence[i] > sequence[i - 1])
		{
			continue;
		}
		else
		{
			// firstCounter increases if the current element is not bigger than the previous.
			// This means that the array is not strictly increasing.
			firstCounter++;
		}
	}

	for (int i = 1; i < sequence.size(); i++)
	{
		if (sequence[i] < sequence[i - 1])
		{
			continue;
		}
		else
		{
			// secondCounter increases if the current element is not bigger than the previous.
			// This means that the array is not strictly decreasing.
			secondCounter++;
		}
	}

	if (firstCounter == 0)
	{
		return true;
	}

	if (secondCounter == 0)
	{
		return true;
	}

	return false;
}