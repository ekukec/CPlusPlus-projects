#ifndef ORGANISM_H
#define ORGANISM_H

#include <iostream>
using namespace std;

class Organism
{
	public:
		Organism();
		Organism(char the_name);
		virtual void move(Organism *arr[][20]);
		virtual void breed(Organism *arr[][20], int x, int y, int the_birth);
		void set_name(char the_name);
		void set_steps(int the_steps);
		void set_birth(int the_birth);
		void set_x(int the_x);
		void set_y(int the_y);
		char get_name();
		int get_steps();
		int get_birth();
		int get_x();
		int get_y();
		friend void swap(Organism *&org1, Organism *&org2);
		
	private:
		char name;
		int steps;
		int birth;
		int x;
		int y;
		
};

#endif
