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
	for(int i = n; i > 0; i--)
	{
		cout << "*";
	}
}
