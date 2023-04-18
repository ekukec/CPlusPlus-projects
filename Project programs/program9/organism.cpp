#include <iostream>
#include "organism.h"
using namespace std;

Organism::Organism() : name(' '), steps(0)
{
	
}

Organism::Organism(char the_name) : name(the_name), steps(0)
{
	
}

void Organism::move(Organism *arr[][20])
{
	
}

void Organism::breed(Organism *arr[][20], int x, int y, int the_birth)
{
	
}

void Organism::set_name(char the_name)
{
	name = the_name;
}

void Organism::set_steps(int the_steps)
{
	steps = the_steps;
}

void Organism::set_birth(int the_birth)
{
	birth = the_birth;
}

void Organism::set_x(int the_x)
{
	x = the_x;
}

void Organism::set_y(int the_y)
{
	y = the_y;
}

char Organism::get_name()
{
	return name;
}

int Organism::get_steps()
{
	return steps;
}

int Organism::get_birth()
{
	return birth;
}

int Organism::get_x()
{
	return x;
}

int Organism::get_y()
{
	return y;
}

void swap(Organism *&org1, Organism *&org2)
{
	//cout << "Ant: " << org1->get_name() << " x: " << org1->get_x() << " y: " << org1->get_y() << endl;
	//cout << "Room: " << org2->get_name() << " x: " << org2->get_x() << " y: " << org2->get_y() << endl;
	/*
	if(org1->get_name() == 'X')
	{
		cout << "Doodle: " << org1->get_name() << " x: " << org1->get_x() << " y: " << org1->get_y() << endl;
	}
	*/
	Organism *temp;
	int x, y;
	temp = org1;
	x = temp->get_x();
	y = temp->get_y();
	org1 = org2;
	org2 = temp;
	
	org2->set_x(org1->get_x());
	org2->set_y(org1->get_y());
	
	org1->set_x(x);
	org1->set_y(y);
	/*
	if(org1->get_name() == 'X')
	{
		cout << "Doodle should not be here: " << org1->get_name() << " x: " << org1->get_x() << " y: " << org1->get_y() << endl;
	}
	else if(org2->get_name() == 'X')
	{
		cout << "Doodle new: " << org2->get_name() << " x: " << org2->get_x() << " y: " << org2->get_y() << endl;
	}
	*/
	//cout << "Ant: " << org1->get_name() << " x: " << org1->get_x() << " y: " << org1->get_y() << endl;
	//cout << "Room: " << org2->get_name() << " x: " << org2->get_x() << " y: " << org2->get_y() << endl;
}

