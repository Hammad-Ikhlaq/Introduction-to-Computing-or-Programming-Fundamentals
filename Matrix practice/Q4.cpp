#include<iostream>
using namespace std;
void AddMatrix(int a[][3], int b[][3], int result[][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			result[i][j] = a[i][j] + b[i][j];
		}
	}
}
void TestMatrixAddition()
{
	int A[3][3] = { 0 }, B[3][3] = { 0 }, C[3][3] = { 0 };
	cout << "Enter 1st matrix\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> A[i][j];
		}
	}
	cout << "Enter 2nd matrix\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> B[i][j];
		}
	}
	AddMatrix(A,B,C);

	cout << "A=\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout<< A[i][j]<<" ";
		}
		cout << endl;
	}
	cout << "B=\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << B[i][j] << " ";
		}
		cout << endl;
	}
	cout << "A+B=\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << C[i][j] << " ";
		}
		cout << endl;
	}
}
int main()
{
	TestMatrixAddition();
	system("pause");
	return 0;
}