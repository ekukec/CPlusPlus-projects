#ifndef RFIDSHIPPINGCONTAINER_H
#define RFIDSHIPPINGCONTAINER_H

#include <iostream>
#include <string>
#include "ShippingContainer.h"
using namespace std;

struct Container
{
	string item;
	int quantity;
};

typedef Container* ConPtr;

class RFIDShippingContainer : public ShippingContainer
{
	public:
		RFIDShippingContainer();
		RFIDShippingContainer(int id, int the_capacity);
		void add(string the_item);
		virtual string get_manifest();
		int get_size();
		
	private:
		ConPtr inventory;
		int capacity;
		int size;
};

#endif
