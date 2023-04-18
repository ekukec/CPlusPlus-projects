#include <iostream>
using namespace std;

int main()
{
	double cost_now, cost_future, inflation_rate;
	int years, counter;
	char again;
	
	do
	{
	
	counter = 0;
	inflation_rate = 0.0;
		
	cout << "Enter the present cost of the item: ";
	cin >> cost_now;
	cout << "Enter the inflation rate: ";
	cin >> inflation_rate;
	cout << "Enter the number of years from which for u wish to know the price : ";
	cin >> years;
	
	inflation_rate = inflation_rate/100.0 + 1.0;
	
	cost_future = cost_now;
	
	while(counter < years)
	{
		cost_future = cost_future * inflation_rate;
		counter++;
	}
	
	cout << "After " << years << " years the cost of the item will be: " << cost_future << endl;
	cout << "Do you wish to calculate again? Y/N: ";
	cin >> again;
	cout << endl << endl;
	
	}while(again == 'Y' || again == 'y');
	
	
	return 0;
}
