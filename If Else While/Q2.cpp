#include<iostream>
using namespace std;
int main()
{
	int year;
	cout << "Enter the year\n";
	cin >> year;
	if ((year % 4 == 0) && (year % 100 != 0) && (year % 400 == 0))
	cout << "year is leap";
	system("pause");
	return 0;
}