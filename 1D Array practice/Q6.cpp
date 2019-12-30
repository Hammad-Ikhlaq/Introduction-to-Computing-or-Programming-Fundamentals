#include<iostream>
using namespace std;
void shift_right(double A[], int l, int r, int d)
{
	for (int i = r; i >= l; i--)
	{
		A[i+d] = A[i];
	}
}
int main()
{
	double array[10];
	int left, right, distance;
	int i = 0;
	cout << "Enter the array\n";
	for (i = 0; i < 10; i++)
	{
		cin >> array[i];
	}
	cout << "You have entered " << i << " values\n";
	cout << "Enter the left index number\n";
	cin >> left;
	cout << "Enter the right index number\n";
	cin >> right;
	cout << "Enter the distance\n";
	cin >> distance;
	shift_right(array, left, right, distance);
	cout << "Array after shifting is\n";
	for (int i = 0; i < 10; i++)
	{
		cout << array[i] << endl;
	}
	cout << endl;
	system("pause");
	return 0;
}