#include<iostream>
using namespace std;
int main()
{
	int num1, num2, num3;
	cout << "Enter the three numbers.\n";
	cin >> num1;
	cin >> num2;
	cin >> num3;
	if (num1 <= num2&&num1 <= num3)
	{
		cout << num1;
		if (num2 < num3)
		{
			cout << num2 << num3;
		}
		else cout << num3 << num2;
	}
	if (num2 <= num1&&num2 <= num3)
	{
		cout << num2;
		if (num1 < num3)
		{
			cout << num1 << num3;
		}
		else cout << num3 << num1;
	}
	if (num3 <= num2&&num3 <= num1)
	{
		cout << num3;
		if (num2 < num1)
		{
			cout << num2 << num1;
		}
		else cout << num1 << num2;
	}
	system("pause");
	return 0;
}