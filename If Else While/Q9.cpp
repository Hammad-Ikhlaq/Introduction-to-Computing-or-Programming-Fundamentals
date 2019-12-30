#include<iostream>
using namespace std;
int main()
{
	for (int i = 1; i <= 5; i++)
	{
		cout << "|";
		for (int j = 1; j <= 1; j++)
			cout << "==";	
	}
	cout << "|\n";
	system("pause");
	return 0;
}