#include <iostream>
#include <string>
#include "car.h"
using namespace std;

Car::Car() : Vehicle(), horsepower(0), price(0.0)
{
	
}

Car::Car(string man, int cylinders, Person the_owner, int hpw, double the_price) : Vehicle(man, cylinders, the_owner), horsepower(hpw), price(the_price)
{
	
}

Car::Car(const Car& object) : Vehicle(object.get_manufacturer(), object.get_cylinders(), object.get_owner()), horsepower(object.horsepower), price(object.price)
{
	
}

void Car::set_horsepower(int hpw)
{
	horsepower = hpw;
}

void Car::set_price(double the_price)
{
	price = the_price;
}

int Car::get_horsepower() const
{
	return horsepower;
}

double Car::get_price() const
{
	return price;
}
