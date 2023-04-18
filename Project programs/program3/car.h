#ifndef CAR_H
#define CAR_H
#include <iostream>
#include <string>
#include "vehicle.h"
using namespace std;

class Car : public Vehicle
{
	public:
		Car();
		Car(string man, int cylinders, Person the_owner, int hpw, double the_price);
		Car(const Car& object);
		void set_horsepower(int hpw);
		void set_price(double the_price);
		int get_horsepower() const;
		double get_price() const;
		
		
	private:
		int horsepower;
		double price;
};


#endif
