#ifndef MANUALSHIPPINGCONTAINER_H
#define MANUALSHIPPINGCONTAINER_H

#include <iostream>
#include <string>
#include "ShippingContainer.h"
using namespace std;

class ManualShippingContainer : public ShippingContainer
{
	public:
		ManualShippingContainer();
		ManualShippingContainer(int id, string the_manifest);
		void set_manifest(string the_manifest);	
		virtual string get_manifest();
		
	private:
		string manifest;
};

#endif
