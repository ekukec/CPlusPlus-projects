#ifndef CIRCLE_H
#define CIRCLE_H
#include <string>
#include "shape.h"
using namespace std;

class Circle : public Shape
{
	public:
		Circle();
		Circle(int theRadius);
		void setRadius(int newRadius);
		double getRadius();
		virtual double getArea();
	private:
		int radius;
};

#endif
