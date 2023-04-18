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
	for(int i = 1; i <= n; i++)
	{
		if(i == n)
		{
			cout << i;
		}
		else
		{
			cout << i << ", ";
		}
	}
}
