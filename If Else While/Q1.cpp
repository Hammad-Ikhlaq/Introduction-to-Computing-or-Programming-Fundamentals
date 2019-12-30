#include<iostream>
using namespace std;
int main()
{
	int amount;
	int books;
	float average;
	cout << "how many books did you buy?\n";
	cin >> books;
	cout << "how much did you spend?\n";
	cin >> amount;
	average = amount / books;
	cout << "amount spent on each book is\n" << average;
	system("pause");
	return 0;
}