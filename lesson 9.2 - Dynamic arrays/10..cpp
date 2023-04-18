#include <iostream>

using namespace std;

void fill_arr(int arr[], int size);


int main()
{
	int *entry, size = 10;
	entry = new int[size];
	
	fill_arr(entry, size);
	
	for(int i = 0; i < size; i++)
	{
		cout << entry[i] << endl;
	}
	
	
	return 0;
}

void fill_arr(int arr[], int size)
{
	for(int i = 0; i < size; i++)
	{
		arr[i] = i;
	}
}
