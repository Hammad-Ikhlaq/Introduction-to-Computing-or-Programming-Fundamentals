#include<iostream>
using namespace std;
int main()
{
	long int startingnum = 0, row = 0, counter = 1;
	cout << "Enter the starting number\n";
	cin >> startingnum;
	cout << "Enter row number\n";
	cin >> row;
	cout << "The triangle is\n";
	int i = 0;
	int j = 0;
	int k = startingnum;
	while ( i <= row)
	{
		j = 0;
		while (j<=i)
		{
			cout <<k<<" ";
			k++;
			j++;
		}
		cout << endl;
		i++;
	}
	system("pause");
}