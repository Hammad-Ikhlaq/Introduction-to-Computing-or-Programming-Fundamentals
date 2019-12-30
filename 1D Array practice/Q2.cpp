#include<iostream>
using namespace std;
double Add(double A[])
{
	double sum = 0;
	for (int i = 0; i < 5; i++)
	{
		sum=sum+A[i];
	}
	return sum;
}
int main()
{
	double array[5], Sum;
	int i = 0;
	cout << "Enter the array\n";
	for (i = 0; i < 5; i++)
	{
		cin >> array[i];
	}
	cout << "You have entered " << i << " values\n";
	Sum=Add(array);
	cout << "Sum of array is\n"<<Sum;
	cout << endl;
	system("pause");
	return 0;
}