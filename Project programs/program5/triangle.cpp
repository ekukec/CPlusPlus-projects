#include <iostream>
#include <string>
#include "triangle.h"
using namespace std;

Triangle::Triangle() : Figure(), side_length(0)
{
	
}

void Triangle::draw()
{
	cout << "Class: triangle" << endl;
	cout << "Function: draw" << endl;
}

void Triangle::center()
{
	erase();
	draw();
}

void Triangle::erase()
{
	cout << "Class: triangle" << endl;
	cout << "Function: erase" << endl;
}
