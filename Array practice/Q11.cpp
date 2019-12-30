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
void removing(int Array1[], int&range, int number)
{
	for (int i = 0; i <= range - 1; i++)
	{
		if (Array1[i]%number==0)
		{
			swap(Array1[i], Array1[range-1]);
			range = range - 1;
		}
	}
}
void output(int list[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << list[i] << endl;
	}
}
int main()
{
	int A[9] = { 0 }, B = 0;
	int Range = 9;
	cout << "Enter the first array\n";
	input(A);
	cout << "Enter the number\n";
	cin >> B;
	cout << "output is\n";
	removing(A, Range, B);
	output(A, Range);
	system("pause");
}
