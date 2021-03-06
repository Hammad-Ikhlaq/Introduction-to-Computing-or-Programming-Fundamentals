#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<fstream>
using namespace std;
void printBoard(int board[][3], int rows)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (board[i][j] == 0)
				cout << "\t_";
			else if (board[i][j] == 1)
			{
				cout << "\tX";
			}
			else
			{
				cout << "\tO";
			}
		}
		cout << endl;
	}
}
bool checkwinner(int b[][3], int rows, int &who)
{
	for (int i = 0; i < 3; i++)
	{
		if (b[i][0] != 0 && b[i][0] == b[i][1] && b[i][0] == b[i][2])
		{
			who = b[i][0];
			return true;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		if (b[0][i] != 0 && b[0][i] == b[1][i] && b[0][i] == b[2][i])
		{
			who = b[0][i];
			return true;
		}
	}
	if (b[0][0] != 0 && b[0][0] == b[1][1] && b[0][0] == b[2][2])
	{
		who = b[0][0];
		return true;
	}
	if (b[0][2] != 0 && b[0][2] == b[1][1] && b[0][2] == b[2][0])
	{
		who = b[0][2];
		return true;
	}

	return false;
}
void Findplace(int b[][3], int r, int ownsymbol, int oppsymbol, int&row, int&col)
{
	int who; bool winner;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (b[i][j]==0)
			{
				row = i;
				col = j;
				b[i][j] = oppsymbol;
				winner = checkwinner(b, 3, who);
				b[i][j] = 0;
				if (winner)
				{
					return;
				}
			}
		}

	}
	if (b[1][1]==0)
	{
		row = 1;
		col = 1;
		return;
	}
	else if (b[0][0]==0)
	{
		row = 0;
		col = 0;
		return;
	}
	else if (b[0][2] == 0)
	{
		row = 0;
		col = 2;
		return;
	}
	else if (b[2][0] == 0)
	{
		row = 2;
		col = 0;
		return;
	}
	else if (b[2][2] == 0)
	{
		row = 2;
		col = 2;
		return;
	}
}
//we will need
//board= 2 D array
//symbols= 0,1,2
//printboard
//input
//turn taking
//check winner
int main()
{
	int player = 1, who;
	int cross = 1, nought = 2;
	int board[3][3] = { 0 };
	int row, col;
	bool winner = false;
	printBoard(board, 3);
	for (int i = 1; i <= 9 && winner == false; i++)
	{
		if (player == 2)
		{
			Findplace(board, 3, 1, 2,row,col);
			board[row][col] = 1;
			player = 1;
		}
		else
		{
			cin >> row >> col;
			while (board[row][col] != 0)
			{
				cout << "re-enter";
				cin >> row >> col;
			}
			board[row][col] = 2;
			player = 2;
		}
		printBoard(board, 3);
		winner = checkwinner(board, 3, who);
	}
	if (winner == true)
		cout << "winner is player " << who << endl;
	else
	{
		cout << "Draw\n";
	}
	system("pause");
	return 0;
}