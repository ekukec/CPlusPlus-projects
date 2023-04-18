#include <iostream>
using namespace std;

template<class T>
void search(const T a[], int low_end, int high_end, T key, bool& found, int& location)
{
	int first = low_end;
	int last = high_end;
	
	int mid;
	 
	found = false; //so far
	while ( (first <= last) && !(found) )
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
			last = mid -1;
		}
		else if (key > a[mid])
		{
			first = mid + 1;
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
