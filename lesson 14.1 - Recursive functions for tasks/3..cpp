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
	if(n < 10)
	{
		cout << n;
	}
	else
	{
		cout << n % 10;
		backwards(n / 10);
	}
}
