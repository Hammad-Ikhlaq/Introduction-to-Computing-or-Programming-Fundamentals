#include<iostream>
#include<conio.h>
using namespace std;
void inputArray(int a[], int size)
{
	for (int i = 3; i<size * 2; i++)
		cin >> a[i];   //suppose user enters       
	// 5 every time
}

int confuse2(int &a, int e[], int b, int &c, int size)
{
	inputArray(e, size);
	a = e[5] + e[4];
	b = b + e[3];
	c = c*c;
	return (a*b);
}

	int confuse1(int b, int &a, int &c)
	{
		int array1[6] = { 1, 2, 3 };
		int abc = confuse2(a, array1, c, b, 3);
		c = c * 10;
		b = a + c;
		for (int i = 0; i<6; i++)
			cout << array1[i] << "   ";
		return abc;
		cout << "\nleaving confuse1\n";
	}

	void inputNums(int a, int b, int c)
	{
		cin >> a >> b >> c;   //whatever you like.
	}



	void main()
	{
		int a = -1, b = 1, c = 2;
		inputNums(a, b, c);
		int d = confuse1(a, b, c);
		cout << "The result is: " << d;
		cout << endl << a << " " << b << " " << c;
		_getch();
		system("pause");
	}
