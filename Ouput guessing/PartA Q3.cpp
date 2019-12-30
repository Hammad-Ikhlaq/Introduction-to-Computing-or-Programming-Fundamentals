#include<iostream>
using namespace std;
int Formula(long int m,long int s)
{
	return m*s*s;
}
int main()
{
	long int speedOfLight, mass;
	cout << "Enter the speed of light\n";
	cin >> speedOfLight;
	cout << "Enter the mass of object in kg\n";
	cin >> mass;
	cout << Formula(mass,speedOfLight);
	system("pause");
	return 0;
}