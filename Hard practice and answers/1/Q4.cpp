#include<iostream>
using namespace std;
int main()
{
	int player1 = 1, player2 = 1;
	cout << "SELECT\n1 for rock\n2 for paper\n3 for scissor\n";
	while (1)
	{
		cout << "Player 1 turn\n";
		cin >> player1;
		cout << "Player 2 turn\n";
		cin >> player2;
		if (player1==1&&player2==2)
		{
			cout << "Player 2 is winner\n";
		}
		else if (player1 == 2 && player2 == 3)
		{
			cout << "Player 2 is winner\n";
		}
		else if (player1 == 3 && player2 == 1)
		{
			cout << "Player 2 is winner\n";
		}
		else if (player2 == 1 && player1 == 2)
		{
			cout << "Player 1 is winner\n";
		}
		else if (player2 == 2 && player1 == 3)
		{
			cout << "Player 1 is winner\n";
		}
		else if (player2 == 3 && player1 == 1)
		{
			cout << "Player 1 is winner\n";
		}
		else
		{
			cout << "Draw\n";
		}
	}
	system("pause");
}