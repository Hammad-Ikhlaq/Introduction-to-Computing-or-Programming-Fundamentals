#include<iostream>
using namespace std;
int main()
{
	int spd;
	char bd;
	int ticket = 0;
	cout << "is it your birthday?\n";
	cin >> bd;
	cout << "what was your speed?\n";
	cin >> spd;
	if (spd >= 0 && spd <= 65 && bd == 'y')
		cout << "Ticket =" << ticket;
	else if (spd >= 66 && spd <= 85 && bd == 'y')
	{
		ticket = ticket + 1;
		cout << "Ticket =" << ticket;
	}
	else if(spd >= 80 && bd == 'y')
	{
		ticket = ticket + 2;
		cout << "Ticket=" << ticket;
	}
	if (spd >= 0 && spd <= 60 && bd == 'n')
		cout << "Ticket =" << ticket;
	else if (spd >= 61 && spd <= 80 && bd == 'n')
	{
		ticket = ticket + 1;
		cout << "Ticket =" << ticket;
	}
	else if(spd >= 80 && bd == 'n')
	{
		ticket = ticket + 2;
		cout << "Ticket=" << ticket;
	}
	system("pause");
	return 0;
}