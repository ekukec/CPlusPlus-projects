#ifndef DOODLEBUG_H
#define DOODLEBUG_H

#include <iostream>
#include "organism.h"
using namespace std;

class Doodlebug : public Organism
{
	public:
		Doodlebug();
		friend void eat(Organism *&org1, Organism *&org2);
		virtual void move(Organism *arr[][20]);
		virtual void breed(Organism *arr[][20], int x, int y, int the_birth);
		
		
	private:
		int starve;
};

#endif
