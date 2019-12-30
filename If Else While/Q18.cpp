#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char units, tens, hund, thou;
	cout << "Enter 4-digit positive number: ";
	thou = _getche();
	hund = _getche();
	tens = _getche();
	units = _getche();
	cout << endl << "\nOutput:\n" << units << ": Units\n" << tens << ": Tens\n" << hund << ": Hundreds\n" << thou << ": Thousands\n\n";
	system("pause");
	return 0;
}
