#include <iostream>
using namespace std;


int fibo(int n);


int main()
{
	cout << fibo(5);
	
	
	return 0;
}


int fibo(int n)
{
	if(n == 0)
	{
		//cout << "Returning 1" << endl;
		return 1;
	}
	else if(n == 1)
	{
		//cout << "Returning 1" << endl;
		return 1;
	}
	else
	{
		return (fibo(n-1) + fibo(n-2));
	}
}
