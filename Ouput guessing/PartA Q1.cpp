#include<iostream>
using namespace std;
bool Vowel(char letter)
{
	if (letter == 'a' || letter == 'e'||letter == 'i'||letter == 'o'||letter == 'u')
	{
		return true;
	}
	return false;
}
int main()
{
	char letter = 'a';
	Vowel(letter) ? cout << "It is vowel\n" : cout << "Not a vowel\n";
	system("pause");
	return 0;
}