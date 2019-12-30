#include<iostream>
#include<string>
#include<conio.h>
#include<stdio.h>
using namespace std;

int main()
{
	int A[100] = { 0 };
	for (int k = 0; k < 100; k++)
	{
		cin >> A[k];
		if (A[k]== -1)
		{
			cout<<"you have entered "<<k+1<<" values"s;
			break;
		}
	}
	system("pause");
	return 0;
}