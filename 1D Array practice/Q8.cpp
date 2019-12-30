#include<iostream>
using namespace std;
void concaternate(int A[], int size1,int B[],int size2,int C[],int size3)
{
	int i = 0;
	for ( i = 0; i < size1; i++)
	{
		C[i] = A[i];
	}
	for (int j=0; j < size2; j++,i++)
	{
		C[i] = B[j];
	}
}
int main()
{
	int array1[5], array2[5], array3[10] = { 0 };
	cout << "Enter the first array\n";
	for (int i = 0; i < 5; i++)
	{
		cin >> array1[i];
	}
	cout << "Enter the second array\n";
	for (int i = 0; i < 5; i++)
	{
		cin >> array2[i];
	}
	 concaternate(array1, 5, array2,5,array3,10);
	 for (int i = 0; i < 10; i++)
	 {
		 cout<< array3[i];
	 }
	cout << endl;
	system("pause");
	return 0;
}