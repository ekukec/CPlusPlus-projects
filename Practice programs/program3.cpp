#include <iostream>
using namespace std;


int search(const int a[], int number_used, int target);


int main()
{
	int test[] = {3,2,4,1,8,234,11,0,33,22};
	
	cout << search(test, 9, 3);
	
	return 0;
}


int search(const int a[], int number_used, int target)
{
	if(a[number_used] == target)
	{
		return number_used;
	}
	else if(number_used == -1)
	{
		return -1;
	}
	else
	{
		return search(a, number_used - 1, target);
	}
}
