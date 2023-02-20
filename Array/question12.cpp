// C++ code to Segregate 0s and 1s in an array
#include <bits/stdc++.h>
using namespace std;

// Function to segregate 0s and 1s
void sort0and1(int arr[], int n)
{
	int count = 0;

	for (int i = 0; i < n; i++)
		if (arr[i] == 0)
			count++;

	
	for (int i = 0; i < count; i++)
		arr[i] = 0;

	
}

void print(int arr[], int n)
{
	cout << "Array after sort is ";

	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}

// Driver function
int main()
{
	int arr[] = { 0, 1, 0, 1, 1, 1 };
	int n = 6;

	sort0and1(arr, n);
	print(arr, n);
	return 0;
}

