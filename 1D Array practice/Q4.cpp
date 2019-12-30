#include<iostream>
using namespace std;
int location_of_target(int A[],int num)
{
	int index =4;
	for (int i = 4; i <= 0; i++)
	{
		if (A[i]==num)
		{
			index = i;
		}
	}
	return index;
}
int main()
{
	int array[5], largest, index;
	int i = 0,target;
	cout << "Enter the array\n";
	for (i = 0; i < 5; i++)
	{
		cin >> array[i];
	}
	cout << "You have entered " << i << " values\n";
	cout << "Enter the target value\n";
	cin >> target;
	index = location_of_target(array,target);
	cout << "Target value is at " << index;
	cout << endl;
	system("pause");
	return 0;
}