#include<iostream>
using namespace std;

void insertionsort(int a[], int n)
{
	int i, j, index;
	for (i = 1; i < n; i++)
	{
		index = a[i];
		j = i;
		while ((j > 0) && (a[j - 1] > index))
		{
			a[j] = a[j - 1];
			j = j - 1;
		}
		a[j] = index;
	}	
}

int main()
{
	int a[20];
	int i, n;
	cout << "Enter the size of array"<<endl;
	cin >> n;
	cout << "Enter the elements" << endl;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	insertionsort(a, n);
	cout << "After shorting" << endl;
	for (i = 0; i < n; i++)
	{
		cout << a[i] << endl;
	}
}
