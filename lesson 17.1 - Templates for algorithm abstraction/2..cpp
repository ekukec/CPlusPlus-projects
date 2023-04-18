#include <iostream>
using namespace std;


template<class T>
T absolute(T value)
{
	if(value < 0)
		return -value;
	else
		return value;
}


int main()
{
	cout << absolute(-223.3) << endl;
	
	return 0;
}
