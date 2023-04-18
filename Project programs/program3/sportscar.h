#ifndef SPORTSCAR_H
#define SPORTSCAR_H
#include <iostream>
#include <string>
#include "car.h"
using namespace std;

class SportsCar : public Car
{
	public:
		SportsCar();
		SportsCar(string man, int cylinders, Person the_owner, int hpw, double the_price, int speed, double acc_sec);
		SportsCar(const SportsCar& object);
		void set_top_speed(int speed);
		void set_zero_to60(double acc_sec);
		int get_top_speed() const;
		double get_zero_to60() const;
		void info();
		
		
	private:
		int top_speed;
		double zero_to60;
};


#endif
