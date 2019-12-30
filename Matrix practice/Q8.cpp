#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	const int FRIENDS_COUNT = 5;	// Total number of friends
	const int NAME_LENGHT = 50;		// Each name can be 50 characters long at max.
	char myFriendList[FRIENDS_COUNT][NAME_LENGHT] = { 0 };	// All the names initializes to null character.
	char name[1][50];
	for (int i = 0; i<FRIENDS_COUNT; i++)
	{
		cout << "Friend " << i + 1 << ":\t";
		cin.getline(myFriendList[i], NAME_LENGHT);	//myFriendList[i] is the name of ith friend and its max length can be 50.
	}
	for (int i = 0; i<FRIENDS_COUNT; i++)
	{
		cout << "Friend " << i + 1 << ":\t";
		cout << myFriendList[i] << endl; //Display ith friends name which is a c-string.
	}
	cout << "Enter friend name which you want to search in friend list:\t";
	gets_s(name[1], 50);
	int length;
	length = strlen(name[1]);
	for (int k = 0; k < 5; k++)
	{
		for (int i = 0; myFriendList[k][i] != '\0'; i++)
		{
			int j = 0;
				if (myFriendList[k][i]==name[1][j])
				{
					for ( j = 0; j<length&&myFriendList[k][i] == name[1][j]; j++, i++);
					if (length == j)
						cout << myFriendList[k]<<endl;
				}
			
		}
	}
	system("pause");
	return 0;
}
