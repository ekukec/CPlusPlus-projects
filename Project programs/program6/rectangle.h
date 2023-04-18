#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
#include "figure.h"
using namespace std;

class Rectangle : public Figure
{
	public:
		Rectangle();
		Rectangle(string the_shape, int the_height, int the_width);
		void draw();
		void center();
		void erase();
		
	private:
		int height;
		int width;
};

#endif
