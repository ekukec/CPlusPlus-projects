#include <iostream>
#include <cmath>
using namespace std;


bool is_root(int par1, int par2);


int main()
{
	int num1, num2;
	
	cout << "Enter number 1: ";
	cin >> num1;
	cout << "Enter number 2: ";
	cin >> num2;
	
	
	if(is_root(num1, num2) == true)
	{
		cout << num1 << " is square root of " << num2 << endl;
	}
	else
	{
		cout << num1 << " is not square root of " << num2 << endl;
	}
	
	
	return 0;
}


bool is_root(int par1, int par2)
{
	if(sqrt(par2) == par1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
