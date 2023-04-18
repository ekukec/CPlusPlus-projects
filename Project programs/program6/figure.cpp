#include <iostream>
#include <string>
#include "figure.h"
using namespace std;

Figure::Figure() : shape("No shape")
{
	
}

Figure::Figure(string the_shape) : shape(the_shape)
{
	
}

void Figure::draw()
{
	cout << "Class: figure" << endl;
	cout << "Function: draw" << endl;
}

void Figure::center()
{
	erase();
	draw();
}

void Figure::erase()
{
	cout << "Class: figure" << endl;
	cout << "Function: erase" << endl;
}
