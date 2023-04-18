#include <iostream>
#include <string>
#include "truck.h"
using namespace std;

Truck::Truck() : Vehicle(), load_capacity(0), towing_capacity(0)
{
	
}

Truck::Truck(string man_type, int cylinders, Person the_owner, double l_capacity, int t_capacity) 
: Vehicle(man_type, cylinders, the_owner), load_capacity(l_capacity), towing_capacity(t_capacity)
{
	
}

Truck::Truck(const Truck& object) 
: Vehicle(object.get_manufacturer(), object.get_cylinders(), object.get_owner()), load_capacity(object.load_capacity), towing_capacity(object.towing_capacity)
{
	
}

void Truck::set_load_capacity(double l_capacity)
{
	load_capacity = l_capacity;
}

void Truck::set_towing_capacity(int t_capacity)
{
	towing_capacity = t_capacity;
}

double Truck::get_load_capacity() const
{
	return towing_capacity;
}

int Truck::get_towing_capacity() const
{
	return load_capacity;
}

void Truck::info()
{
	cout << "Manufacturer: " << get_manufacturer() << endl;
	cout << "Cylinders: " << get_cylinders() << endl;
	cout << "Owner: " << get_owner() << endl;
	cout << "Load cap. : " << load_capacity << endl;
	cout << "Towing cap. : " << towing_capacity << endl;
}
