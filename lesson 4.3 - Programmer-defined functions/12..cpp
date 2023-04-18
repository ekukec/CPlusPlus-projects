#include <iostream>
using namespace std;

bool even(int par1);


int main()
{
	int num;
	
	cout << "Enter a number: ";
	cin >> num;
	
	if(even(num) == true)
	{
		cout << "The number is even" << endl;
	}
	else
	{
		cout << "The number is not even" << endl;
	}
	
	return 0;
}


bool even(int par1)
{
	if((par1 % 2) == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
