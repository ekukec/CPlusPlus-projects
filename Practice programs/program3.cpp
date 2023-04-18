#include <iostream>
#include <stdlib.h>

using namespace std;


void swap(int arr[], int num);


int main()
{
	int a[100], num = 0;
	int rando = rand() % 100;
	
	for(int i = 0; i < rando; i++)
	{
		a[i] = rand() % 200;
		cout << "Number " << i + 1 << " = " << a[i] << endl;
		num++;
	}
	
	swap(a, num);
	
	return 0;
}


void swap(int arr[], int num)
{
	int temp;
	num = num - 1;
	
	cout << "First number before swap: " << arr[0] << endl
	<< "Last number before swap: " << arr[num] << endl;
	
	temp = arr[0];
	arr[0] = arr[num];
	arr[num] = temp; 
	
	cout << "First number after swap: " << arr[0] << endl
	<< "Last number after swap: " << arr[num] << endl;
}
