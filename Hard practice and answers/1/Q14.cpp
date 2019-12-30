#include<iostream>
using namespace std;
int main()
{
	int n,c,q1,q2,a1,a2,m,f,t;
	cout<<"Enter Number Of Students:  ";
	cin>>n;
	for (int i = 1; i <= n; i++)
	{
		cout<<"-----Student # "<<i<<"-----"<<endl;
		cout<<"Enter Number Of Courses:  ";
		cin>>c;
		cout<<endl;
		for (int j = 1; j <= c; j++)
		{
		    cout<<"--- Course # "<<j<<" ---"<<endl;
	    	cout<<"-Quiz # 1:  ";
   			cin>>q1;
			cout<<endl;
			cout<<"-Quiz # 2:  ";
			cin>>q2;
			cout<<endl;
			cout<<"-Assignment # 1:  ";
			cin>>a1;
			cout<<endl;
			cout<<"-Assignment # 2:  ";		
			cin>>a2;
			cout<<endl;
			cout<<"-Midterm:  ";
			cin>>m;
			cout<<endl;
			cout<<"-Final:  ";
			cin>>f;
			cout<<endl;
			t=(q1+q2+a1+a2+m+f)/2;
			cout<<"---> Total:  "<<t;
			cout<<endl;
			if (t>=80)
			{
				cout<<"---> Grade:  A";
				cout<<endl;
			}
			else if (t>=70)
			{
				cout<<"---> Grade: B";
				cout<<endl;
			}
			else if (t>=60)
			{
				cout<<"---> Grade: C";
				cout<<endl;
			}
			else if (t>=55)
			{
				cout<<"---> Grade: D";
				cout<<endl;
			}
			else if (t>=55)
			{
				cout<<"---> Grade: E";
				cout<<endl;
			}
			else if (t<50)
			{
				cout<<"---> Grade: F";
				cout<<endl;
			}
	   }
	}

	system("pause");
	return 0;
}
