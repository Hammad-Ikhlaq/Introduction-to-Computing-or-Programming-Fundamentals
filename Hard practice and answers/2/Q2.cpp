#include<iostream>
using namespace std;

int main()
{
	int N,i=0,total=0,flag=0;
	cout << "Enter the number\n";
	cin >> N;
	while (i<=N)
	{
		total = total + i;
		if (total==N)
		{
			cout << "It is triangular\n";
			flag = 1;
		}
		i++;
	}
	if (flag==0)
	{
		cout << "It is not a triangular\n";
	}
	system("pause");
	return 0;

}
