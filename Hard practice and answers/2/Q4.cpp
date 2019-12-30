#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int main()
{
	char sen[50];
	gets(sen);
	int size = 0;
	for (int i = 0; sen[i] !='\0'; i++)
	{
		size++;
	}
	for (int i = 0; sen[i]!='\0' ; i++)
	{
		if (!(((sen[i] >= 'A' && sen[i]<='Z') || (sen[i] >= 'a' && sen[i]<='z'))||sen[i]==' '))
		{
			for (int j = i; j < size; j++)
			{
				swap(sen[j], sen[j + 1]);
			}
			i--;
		}
	}
	cout << sen;
	system("pause");
	return 0;

}
