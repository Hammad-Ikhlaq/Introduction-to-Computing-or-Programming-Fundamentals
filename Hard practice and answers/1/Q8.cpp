#include<iostream>
using namespace std;
int main()
{
	long int  row = 0;
	char startingnum = 0;
	cout << "Enter the height of pattern:";
	cin >> row;
	cout << "Enter character for pattern:";
	cin >> startingnum;
	row = row - 1;
	int i = 0;
	int j = 0;
	while (i <= row)
	{
		j = 0;
		while (j <= i)
		{
			cout << startingnum << " ";
			j++;
		}
		cout << endl;
		i++;
	}
	while (i >=0)
	{
		j = 1;
		while (j <= i)
		{
			cout << startingnum << " ";
			j++;
		}
		cout << endl;
		i--;
	}
	system("pause");
}