#include <iostream>
using namespace std;


void write(int n);


int main()
{
	write(20);
	
	
	return 0;
}


void write(int n)
{
	if(n <= 1)
	{
		cout << n;
	}
	else
	{
		write(n - 1);
		cout << ", " << n;
	}
}
