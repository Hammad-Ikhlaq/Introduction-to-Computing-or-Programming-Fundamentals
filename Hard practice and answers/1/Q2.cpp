#include<iostream>
using namespace std;
int main()
{
	int account_no, min, current;
	char account_type;
	for (int i = 0; i < 6; i++)
	{
		cout << "Enter account number\n";
		cin >> account_no;
		cout << "Enter account type\n";
		cin >> account_type;
		cout << "Enter minimum amount\n";
		cin >> min;
		cout << "Enter current amount\n";
		cin >> current;
		cout << "Your account number is "<< account_no<<endl;
		cout << "Your account type is "<<account_type<<endl;
		cout << "Your current amount is "<< current<<endl;
		if (min<current)
		{
			cout << "Thank you\n";
		}
		else
		{
			cout << "current amount is not enough";
		}
	}
	system("pause");
}