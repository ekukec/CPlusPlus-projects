#include <iostream>

using namespace std;


double inflation(double price1, double price2);


int main()
{
	double price1, price2;
	char again;
	
	do
	{
		
		cout << "Enter the price of the item a year ago: ";
		cin >> price1;
		cout << "Enter the current price of the item: ";
		cin >> price2;
		
		
		cout << "The rate of inflation is " << inflation(price1, price2) << "% " << endl;
		cout << "Do u wanna calculate again? (Y/N) ";
		cin >>again;
		cout << endl; 
		
	}while(again == 'Y' || again == 'y');
	

	return 0;
}


double inflation(double price1, double price2)
{
	double rate;
	rate = ((price2 - price1) / price1) * 100;
	
	
	return rate;
}
