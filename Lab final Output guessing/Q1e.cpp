#include<iostream>
using namespace std;
void f(int&x, int&y)
{
	x++;
	y++;
	cout << "in func " << x << y << "\n";
}
void main()
{
	int i = 1;
	f(i, i);
	cout << i;
	system("pause");
}





