#include<iostream>
using namespace std;
int GuessWhat(int &a, int &b)
{
	int c = 0;
	a = c + 1;
	b = c + 2;

	return a + b;
}
int GuessAgain(int &a, int &b, int c, int d)
{
	int i;
	c = c + 5;
	d = d * 2;

	for (i = 0; i < c; i++)
	{
		a = a + d;
	}

	b = c + d;

	return i;
}


int main()
{
	int a = 0, b = 0, c = 0, d = 0, e = 0;

	e = GuessWhat(a, b);
	cout << a << ", " << b << ", " << c << ", " << d << ", " << e << endl;
	e = GuessWhat(d, c);
	cout << a << ", " << b << ", " << c << ", " << d << ", " << e << endl;
	e = GuessAgain(a, b, c, d);
	cout << a << ", " << b << ", " << c << ", " << d << ", " << e << endl;
	e = GuessAgain(d, c, b, a);
	cout << a << ", " << b << ", " << c << ", " << d << ", " << e << endl;
	system("pause");
	return 0;
}
