#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <iostream>
#include "figure.h"
using namespace std;

class Triangle : public Figure
{
	public:
		Triangle();
		Triangle(string the_shape, int the_length);
		void draw();
		void center();
		void erase();
		
	private:
		int side_length;
};

#endif
