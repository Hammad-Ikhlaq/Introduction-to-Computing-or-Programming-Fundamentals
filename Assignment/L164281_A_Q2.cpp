#include<iostream>
using namespace std;
int random(int a, int b)
{
	int c;
	c = rand() % (b-a)+a;
	return c;
}
int main()
{
	int x, y;
	cout << "Enter the start of range\n";
	cin >> x;
	cout << "Enter the end of range\n";
	cin >> y;
	for (int i = 0; i <= 10;i++)
	cout << random(x,y) << endl;
	system("pause");
	return 0;
}