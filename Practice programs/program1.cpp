#include <iostream>
using namespace std;


template<class T>
int search(T arr[], T value, int filled)
{
	for(int i = 0; i < filled; i++)
	{
		if(arr[i] == value)
		{
			return i;
		}
	}
	
	return -1;
}


int main()
{
	int test[10] = {1,2,5,3,66,2,123,64,342,333};
	char test2[10] = {"fuasdkweg"};
	
	
	cout << search(test, 63,10) << endl;
	
	cout << search(test2,'g',10) << endl;
	
	
	return 0;
}
