#include <iostream>
#include <cstdlib>
#include "genericlist.h"
#include "genericlist.cpp"
using namespace std;
using namespace listsavitch;


template<class T>
int search(GenericList<T>& arr, T value, int length)
{
	for(int i = 0; i < length; i++)
	{
		if(arr.get_nth(i) == value)
		{
			return i;
		}
	}
	return -1;
}


int main()
{
	GenericList<int> test(10);
	GenericList<char> test2(10);
	
	for(int i = 0; i < 10; i++)
	{
		test.add(rand() % 100);
		test2.add('a' + rand() % 26);
	}
	cout << test << endl;
	cout << test2 << endl;
	
	cout << search(test, 62, 10) << endl;
	cout << test.get_nth(5) << endl;
	
	cout << search(test2, 'e', 10) << endl;
	cout << test2.get_nth(4) << endl;
	
	return 0;
}
