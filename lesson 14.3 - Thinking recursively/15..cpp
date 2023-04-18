#include <iostream>
using namespace std;


int squares(int n);


int main()
{
	cout << squares(5) << endl;
	
	
	return 0;
}


int squares(int n)
{
	if(n <= 1)
	{
		return 1;
	}
	else
	{
		return (squares(n - 1) + (n * n));
	}
}
