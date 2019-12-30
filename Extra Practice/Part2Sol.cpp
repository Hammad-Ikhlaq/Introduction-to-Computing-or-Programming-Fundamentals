#include<iostream>
using namespace std;

void DrawRectangle(int n);

int main()
{
	int n=1;
	while(n%2 != 0)
	{	
		cout<<"input an even number:"<<endl;
		cin>>n;	
	}
	DrawRectangle(n);				
}

void DrawRectangle(int n)
{
	int height= n/2;	
	int counter_height=1;
	int counter_width=1;
	int counter_spaces=1;
	int spaces=0;

	while(counter_height<=height)
	{
		if(counter_height == 1 || counter_height == height)
		{
			for(counter_width = 1;counter_width<=n;counter_width++)
			{
				cout<<"*";
			}
			cout<<endl;
		}
		
		else
		{
			cout<<"*";
			spaces = n-2;
			for(counter_spaces=1;counter_spaces<=spaces;counter_spaces++)
			{
				cout<<" ";
			}
			cout<<"*";
			cout<<endl;
		}
		
		counter_height++;
	}
}
			