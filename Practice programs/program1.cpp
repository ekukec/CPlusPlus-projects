#include <iostream>

using namespace std;


double miles(double liter, double distance);


int main()
{
	double liter, distance;
	
	cout << "Enter the number of liters spent: ";
	cin >> liter;
	cout << "Enter the distance traveled in miles: ";
	cin >> distance;
	
	cout << "The number of miles per gallon is " << miles(liter, distance) << " miles/gallon" << endl;
	
	return 0;
}


double miles(double liter, double distance)
{
	double gallon, ratio;
	
	gallon = liter * 0.264179;
	ratio = distance / gallon;
	
	return ratio;
}
