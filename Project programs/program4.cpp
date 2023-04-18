#include <iostream>
using namespace std;


void sort(int arr[],int first, int last, int smallest, int n);


int main()
{
	int test[] = {64, 25, 12, 22, 11, 23, 44, 14,3};
	
	for(int i = 0; i < 9; i++)
	{
		cout << test[i] << endl;
	}
	
	sort(test, 0, 8, 0, 0);
	
	for(int i = 0; i < 9; i++)
	{
		cout << test[i] << endl;
	}
	
	return 0;
}


void sort(int arr[], int first, int last, int smallest, int n)
{
	if(first <= last)
	{
		//cout << "Comparing " << arr[smallest] << " and " << arr[first] << endl;
		if(arr[smallest] > arr[first])
		{
			smallest = first;
			//cout << "smallest is now: " << smallest << endl;
		}
			
		sort(arr, first + 1, last, smallest, n);
	}
	else if(n < last)
	{
		if(arr[first] < arr[smallest])
		{
			int temp = arr[n];
			arr[n] = arr[smallest];
			arr[smallest] = temp;
			//cout << "Smallest: " << smallest << endl;
			//cout << "n: " << n << endl;
			//cout << "value of " << n << " now set to " << arr[n] << endl;
		}
		
		/*
		for(int i = n + 1; i < last + 1; i++)
		{
			cout << arr[i] << endl;
		}
		cout << "=====================" << endl;
		*/
		
		sort(arr, n + 1, last, n + 1, n + 1);
	}
	else
	{
		cout << "Sorting done" << endl;
	}
}
