#include<iostream>
using namespace std;
bool IsMatrixUpperTriangle(int A[][4])
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (j>i&&A[i][j]!=0)
			{
				return false;
			}
		}
	}
	return true;
}
void PrintArray(int a[][4])
{
	cout << "A=\n";
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

}
void InputArray(int A[][4])
{

	cout << "Enter the matrix\n";
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> A[i][j];
		}
	}
	PrintArray(A);
}

int main()
{
	bool UpperTriangle;
	int A[4][4] = { 0 };
	InputArray(A);
	UpperTriangle=IsMatrixUpperTriangle(A);
	if (UpperTriangle == true)
	{
		cout << "Matrix is Upper Triangle\n";
	}
	else
	{
		cout << "Matrix is not Upper Triangle\n";
	}
	system("pause");
	return 0;
}