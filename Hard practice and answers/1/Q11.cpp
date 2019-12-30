#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
	double x;
	int n;
	cout << setw(16) << "Enter value of x:";
	cout << setw(16);
	cin >> x;
	cout << setw(16) << "\nEnter value of n:";
	cin >> n;
	cout << endl;
	cout  << "+--------------" << "+" <<  "----------------------" << "+" <<  "---------------------" << "+"  << "--------------------" << "+\n";
	cout << ":      " << "n"<<"       " << ":" <<"         "<< "f1(x)" <<"        "<< ":" <<"        "<< "f2(x)" <<"        "<< ":" <<"        "<< "f(x)" << "        :\n";
	cout << "+--------------" << "+" << "----------------------" << "+" << "---------------------" << "+" << "--------------------" << "+\n";
	cout << setprecision(17);
	double f1, f2, f, a, b, s,a1;
	int i = 0;
	while (i < 10&&i<=n)
	{
		
		b = 3 * x*(i + 1);
		s = pow(b, 0.33334);
		a = pow((x - 2), i);
		a1 = 15 * a;
		f1 = sqrt(a1);
		f2 = log10(s);
		f = f1 + f2;
		cout << ":    " << i << "     " << "    :    " << left << f1 << " :    " << left<<setw(15) <<setprecision(17)<< f2 << "    :    " << left << f << "    :\n";
		i++;
	}
	while (i >= 10&&i < n)
	{
		cout << ":    " << i << "    " << "    :    " << left << f1 << " :    " << left << setw(15) << f2 << "    :    " << left << f << "    :\n";
		i++;
	}
	system("pause");
	return 0;
}