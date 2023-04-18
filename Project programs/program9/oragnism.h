#ifndef ORGANISM_H
#define ORGANISM_H

#include <iostream>
using namespace std;

class Organism
{
	public:
		Organism();
		Organism(char the_name);
		virtual void move();
		virtual void breed();
		void set_name(char the_name);
		void set_steps(int the_steps);
		char get_name();
		int get_steps();
		
	private:
		char name;
		int steps;
		
};

#endif
