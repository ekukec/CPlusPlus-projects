#include <iostream>

using namespace std;

int one_more(int a[], int size);

int main()
{
	int arr[5] = {3, 5, 2, 7, 8};
	
	one_more(arr, 5);
	
	return 0;
}

int one_more(int a[], int size)
{
	for(int i = 0; i < size; i++)
	{
		a[i] = a[i] + 1;
		cout << a[i] << endl;
	}
}
