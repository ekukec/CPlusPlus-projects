#include <iostream>
#include <cstdlib>
using namespace std;


double power(int x, int n);
//Precondition: n > = 0.
//Returns x to the power n.
int main()
{
	for (int n = 0; n > -4; n--)
		cout << "3 to the power " << n
		<< " is " << power(3, n) << endl;
		
	return 0;
}
//uses iostream and cstdlib:
double power(int x, int n)
{
	if(x == 0)
	{
		cout << "illegal input" << endl;
		exit(1);
	}
	
	if(n < 0)
	{
		return (1 / (power(x, -n)));
	}
	else if(n > 0)
	{
		return ((power(x, n - 1) * x));
	}
	else // n == 0
	{
		return (1.0);
	}
}
