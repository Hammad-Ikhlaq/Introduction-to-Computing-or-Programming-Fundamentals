#include<iostream>
using namespace std;
int main()
{
	int data[10], size = 5, highest = data[0], i = 0, largeindex;
	cout << "Enter numbers\n";
	for (int i = 0; i < size; i++)
	{
		cin >> data[i];
	}
	for (size = 5; size >= 1; size--)
	{
		largeindex = 0;
		highest = data[0];
		for (int i = 0; i < size; i++)
		{
			if (data[i] >= highest)
			{
				highest = data[i];
				largeindex = i;
			}
		}
		swap(data[largeindex], data[size - 1]);
	}
	cout << "Array in ascending order is\n";
	for (int i = 0; i <5; i++)
	{
		cout << data[i]<<" ";
	}
	cout << "\n";
	size = 4;
	int mid = (size + 1) / 2;
	cout << "Its median is " << data[mid];
	system("pause");
}