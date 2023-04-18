#include <iostream>
#include <string>
#include "ManualShippingContainer.h"
using namespace std;


ManualShippingContainer::ManualShippingContainer() : ShippingContainer(), manifest("")
{
	
}

ManualShippingContainer::ManualShippingContainer(int id, string the_manifest) : ShippingContainer(id), manifest(the_manifest)
{
	
}

void ManualShippingContainer::set_manifest(string the_manifest)
{
	manifest = the_manifest;
}

string ManualShippingContainer::get_manifest()
{
	return manifest;
}
