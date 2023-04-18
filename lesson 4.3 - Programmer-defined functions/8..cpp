#include <iostream>
using namespace std;


char fun(double par1);


int main()
{
	double number;
	
	cout << "Enter the number: ";
	cin >> number;
	
	cout << fun(number) << endl;
	
	return 0;
}


char fun(double par1)
{
	if(par1 > 0)
	{
		return ('P');
	}
	else
	{
		return ('N');
	}
}
