#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
#include <string>
#include "person.h"
using namespace std;

class Vehicle
{
	public:
		Vehicle();
		Vehicle(string man, int cylinders, Person the_owner);
		Vehicle(const Vehicle& object);
		void set_manufacturer(string man);
		void set_cylinders(int cylinders);
		void set_owner(Person the_owner);
		string get_manufacturer() const;
		int get_cylinders() const;
		Person get_owner() const;
		
		
	private:
		string manufacturer;
		int num_of_cylinders;
		Person owner;
};


#endif
