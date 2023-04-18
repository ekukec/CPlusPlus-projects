#include <iostream>
using namespace std;

int main()
{
	const double LITERS_IN_GALLON = 3.78533;
	double gallon;
	
	cout << "Enter the number of gallons you wish to convert into liters: ";
	cin >> gallon;
	
	cout << gallon << " gallons equals to " << gallon * LITERS_IN_GALLON << " liters" << endl;
	
	return 0;
}
