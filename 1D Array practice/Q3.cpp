#include<iostream>
using namespace std;
int find(int A[],int&index)
{
	int largest = A[0];
	index = 0;
	for (int i = 0; i < 5; i++)
	{
		if (largest<A[i])
		{
			largest = A[i];
			index = i;
		}
	}
	return largest;
}
int main()
{
	int array[5], largest,index;
	int i = 0;
	cout << "Enter the array\n";
	for (i = 0; i < 5; i++)
	{
		cin >> array[i];
	}
	cout << "You have entered " << i << " values\n";
	largest = find(array,index);
	cout << "largest value is " << largest<<endl;
	cout << "It is at " << index;
	cout << endl;
	system("pause");
	return 0;
}