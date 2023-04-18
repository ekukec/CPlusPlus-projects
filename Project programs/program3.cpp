#include <iostream>
using namespace std;


int fact(int n);

int num_of_ways(int r, int n);


int main()
{
	cout << num_of_ways(5, 10) << endl;
	
	return 0;
}


int fact(int n)
{
	int result = n;
	for(int i = n - 1; i > 0; i--)
	{
		result = result * i;
	}
	return result;
}

int num_of_ways(int r, int n)
{
	return (fact(n) / (fact(r) * fact(n - r)));
}
