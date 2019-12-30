#include<iostream>
using namespace std;
int main()
{
	int input;
	cout << "Enter the number\n";
	cin >> input;
	for (int i = 1; i <= input; i++)
	{
		if (input%i == 0&&input!=i)
		{
			cout << i;
			cout << " and ";
		}
	}
	cout << input << endl;
	system("pause");
	return 0;
}