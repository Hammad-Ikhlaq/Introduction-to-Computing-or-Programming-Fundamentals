#include<iostream>
using namespace std;
float Convert(float temp)
{
	return (1.8)*temp + 32;
}
int main()
{
	float temp = 30;//normal body temperature
	cout << Convert(temp);
	system("pause");
	return 0;
}