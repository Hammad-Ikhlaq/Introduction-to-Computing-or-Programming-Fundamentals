#include<iostream>
using namespace std;
void reverse(double A[],int z)
{
	for (int i = 0; i < z; i++)
	{
		swap(A[i], A[4-i]);
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
	cout << "You have entered " << i  << " values\n";
	int z = i / 2;
	reverse(array,z);
	cout << "Array in reverse order is\n";
	for (int i = 0; i < 5; i++)
	{
		cout<< array[i]<<endl;
	}
	cout <<  endl;
	system("pause");
	return 0;
}