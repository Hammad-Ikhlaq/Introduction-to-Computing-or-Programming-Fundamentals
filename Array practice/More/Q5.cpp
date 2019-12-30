#include<iostream>
#include<string>
#include<conio.h>
#include<stdio.h>
using namespace std;
void Ispalindrome(int A[], int size)
{
	int counter = 0;
	for (int k = 0; k < 9&&counter==0; k++)
	{
		if (A[k] != A[8 - k])
		{
			cout << "It is not palindrome\n";
			counter = 1;
		}
	}
	if (counter==0)
	{
		cout << "It is palindrome\n";
	}
}
int main()
{
	int A[9] = { 0 };
	int B[9] = { 0 };
	cout << "Enter the array\n";
	for (int k = 0; k < 9; k++)
	{
		cin >> A[k];
	}
	Ispalindrome(A, 9);
	system("pause");
	return 0;
}