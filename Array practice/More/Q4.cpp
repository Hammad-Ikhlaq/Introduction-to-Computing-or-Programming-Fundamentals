#include<iostream>
#include<string>
#include<conio.h>
#include<stdio.h>
using namespace std;
bool  compere(int array1[], int array2[])
{
	for (int i = 0; i < 5; i++)
	{
		if (array1[i] != array2[i])
			return false;
	}
	return true;
}
int main()
{
	cout << "Enter the first array\n";
	int A[100] = { 0 };
	int B[100] = { 0 };
	int firstsize = 0;
	int secondsize = 0;
	for (int k = 0; k < 100; k++)
	{
		cin >> A[k];
		if (A[k] == -1)
		{
			firstsize=k;
			break;
		}
	}
	cout << "Enter the second array\n";
	for (int k = 0; k < 100; k++)
	{
		cin >> B[k];
		if (B[k] == -1)
		{
			secondsize=k;
			break;
		}
	}
	if (firstsize!=secondsize)
	{
		cout << "Both arrays are not identical\n";
	}
	if (firstsize == secondsize)
	{
		bool C;
		C = compere(A, B);
		if (C == true)
		{
			cout << "Both arrays are identical\n";
		}
		else
		{
			cout << "Both arrays are not identical\n";
		}
	}
	system("pause");
	return 0;
}