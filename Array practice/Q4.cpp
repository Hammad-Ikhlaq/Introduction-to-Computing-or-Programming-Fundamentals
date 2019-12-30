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
void output(int list[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << list[i] << endl;
	}
}
int main()
{
	int A[9] = { 0 };
	cout << "Enter the array\n";
	input(A);
	cout << "array is\n";
	output(A, 9);
	system("pause");
}
