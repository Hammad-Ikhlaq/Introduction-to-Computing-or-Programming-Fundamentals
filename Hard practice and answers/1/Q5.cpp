#include<iostream>
using namespace std;
int main()
{
	long int num1=0, num2=0, product = 1;
	while ((num1+num2)%2==0)
	{
		cout << "Enter first number\n";
		cin >> num1;
		cout << "Enter second number\n";
		cin >> num2;
		product = product*num1*num2;
	}
	cout << "The product of numbers is " << product << endl;
	system("pause");
}