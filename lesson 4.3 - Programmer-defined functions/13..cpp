#include <iostream>
using namespace std;


bool is_digit(char par1);


int main()
{
	char sign;
	
	cout << "Enter any sign: ";
	cin >> sign;
	
	if(is_digit(sign) == true)
	{
		cout << "The sign entered is a digit" << endl;
	}
	else
	{
		cout << "The sign entered is not a digit" << endl;	
	}
	
	return 0;
}


bool is_digit(char par1)
{
	if((par1 == '0') || (par1 == '1') || (par1 == '2') || (par1 == '3') || (par1 == '4') || 
		(par1 == '5') || (par1 == '6') || (par1 == '7') || (par1 == '8') || (par1 == '9'))
	{
		return true;
	}
	else
	{
		return false;
	}
}
