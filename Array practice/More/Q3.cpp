#include<iostream>
#include<string>
#include<conio.h>
#include<stdio.h>
using namespace std;

int main()
{
	int A[100] = { 0 };
	cin >> A[0];
	int min = A[0], max = A[0];
	for (int k = 1; k < 100; k++)
	{
		cin >> A[k];
		if (A[k] != 0)
		{
			if (A[k]>max)
			{
				max = A[k];
			}
			else if (A[k]<min)
			{
				min = A[k];
			}
		}
		else if (A[k] == 0)
		{
			cout << "The range is " << max - min<<endl;
			break;
		}
	}
	system("pause");
	return 0;
}