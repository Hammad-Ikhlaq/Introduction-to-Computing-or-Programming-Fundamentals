#include<iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter num=";
	cin >> num;
	int i = 2, s = 0;
	while (i<num)
	{
		if (num%i == 0)
		{
			s++;
		}
		i++;
	}
	if (num == 1)
		cout << "Not Prime\n";
	if (s>0)
		cout << "Not Prime\n";
	else
		cout << "Prime Number\n";
	system("pause");
	return 0;
}

