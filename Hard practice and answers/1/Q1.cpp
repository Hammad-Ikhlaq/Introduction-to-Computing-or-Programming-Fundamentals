#include<iostream>
using namespace std;
int main()
{
	int year;
	cout << "Enter the julian day";
	cin >> year;
	if ((year+1)%7==0)
	{
		cout << "Sunday\n";
	}
	else if ((year + 1) % 7 == 1)
	{
		cout << "Monday\n";
	}
	else if ((year + 1) % 7 == 2)
	{
		cout << "Tuesday\n";
	}
	else if ((year + 1) % 7 == 3)
	{
		cout << "Wednesday\n";
	}
	else if ((year + 1) % 7 == 4)
	{
		cout << "Thursday\n";
	}
	else if ((year + 1) % 7 == 5)
	{
		cout << "Friday\n";
	}
	else if ((year + 1) % 7 == 6)
	{
		cout << "Saturday\n";
	}
	system("pause");
}