#include<iostream>
using namespace std;
void reverse(double A[])
{
	for (int i = 1; i < 5; i++)
	{
			swap(A[0], A[i]);
	}
}
int main()
{
	double array[5];
	int i = 0;
	cout << "Enter the array\n";
	for (i = 0; i < 5; i++)
	{
		cin >> array[i];
	}
	cout << "You have entered " << i << " values\n";
	reverse(array);
	cout << "Array after rotation is\n";
	for (int i = 0; i < 5; i++)
	{
		cout << array[i] << endl;
	}
	cout << endl;
	system("pause");
	return 0;
}