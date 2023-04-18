#ifndef FIGURE_H
#define FIGURE_H
#include <iostream>
#include <string>
using namespace std;

class Figure
{
	public:
		Figure();
		Figure(string the_shape);
		virtual void draw();
		virtual void center();
		virtual void erase();
		
	private:
		string shape;
};

#endif
