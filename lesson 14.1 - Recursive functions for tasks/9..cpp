#include <iostream>
using namespace std;


void backwards(int n);


int main()
{
	backwards(56238);
	
	
	return 0;
}


void backwards(int n)
{
	int last, base;
	base = n;
	
	
	while(base > 10)
	{
		last = base % 10;
		cout << last;
		base = base / 10;
	}
	cout << base << endl;
}
