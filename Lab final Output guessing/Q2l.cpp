#include<iostream>
using namespace std;
int main()
{
	int n = 5;
	if (n % 2 == 0)
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= i; j++)
			{
				cout << i*j << ",";
			}
			cout << endl;
		}
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			cout << i*n << ",";
		}
	}
	system("pause");
	return 0;
}
