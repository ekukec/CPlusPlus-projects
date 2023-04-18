#ifndef ANT_H
#define ANT_H

#include <iostream>
#include "organism.h"
using namespace std;

class Ant : public Organism
{
	public:
		Ant();
		virtual void move(Organism *arr[][20]);
		virtual void breed(Organism *arr[][20], int x, int y, int the_birth);
		//virtual void swap(Organism *&org1, Organism *&org2);
		
	private:
		
};

#endif
