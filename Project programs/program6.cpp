#include <iostream>
using namespace std;


int jump(int arr[], int start, int end);


int main()
{
	int test[] = {0,3,80,6,57,10,21,24,5,1,11,24,22,1};
	
	cout << jump(test,0,13);
	
	return 0;
}


int jump(int arr[], int start, int end)
{
	if(start == end)
	{
		return arr[start];
	}
	else
	{
		if(start + 1 == end)
		{
			return arr[start] + jump(arr, start + 1, end);
		}
		else if(start + 2 == end)
		{
			return arr[start] + jump(arr, start + 2, end);
		}
		else
		{
			if(jump(arr, start + 1, end) < jump(arr, start + 2, end))
			{
				return arr[start] + jump(arr, start + 1, end);
			}
			else
			{
				return arr[start] + jump(arr, start + 2, end);
			}
		}
	}
}
