#include<iostream>
using namespace std;
int main()
{
	int inputs[10];
	int i = 1;
	int sum = 0;
	while (i <= 10)
	{
		cout << "Enter the number\n";
		cin >> inputs[i];
		sum = sum + inputs[i];
		i++;
	}
	system("cls");
	cout << inputs[1]<< inputs[2] << inputs[3] << inputs[4] << inputs[5] << inputs[6] << inputs[7] << inputs[8] << inputs[9] << inputs[10]<<endl;
	cout << "sum is " << sum<<endl;
	system("pause");
	return 0;
}