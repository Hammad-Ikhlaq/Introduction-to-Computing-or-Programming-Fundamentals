#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int input, r, w;
	float area;
	cout << "Enter 1 for circle. 2 for square. 3 for right rectangle\n";
	cin >> input;
	if (input==1)
	{
		cout << "Enter the radius of the circle\n";
		cin >> r;
		area = 3.14*r*r;
		cout << "Area is " << area<<endl;
	}
	else if (input == 2)
	{
		cout << "Enter the side of the square\n";
		cin >> r;
		area = 4 * r;
		cout << "Area is " << area<<endl;
	}
	else if (input == 3)
	{
		cout << "Enter the height and length of base of the rectangle\n";
		cin >> r;
		cin >> w;
		area = (0.5*(r + w));
		cout << "Area is " << area<<endl;
	}
	system("pause");
	return 0;
}