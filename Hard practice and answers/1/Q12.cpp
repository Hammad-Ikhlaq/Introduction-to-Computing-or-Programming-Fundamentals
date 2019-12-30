#include<iostream>
using namespace std;
int main()
{
	long int  row = 0;
	char order = 0;
	while (order != 'q')
	{
		cout << "Enter order of the pattern:";
		cin >> order;
		cout << "Enter the height of pattern:";
		cin >> row;
		int i = 0;
		int j = 1;
		if (order =='0' || order =='a')
		{
			while (i <= row)
			{
				j = 1;
				while (j <= i)
				{
					cout << j << " ";
					j++;
				}
				cout << endl;
				i++;
			}
		}
		else if (order == '1' || order == 'd')
		{
			while (i <= row)
			{
				int k = row;
				j = 1;
				while (j <= i)
				{
					cout << k << " ";
					k--;
					j++;
				}
				cout << endl;
				i++;
			}
		}
		else
		{
			cout << "Invalid statement\n";
		}
	}
	system("pause");
}