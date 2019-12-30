#include<iostream>
using namespace std;

int main(){

	int n = 3;
	int i = 0;
	int limit = 0;

	for (i = 0; i < 2 * n; i++)
	{
		int j = 1;
		while (j < 2 * n)
		{
			if (j == n - limit || j == n + limit || i == 2 * n - 1)
				cout << "*";
			else
				cout << "-";
			j++;
		}
		cout << endl;
		if (i < n - 1)
			limit++;
	}
	system("pause");
	return 0;

}
