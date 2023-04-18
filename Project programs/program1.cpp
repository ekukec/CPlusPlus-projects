#include <iostream>
using namespace std;


int fact(int n);

int num_of_ways(int r, int n);


int main()
{
	cout << num_of_ways(4, 10) << endl;
	
	return 0;
}


int fact(int n)
{
	if(n == 0 || n == 1)
	{
		return 1;
	}
	else
	{
		return n * fact(n - 1);
	}
}

int num_of_ways(int r, int n)
{
	return (fact(n) / (fact(r) * fact(n - r)));
}
