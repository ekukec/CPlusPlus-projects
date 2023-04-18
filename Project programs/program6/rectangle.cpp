#include <iostream>
#include <string>
#include "rectangle.h"
using namespace std;

Rectangle::Rectangle() : Figure(), height(0), width(0)
{
	
}

Rectangle::Rectangle(string the_shape, int the_height, int the_width) : Figure(the_shape), height(the_height), width(the_width)
{
	
}

void Rectangle::draw()
{
	for(int i = 0; i < height; i++)
	{
		if(i == 0 || i == (height - 1))
		{
			for(int j = 0; j < width; j++)
			{
				cout << "* ";
			}
		}
		else
		{
			for(int k = 0; k < width; k++)
			{
				if(k == 0 || k == (width - 1))
				{
					cout << "* ";
				}
				else
				{
					cout << "  ";
				}
			}
		}
		cout << endl;
	}
}

void Rectangle::center()
{
	erase();
	draw();
	erase();
}

void Rectangle::erase()
{
	for(int i = 0; i < 13; i++)
	{
		cout << endl;
	}
}
