#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int input=0;
		int  highest = input;
	cout << "Enter the values. Enter -1 for termination\n";
	while (input != -1)
	{
		cin >> input;
		if (input > highest)
			highest = input;
	}
	cout << "The largest number is " << highest;
	system("pause");
	return 0;
}