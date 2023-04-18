#include <string>
#include "rectangle.h"
using namespace std;

Rectangle::Rectangle() : Shape("Rectangle"), width(0), height(0)
{
	
}

Rectangle::Rectangle(int the_width, int the_height) : Shape("Rectangle"), width(the_width), height(the_height)
{
	
}

int Rectangle::getWidth()
{
	return width;
}

int Rectangle::getHeight()
{
	return height;
}

double Rectangle::getArea()
{
	return width * height;
}
