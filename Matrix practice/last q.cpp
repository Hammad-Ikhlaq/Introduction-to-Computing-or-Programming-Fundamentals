#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;
int main()
{
	char array[100];
	cout << "Enter sentence\n";
	gets_s(array);
	for (int i = 0; array[i] != '\0'; i++)
	{
		if (array[i]>='A'&&array[i]<'Z')
		{
			array[i] = array[i]+32;
		}
		else if (array[i] >= 'a'&&array[i]<'z')
		{
			array[i] = array[i] - 32;
		}
		else if (array[i] >= '0'&&array[i]<'9')
		{
			array[i] = array[i]+5;
		}
		else if (array[i] >= '9')
		{
			array[i] = array[i]/10;
		}
	}
	cout << array;
	system("pause");
	return 0;
}
