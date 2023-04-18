#include <iostream>

using namespace std;


class Odometer
{
	public:
		Odometer();
		void reset_odo();
		void set_fuel_eff();
		void add_trip_miles();
		double return_gallons_con();
	private:
		double miles_driven;
		double fuel_eff;
};


int main()
{
	Odometer trip1, trip2;
	
	trip1.set_fuel_eff();
	trip2.set_fuel_eff();
	
	trip1.add_trip_miles();
	trip2.add_trip_miles();
	
	trip1.return_gallons_con();
	trip2.return_gallons_con();
	
	
	return 0;
}

Odometer::Odometer() : miles_driven(0), fuel_eff(0)
{
	
}

void Odometer::reset_odo()
{
	miles_driven = 0;
}

void Odometer::set_fuel_eff()
{
	cout << "Enter fuel eff(miles per gallon): ";
	cin >> fuel_eff;
}

void Odometer::add_trip_miles()
{
	double trip;
	cout << "Enter the length of the trip in miles: ";
	cin >> trip;
	miles_driven = miles_driven + trip;
}

double Odometer::return_gallons_con()
{
	cout << "Gallon spen on this trip so far are: " << miles_driven / fuel_eff << endl;
	return miles_driven / fuel_eff;
}
