#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <string>
#include "shape.h"
using namespace std;

class Rectangle : public Shape
{
	public:
		Rectangle();
		Rectangle(int the_width, int the_height);
		int getWidth();
		int getHeight();
		virtual double getArea();
	private:
		int width;
		int height;
};

#endif
