#ifndef TRUCK_H
#define TRUCK_H
#include <iostream>
#include <string>
#include "vehicle.h"
using namespace std;

class Truck : public Vehicle
{
	public:
		Truck();
		Truck(string man_type, int cylinders, Person the_owner, double l_capacity, int t_capacity);
		Truck(const Truck& object);
		void set_load_capacity(double l_capacity);
		void set_towing_capacity(int t_capacity);
		double get_load_capacity() const;
		int get_towing_capacity() const;
		void info();
		
	private:
		double load_capacity;
		int towing_capacity;
};


#endif
