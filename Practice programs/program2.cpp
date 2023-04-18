#include <iostream>

using namespace std;


double miles(double liter, double distance);


int main()
{
	double liter, distance, car1, car2;
	
	
	cout << "Enter the number of liters spent for car 1: ";
	cin >> liter;
	cout << "Enter the distance traveled in miles for car 1: ";
	cin >> distance;
	
	cout << "The number of miles per gallon is " << miles(liter, distance) << " miles/gallon" << endl;
	car1 = miles(liter, distance);
	
	
	cout << "===================================================================" << endl;
	
	
	cout << "Enter the number of liters spent for car 2: ";
	cin >> liter;
	cout << "Enter the distance traveled in miles for car 2: ";
	cin >> distance;
	
	cout << "The number of miles per gallon is " << miles(liter, distance) << " miles/gallon" << endl;
	car2 = miles(liter, distance);
	
	
	cout << "===================================================================" << endl;
	
	
	if(car1 > car2)
	{
		cout << "Car 1 has better efficiency than car 2" << endl;
	}
	else
	{
		cout << "Car 2 has better efficiency than car 1" << endl;
	}
	
	
	return 0;
}


double miles(double liter, double distance)
{
	double gallon, ratio;
	
	gallon = liter * 0.264179;
	ratio = distance / gallon;
	
	return ratio;
}
