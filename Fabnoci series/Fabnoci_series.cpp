#include<iostream>
using namespace std;
int main()
{
	int N, i, a, b, c;
	cout << "Enter the range of Fabnocii series\n";
	cin >> N;
	i = 1;
	a = 0;
	b = 1;
	while (i <= N)
	{
		if (i <= 1)
			c = i;
		else
		{
			c = a + b;
			a = b;
			b = c;
		}
		cout << c<<" ";
		i++;
		cout << endl;
	}
	system("pause");
	return 0;
}