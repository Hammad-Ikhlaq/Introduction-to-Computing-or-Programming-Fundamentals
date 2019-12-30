#include<iostream>
using namespace std;
int main()
{
	int number_of_values = 0, j = 0, height, numbers = 0;
	cout << "How big should be the triangle\n";
	cin >> height;
	while (j < height)
	{
		for (int number_of_values = height - j; number_of_values >= 0; number_of_values--)
		{
			cout << " ";
		}
		numbers = 1;
		for (int number_of_values = 0; number_of_values <= j; number_of_values++)
		{
			cout << numbers << " ";
			numbers = numbers*(j - number_of_values) / (number_of_values + 1);
		}
		cout << endl;
		j++;
	}
	system("pause");
	return 0;
}