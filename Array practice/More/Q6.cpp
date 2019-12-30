#include<iostream>
#include<string>
#include<conio.h>
#include<stdio.h>
using namespace std;
void Primelist(int A)
{
	int mode;
	for (int k = 2; k < A; k++)
	{
		mode = 2;
		for (int i = 2; i < k; i++)
		{
			if (k%i==0)
			{
				mode = 0;
				break;
			}

		}
		if (mode==2)
		{
			cout << k << ",";
		}
	}
}
int main()
{
	int A;
	cout << "Enter the number\n";
		cin >> A;
	Primelist(A);
	system("pause");
	return 0;
}