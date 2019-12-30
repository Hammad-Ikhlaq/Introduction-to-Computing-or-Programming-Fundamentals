#include <iostream>
using namespace std;
int main()
{
	int num,den,gcd;
	cout<<"Enter Numerator.."<<endl;
	cin>>num;
	cout<<"Enter Denominator.."<<endl;
	cin>>den;
	int x,y;
	x=num;
	y=den;
	while (x!=y)//GCD kay liye...
	{
		if (x<y)
		{
			y=y-x;
		}
		else
			x=x-y;
	}
	gcd=x;
	num=num/gcd;
	den=den/gcd;
	cout<<"Your Fraction in reduced form is as:"<<endl;
	cout<<num<<"/"<<den<<endl;
	system("pause");
	return 0;
}