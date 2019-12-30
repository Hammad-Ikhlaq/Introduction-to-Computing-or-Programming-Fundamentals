#include<iostream>
using namespace std;
int main()
{
	int input[50];
	int frequency[50] = { 0 };
	for (int i = 1; i <= 50; i++)
	{
		cout << "input the number\n";
		cin >> input[i];
	}
	for (int i = 1; i <= 50; i++)
	{
		for (int j = 1; j <= 50; j++)
		{
			if (input[i] == input[j])
				frequency[i]++;
		}
	}
	for (int i = 1; i <= 50; i++)
		cout << input[i] << "=" << frequency[i]<<endl;
	system("pause");
	return 0;
}