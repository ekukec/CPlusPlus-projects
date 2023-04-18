#include <iostream>
using namespace std;
const int ARRAY_SIZE = 10;
 
template<class T>
void search(const T a[], int first, int last, T key, bool& found, int& location)
{
	int mid;
	if (first > last)
	{
		found = false;
	}
	else
	{
		mid = (first + last)/2;
		 
		if (key == a[mid])
		{
			found = true;
			cout << "Found value: " << key << endl;
			location = mid;
		}
		else if (key < a[mid])
		{
			search(a, first, mid -1, key, found, location);
		}
		else if (key > a[mid])
		{
			search(a, mid + 1, last, key, found, location);
		}
	}
}


int main()
{
	bool found;
	int location;
	int test[10] = {1,2,3,5,6,7,8,22,23,55};
	char test2[10] = {"fuasdkweg"};
	
	search(test, 0, 9, 22, found, location);
	cout << location << endl;
	
	
	search(test2, 0, 9, 'g', found, location);
	cout << location << endl;
	
	
	return 0;
}
