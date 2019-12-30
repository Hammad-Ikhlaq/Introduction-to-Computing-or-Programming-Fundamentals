#include<iostream>
using namespace std;
void subtotal(double A[])
{
	double Ans[5] = { 0 };
	for (int i = 0; i < 5; i++)
	{
		for (int j = i; j >= 0; j--)
		{
			Ans[i] = Ans[i] + A[j];
		}
	}
	for (int z = 0; z < 5; z++)
	{
		A[z] = Ans[z];
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
	subtotal(array);
	cout << "Array in adding order is\n";
	for (int i = 0; i < 5; i++)
	{
		cout << array[i] << endl;
	}
	cout << endl;
	system("pause");
	return 0;
}