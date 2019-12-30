#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string>
#include<fstream>
using namespace std;
void input(int Array1[])
{
	for (int i = 0; i < 9; i++)
		cin >> Array1[i];
}
void bubble_sort(int list[], int n)
{
	long c, d, t;

	for (c = 0; c < (n - 1); c++)
	{
		for (d = 0; d < n - c - 1; d++)
		{
			if (list[d] > list[d + 1])
			{
				t = list[d];
				list[d] = list[d + 1];
				list[d + 1] = t;
			}
		}
	}
}
int main()
{
	int A[9] = { 0 };
	cout << "Enter the array\n";
	input(A);
	bubble_sort(A,9);
	cout<<"sorted array is\n";
	for (int  i = 0; i < 9; i++)
	{
		cout << A[i] << endl;
	}
	system("pause");
}
