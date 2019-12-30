#include<iostream>
using namespace std;
int main()
{
	int num1;
	int num2;
	int num3;
	int sum;
	cout << "Enter the first number\n";
	cin >> num1;
	cout << "Enter the second number\n";
	cin >> num2;
	cout << "Enter the third number\n";
	cin >> num3;
	if (num1 == num2||num1==num3)
		num1 = 0;
	if (num2 == num3)
		num2 = 0;
	sum = num1 + num2 + num3;
	cout << "sum=" << sum;
	system("pause");
	return 0;
}