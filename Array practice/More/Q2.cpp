#include<iostream>
#include<string>
#include<conio.h>
#include<stdio.h>
using namespace std;
void rootmeansquare(int A[], int size)
{
	int sum = 0;
	for (int k = 0; k < 9; k++)
	{
		sum = sum + A[k];
	}
	float Average;
	Average = sum / 9;
	float rms;
	rms = sqrt(Average);
	cout << "Its root Mean Square is " << rms << endl;
}
int main()
{
	int A[9] = { 0 };
	for (int k = 0; k < 9; k++)
	{
		cin >> A[k];
	}
	rootmeansquare(A, 9);
	system("pause");
	return 0;
}