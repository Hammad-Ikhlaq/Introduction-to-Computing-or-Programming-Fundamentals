#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
void Determine(char*Name, char grade)
{
	if (grade=='a'||grade=='b'||grade=='c')
	{
		cout << "Yeah you are in!\n";
	}
	else
	{
		cout << "Get lost!\n";
	}
}
int main()
{
	char id[50];
	char grade;
	cout << "Enter the id\n";
	gets(id);
	cout << "Enter the grade\n";
	cin >> grade;
	Determine(id, grade);
	system("pause");
	return 0;
}