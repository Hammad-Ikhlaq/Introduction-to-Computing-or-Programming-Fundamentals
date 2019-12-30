#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int counter = 0;
int function1(int x, int &y)
{
	counter = counter + 5;
	x = x * 100;
	y = x * 10;
	return x*y;
}
int function2(int &x, int &y, int &z)
{
	counter = counter * 10;
	x = y*z;
	y = x*y;
	z = z*z;
	return x + y + z;
}

void main()
{
		int x = 10, y = 100, z = 1000;
		int Result = 1;
		counter = counter + 1;
		cout << counter << ", " << Result << ", " << x << ", " << y << ", "<<z << endl;
		Result = function1(x, y);
		cout << counter << ", " << Result << ", " << x << ", " << y << ", "<<z << endl;
		x = 1; y = 2; z = 3;
		cout << counter << ", " << Result << ", " << x << ", " << y << ", "<<z << endl;
		Result = function2(x, y, z);
		cout << counter << ", " << Result << ", " << x << ", " << y << ", "<<z << endl;
	system("pause");
}