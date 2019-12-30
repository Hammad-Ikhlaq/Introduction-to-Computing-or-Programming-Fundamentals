#include<iostream>
using namespace std;
int main()
{
	int n;
	long highest=-99999999999999999;
	int	lowest=9999999999999;
	int sum=0;
	float average;
	for (int i = 0; i <= 4; i++)
	{
		cout << "enter the number\n";
		cin >> n;
		sum = sum + n;
		average = sum / 5;
		if (n >= highest)
			highest = n;
		if (n <= lowest)
			lowest = n;
		}
	cout << "The average is " << average<<endl;
	cout << "The highest number is " << highest<<endl;
	cout << "The lowest number is " << lowest<<endl;
	system("pause");
	return 0;
}