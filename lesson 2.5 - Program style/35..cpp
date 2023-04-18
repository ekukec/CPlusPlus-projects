#include <iostream>
using namespace std;

int main()
{
	
	int x;
	
	cout << "Enter the value of x: ";
	cin >> x;
	
	if (x < 0) 
	{
		x = 7; cout << "x is now positive.";
	}
	else 
	{
		x = - 7; cout << "x is now negative.";
	}
	
	return 0;
}
