#include <iostream>
using namespace std;


bool in_order(int par1, int par2, int par3);


int main()
{
	int num1, num2, num3;
	
	cout << "Try to enter the numbers in an ascending order\nNumber 1: ";
	cin >> num1;
	cout << "Number 2: ";
	cin >> num2;
	cout << "Number 3: ";
	cin >> num3;
	
	if(in_order(num1, num2, num3) == true)
	{
		cout << "It is in order" << endl;
	}
	else
	{
		cout << "It is not in order" << endl;
	}
	
	return 0;
}


bool in_order(int par1, int par2, int par3)
{
	if((par1 < par2) && (par2 < par3))
	{
		return true;
	}
	else
	{
		return false;
	}
}
