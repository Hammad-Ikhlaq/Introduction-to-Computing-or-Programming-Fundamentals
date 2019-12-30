#include<iostream>
using namespace std;
int main()
{
	int num,nums;
	cout<<"Enter Value..."<<endl;
	cin>>num;
	cout<<"Enter The Number..."<<endl;
	cin>>nums;
	int units,tens,hundreds,thousands,ten_thousands,lacs,millions;
	units=num%10;
	tens=((num%100)-units)/10;
	hundreds=((num%1000)-units-tens)/100;
	thousands=((num%10000)-units-tens-hundreds)/1000;
	ten_thousands=((num%100000)-units-tens-hundreds-thousands)/10000;
	lacs=((num%1000000)-units-tens-hundreds-ten_thousands)/100000;
	millions=((num%10000000)-units-tens-hundreds-ten_thousands-lacs)/1000000;
	if (nums==tens)
	{
		cout<<"Tens"<<endl;
	}
	else if (nums==units)
	{
		cout<<"Units"<<endl;
	}
	else if (nums==hundreds)
	{
		cout<<"Hundreds"<<endl;
	}
	else if (nums==thousands)
	{
		cout<<"Thousands"<<endl;
	}
	else if (nums==ten_thousands)
	{
		cout<<"Ten Thousands"<<endl;
	}
	else if (nums==lacs)
	{
		cout<<"Lacs"<<endl;
	}
	else if (nums==millions)
	{
		cout<<"Millions"<<endl;
	}
	else
	cout<<"Invalid number"<<endl;
	system("pause");
	return 0;
}