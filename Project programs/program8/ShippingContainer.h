#ifndef SHIPPINGCONTAINER_H
#define SHIPPINGCONTAINER_H

#include <iostream>
#include <string>
using namespace std;

class ShippingContainer
{
	public:
		ShippingContainer();
		ShippingContainer(int id);
		void set_id(int id);
		int get_id();	
		virtual string get_manifest();
		
	private:
		int containerID;
};

#endif
