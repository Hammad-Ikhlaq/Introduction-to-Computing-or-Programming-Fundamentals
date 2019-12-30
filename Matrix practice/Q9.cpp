#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;
int main()
{
	char sentence[100],find,replace;
	cout << "Enter sentence\n";
	gets_s(sentence);
	cout << "Enter find character\n";
	cin >> find;
	cout << "Enter replace character\n";
	cin >> replace;
	for (int i = 0; sentence[i] != '\0'; i++)
	{
		if (sentence[i] == find)
		{
			sentence[i] = replace;
		}
	}
	cout << sentence;
	system("pause");
	return 0;
}
