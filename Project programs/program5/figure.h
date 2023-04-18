#ifndef FIGURE_H
#define FIGURE_H
#include <iostream>
#include <string>
using namespace std;

class Figure
{
	public:
		Figure();
		virtual void draw();
		virtual void erase();
		
	private:
		string shape;
};

#endif
