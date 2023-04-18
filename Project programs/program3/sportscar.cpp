#include <iostream>
#include <string>
#include "sportscar.h"
using namespace std;

SportsCar::SportsCar() : Car(), top_speed(0), zero_to60(0.0)
{
	
}

SportsCar::SportsCar(string man, int cylinders, Person the_owner, int hpw, double the_price, int speed, double acc_sec)
: Car(man, cylinders, the_owner, hpw, the_price), top_speed(speed), zero_to60(acc_sec)
{
	
}

SportsCar::SportsCar(const SportsCar& object) 
: Car(object.get_manufacturer(), object.get_cylinders(), object.get_owner(), object.get_horsepower(), object.get_price()), top_speed(object.top_speed), zero_to60(object.zero_to60)
{
	
}

void SportsCar::set_top_speed(int speed)
{
	top_speed = speed;
}

void SportsCar::set_zero_to60(double acc_sec)
{
	zero_to60 = acc_sec;
}

int SportsCar::get_top_speed() const
{
	return top_speed;
}

double SportsCar::get_zero_to60() const
{
	return zero_to60;
}

void SportsCar::info()
{
	cout << "Manufacturer: " << get_manufacturer() << endl;
	cout << "Cylinders: " << get_cylinders() << endl;
	cout << "Owner: " << get_owner() << endl;
	cout << "Horsepower: " << get_horsepower() << endl;
	cout << "Price: " << get_price() << "$" << endl;
	cout << "Top speed: " << top_speed << "km/h" << endl;
	cout << "0 to 100: " << zero_to60 << "sec" << endl;
}
