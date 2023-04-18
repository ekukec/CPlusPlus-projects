#include <iostream>
#include <string>
#include "triangle.h"
using namespace std;

Triangle::Triangle() : Figure(), side_length(0)
{
	
}

Triangle::Triangle(string the_shape, int the_length) : Figure(the_shape), side_length(the_length)
{
	
}

void Triangle::draw()
{
	for(int i = 0; i < side_length; i++)
	{
		if(i == 0)
		{
			for(int j = 0; j < side_length - 1; j++)
			{
				cout << " ";
			}
			cout << "*";
		}
		else if(i == (side_length - 1))
		{
			for(int k = 0; k < side_length; k++)
			{
				cout << "* ";
			}
		}
		else
		{
			for(int l = 0; l < side_length - (i + 1); l++)
			{
				cout << " ";
			}
			cout << "*";
			for(int l = 0; l < (2 * i) - 1; l++)
			{
				cout << " ";
			}
			cout << "*";
		}
		cout << endl;
	}
}

void Triangle::center()
{
	erase();
	draw();
	erase();
}

void Triangle::erase()
{
	for(int i = 0; i < 13; i++)
	{
		cout << endl;
	}
}
