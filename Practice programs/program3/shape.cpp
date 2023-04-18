#include <string>
#include "shape.h"
using namespace std;

Shape::Shape()
{
	name="";
}

Shape::Shape(string name)
{
	this->name = name;
}

string Shape::getName()
{
	return this->name;
}

void Shape::setName(string newName)
{
	this->name = newName;
}
