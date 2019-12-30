# include <iostream>
using namespace std;

void f_prime(int & former_prime, int roll_no);
void l_prime(int & latter_prime, int roll_no);
void printing_primes(int num_limit, int num);
int main()
{
	int num, former_prime = 0, latter_prime, roll_no, num_limit;
	cout << "enter two digit number:";
	cin >> num;
	cout << "enter roll number :";
	cin >> roll_no;
	f_prime(former_prime, roll_no);
	l_prime(latter_prime, roll_no);
	if ((roll_no - former_prime) > (latter_prime - roll_no))
		num_limit = former_prime;
	else
		num_limit = latter_prime;
	printing_primes(num_limit, num);
	system("pause");
	return 0;

}

void f_prime(int & former_prime, int roll_no)
{
	int flag = 1, flag1 = 1;
	while (flag == 1)
	{
		roll_no = roll_no - 1;
		flag1 = 1;
		for (int i = 2; i < roll_no; i++)
		{
			if (roll_no%i == 0)
			{
				flag1 = 0;
				break;
			}
		}
		if (flag1 == 1)
		{
			former_prime = roll_no;
			flag = 0;
		}
	}

}

void l_prime(int & latter_prime, int roll_no)
{
	int flag = 1, flag1 = 1;
	while (flag == 1)
	{
		roll_no = roll_no + 1;
		flag1 = 1;
		for (int i = 2; i < roll_no; i++)
		{
			if (roll_no%i == 0)
			{
				flag1 = 0;
				break;
			}
		}
		if (flag1 == 1)
		{
			latter_prime = roll_no;
			flag = 0;
		}
	}

}

void printing_primes(int num_limit, int num)
{
	int temp = num + 1, flag1 = 1;
	cout << "PRIME NUMBERS ARE:";
	while (temp < num_limit)
	{

		flag1 = 1;
		for (int i = 2; i < temp; i++)
		{
			if (temp%i == 0)
			{
				flag1 = 0;
				break;
			}
		}
		if (flag1 == 1 && temp % 10 == 7 || flag1 == 1 && (temp / 10) % 10 == 7 || flag1 == 7 && (temp / 100) % 10 == 7 || flag1 == 7 && (temp / 1000) % 10 == 7)
		{
			cout << temp << endl;
		}
		temp++;

	}


}