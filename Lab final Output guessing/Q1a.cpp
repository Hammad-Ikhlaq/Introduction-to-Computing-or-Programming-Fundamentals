#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	bool isValid = "True";
	int x = 5;
	if ((x != 5) || !isValid && ((x == 5) && isValid))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	system("pause");
	return 0;
}

