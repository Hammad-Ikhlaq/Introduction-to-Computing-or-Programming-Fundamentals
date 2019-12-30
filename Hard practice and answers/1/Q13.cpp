#include<iostream>
using namespace std;
int main()
{
	int x,i=0;
	int arra[1000];
	cout<<"enter value for x...?"<<endl; //this program gives all values of x till x=1 and also gives value of k at that x...
	cin>>x;
	if (x==0)
	{
		cout<<"Error"<<endl;
		system("pause");
		return 0;
	}
	int flaggy=0;
	while(x!=1)
	{
		if (x % 2 == 0) //for even
	    {
			arra[i]=x;//storing each value, in order to display it at the end...
		    x=x/2;//given formula
			i++;
			flaggy++;
     	}
		else if (x%2!=0) //for odd
	    {
		    arra[i]=x;
		    x=(3*x)+1;//given formula
			i++;
			flaggy++;//counting value for k...
	    }
    }
	arra[i]=x;// this is for x=1...
	for (int i = 0; i <= flaggy; i++)
	{
		cout<<arra[i]<<" ";
	}
	
	cout<<endl;
	cout<<"The value Of K is: "<<flaggy<<endl;
	system("pause");
	return 0;
}