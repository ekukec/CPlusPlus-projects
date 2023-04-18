#include <iostream>
#include <string>
#include "vehicle.h"
using namespace std;

Vehicle::Vehicle() : manufacturer("No manufacturer"), num_of_cylinders(0), owner(Person())
{
	
}

Vehicle::Vehicle(string man, int cylinders, Person the_owner) : manufacturer(man), num_of_cylinders(cylinders), owner(the_owner)
{
	
}

Vehicle::Vehicle(const Vehicle& object) : manufacturer(object.manufacturer), num_of_cylinders(object.num_of_cylinders), owner(object.owner)
{
	
}

void Vehicle::set_manufacturer(string man)
{
	manufacturer = man;
}

void Vehicle::set_cylinders(int cylinders)
{
	num_of_cylinders = cylinders;
}

void Vehicle::set_owner(Person the_owner)
{
	owner = the_owner;
}

string Vehicle::get_manufacturer() const
{
	return manufacturer;
}

int Vehicle::get_cylinders() const
{
	return num_of_cylinders;
}

Person Vehicle::get_owner() const
{
	return owner;
}
