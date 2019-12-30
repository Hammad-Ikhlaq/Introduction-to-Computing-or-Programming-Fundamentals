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
void checking(int Array1[], int range, int Array2[],int array3[])
{
	for (int i = 0; i <= range - 1; i++)
	{
		if (Array1[i] == Array2[i])
		{
			array3[i] = Array1[i];
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
	int A[9] = { 0 }, B[9] = { 0 }, C[9] = { 0 };
	cout << "Enter the first array\n";
	input(A);
	cout << "Enter the second array\n";
	input(B);
	cout << "output is\n";
	checking(A, 9, B,C);
	output(C, 9);
	system("pause");
}
