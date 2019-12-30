#include<iostream>
using namespace std;
void Input(int&Length, int&colorcode,int&size)
{
	cout << "Enter the length\n";
	cin >> Length;
	cout << "Enter the colorcode\n";
	cin >> colorcode;
	cout << "Enter the size\n";
	cin >> size;
}
int main()
{
	int l=0, c=0, s=0;
	Input(l, c, s);
	system("pause");
	return 0;
}