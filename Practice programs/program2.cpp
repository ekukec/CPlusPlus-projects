#include <iostream>
using namespace std;


int index_of_smallest(const int arr[], int first, int last, int smallest);


int main()
{
	int test[] = {3,2,4,1,8,234,11,0,33,22};
	
	cout << index_of_smallest(test,0,9,0);
	
	return 0;
}


int index_of_smallest(const int arr[], int first, int last, int smallest)
{
	if(first > last - 1)
	{
		return smallest;
	}
	else if(arr[smallest] >= arr[first])
	{
		//cout << "Comparing " << arr[smallest] << " with " << arr[first] << endl;
		smallest = first;
		return index_of_smallest(arr, first + 1, last, smallest);
	}
	else if(arr[smallest] < arr[first])
	{
		return index_of_smallest(arr, first + 1, last, smallest);
	}
}
