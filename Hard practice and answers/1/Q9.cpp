#include<iostream>
using namespace std;
int main()
{
	double pi = 0;
	double i = 1;
	while (i <= 300)
	{
		pi = pi + (4 / i);
		i = i + 2;
		pi = pi - (4 / i);
		i = i + 2;
		if (i==101)
			cout << "pi = " << pi << endl;
		if (i == 201)
			cout << "pi = " << pi << endl;
	}
	cout << "pi = " << pi<<endl;
	system("pause");
	return 0;
}