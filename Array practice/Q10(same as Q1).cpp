#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string>
#include<fstream>
using namespace std;
void input(int Array1[])
{
	for (int i = 0; i < 5; i++)
		cin >> Array1[i];
}
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
	int A[5] = { 0 };
	int B[5] = { 0 };
	bool C;
	cout << "Enter the first array\n";
	input(A);
	cout << "Enter the second array\n";
	input(B);
	C = compere(A, B);
	if (C==true)
	{
		cout << "Both arrays are identical\n";
	}
	else
	{
		cout << "Both arrays are not identical\n";
	}
	system("pause");
}
