#include <iostream>
using namespace std;


template<class T>
T maximum(T first, T second)
{
	if(first > second)
		return first;
	else
		return second;
}


int main()
{
	cout << maximum(2,3) << endl;
	
	
	return 0;
}
