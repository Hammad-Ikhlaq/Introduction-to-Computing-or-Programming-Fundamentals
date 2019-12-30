#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int input=0;
		int  sum = 0;
	cout << "Enter the values. Enter -1 for termination\n";
	while (input != -1)
	{
		cin >> input;
		sum = sum + input;
	}
	cout << "The sum is " << sum<<endl;
	system("pause");
	return 0;
}