#include <iostream>
using namespace std;


double avg(int par1, double par2);


int main()
{
	int num1;
	double num2;
	
	cout << "Enter the integer: ";
	cin >> num1;
	cout << "Enter the double: ";
	cin >> num2;
	
	cout << "The average of the 2 numbers is: " << avg(num1, num2) << endl; 
	
	return 0;
}


double avg(int par1, double par2)
{
	return ((par1 + par2) / 2);
}
