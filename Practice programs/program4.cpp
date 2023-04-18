#include <iostream>
using namespace std;


int hand(int n);


int main()
{
	cout << hand(6);
	
	
	return 0;
}


int hand(int n)
{
	if(n == 1)
	{
		//cout << "Returning 1" << endl;
		return 0;
	}
	else if(n == 2)
	{
		//cout << "Returning 1" << endl;
		return 1;
	}
	else
	{
		return hand(n - 1) + (n - 1);
	}
}
