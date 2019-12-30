#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "How big the hollow square should be?\n";
	cin >> n;
	int i = 1;
	while (i <= n*n)
	{
		if (i <= n || i > n*n - n || i%n == 0 || (i - 1) % n == 0)
			cout << "* ";
		else cout << "  ";
		if (i%n == 0)
			cout << "\n";
		i++;
	}
	system("pause");
	return 0;
}