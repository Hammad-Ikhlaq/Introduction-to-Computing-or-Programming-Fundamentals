#include<iostream>
using namespace std;
bool searchbackwards(int val[], int index)
{
	int key = val[index];
	for (int i = index - 1; i >= 0; i--)
	{
		if (key == val[i])
			return true;
	}
	return false;
}
int count(int val[], int num, int size)
{
	int frequency = 0;
	for (int i = 0; i <= size; i++)
	{
		if (val[i] == num)
			frequency++;
	}
	return frequency;
}
int main()
{
	int A[10];
	cout << "Enter 10 numbers" << endl;
	for (int i = 0; i < 10; i++)
		cin >> A[i];
	for (int i = 0; i < 10; i++)
	{
		bool found;
		found = searchbackwards(A, i);
		if (found == false)
		{
			int C = count(A, A[i], 10);
			cout << A[i] << ":" << C << endl;
		}
	}
	system("pause");
	return 0;
}