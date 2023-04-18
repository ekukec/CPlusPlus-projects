#include <iostream>
using namespace std;


void asterisk(int n);


int main()
{
	asterisk(7);
	
	
	return 0;
}


void asterisk(int n)
{
	if(n <= 1)
	{
		cout << "*";
	}
	else
	{
		cout << "*";
		asterisk(n - 1);
	}
}
