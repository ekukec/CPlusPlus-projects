#include <iostream>
#include <string>
#include "figure.h"
using namespace std;

Figure::Figure() : shape("No shape")
{
	
}

void Figure::draw()
{
	cout << "Class: figure" << endl;
	cout << "Function: draw" << endl;
}

void Figure::erase()
{
	cout << "Class: figure" << endl;
	cout << "Function: erase" << endl;
}
