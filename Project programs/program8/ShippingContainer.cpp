#include <iostream>
#include <string>
#include "ShippingContainer.h"
using namespace std;


ShippingContainer::ShippingContainer() : containerID(0)
{
	
}

ShippingContainer::ShippingContainer(int id) : containerID(id)
{
	
}

void ShippingContainer::set_id(int id)
{
	containerID = id;
}

int ShippingContainer::get_id()
{
	return containerID;
}

string ShippingContainer::get_manifest()
{
	return "";
}
