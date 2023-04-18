#include <iostream>
using namespace std;


int sum(int par1, int par2, int par3);


int main()
{
	int num1, num2, num3;
	
	cout << "Enter number 1: ";
	cin >> num1;
	cout << "Enter number 2: ";
	cin >> num2;
	cout << "Enter number 3: ";
	cin >> num3;
	
	cout << "The sum is: " << sum(num1, num2, num3) << endl;
	
	return 0;
}


int sum(int par1, int par2, int par3)
{
	return (par1 + par2 + par3);
}
