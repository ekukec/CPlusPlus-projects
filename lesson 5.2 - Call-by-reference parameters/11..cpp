#include <iostream>
using namespace std;


void add_tax(double tax_rate, double& cost);


int main()
{
	double rate, price;
	
	cout << "Enter the sales tax as a percentage: ";
	cin >> rate;
	cout << "Enter the price without tax: ";
	cin >> price;
	
	add_tax(rate, price);
	
	cout << "The price with tax is: " << price << endl;
	
	return 0;
}


void add_tax(double tax_rate, double& cost)
{
	cost = cost + (cost * (tax_rate / 100));
}
