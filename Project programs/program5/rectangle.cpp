#include <iostream>
#include <string>
#include "rectangle.h"
using namespace std;

Rectangle::Rectangle() : Figure(), height(0), width(0)
{
	
}

void Rectangle::draw()
{
	cout << "Class: rectangle" << endl;
	cout << "Function: draw" << endl;
}

void Rectangle::center()
{
	erase();
	draw();
}

void Rectangle::erase()
{
	cout << "Class: rectangle" << endl;
	cout << "Function: erase" << endl;
}
