#include<iostream>
using namespace std;
int main()
{
	int n,i=0,spaces=0;
	cout << "Enter the height of the pattern\n";
	cin >> n;
	int p = n;
	for (int j = 0; j < p; j++)
	{
		if (j==0)
		{
			for (int i = 1; i <= n; i++)
			{
				cout << i << " ";
				if (i==n-1)
				{
					cout << " ";
				}
				if (i == n)
				{
					cout << " ";
					for (int i = n-1; i >= 1; i--)
					{
						cout << i << " ";
					}
				}
			}
		}
		else
		{
			for (int i = 1; i <= n; i++)
			{
				cout << i << " ";
				if (i == n)
				{
					for (int k = 0; k < spaces; k++)
					{
						cout << "    ";
					}
					for (int i = n; i >= 1; i--)
					{
						cout << i << " ";
					}
				}
			}
		}
		cout << endl;
		n = n - 1;
		spaces++;
	}
	cout << endl;
	system("pause");
	return 0;
}