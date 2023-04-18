#include <iostream>
#include "figure.h"
#include "rectangle.h"
#include "triangle.h"
using namespace std;


int main()
{
	Triangle tri("tri",10);
	
	cout << "\nDerived class Triangle object calling center( ).\n";
	tri.center(); //Calls draw and center
	
	Rectangle rect("rect",5,10);
	
	cout <<	"\nDerived class Rectangle object calling center().\n";
	rect.center( ); //Calls draw and center
	
	return 0;
}
