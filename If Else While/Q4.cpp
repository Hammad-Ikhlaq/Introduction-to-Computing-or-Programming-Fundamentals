# include<iostream>
using namespace std;
int main()
{
	int nuts;
	char event;
	cout << "Input the number of nuts\n";
	cin >> nuts;
	cout << "Is it weekend?\n";
	cin >> event;
	if (nuts >= 40 && event == 'y')
		cout << "true\n";
	else if (nuts >= 40 && nuts <= 60)
		cout << "true\n";
	else
		cout << "false\n";
	system("pause");
	return 0;
}