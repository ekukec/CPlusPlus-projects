#include <iostream>
#include "RFIDShippingContainer.h"
#include "ManualShippingContainer.h"
using namespace std;


int main()
{
	/*
	RFIDShippingContainer con1(1,5);
	
	con1.add("crate of pears");
	con1.add("crate of apples");
	con1.add("crate of pears");
	con1.add("crate of apples");
	con1.add("crate of fuck u");
	con1.add("crate of no u");
	
	cout << con1.get_manifest();
	*/
	
	ShippingContainer *containers[6];
	
	for(int i = 0; i < 3; i++)
	{
		containers[i] =  new ManualShippingContainer(i + 1, "");
		static_cast<ManualShippingContainer*>(containers[i])->set_manifest("2 crates of manual");
	} 
	for(int i = 3; i < 6; i++)
	{
		containers[i] =  new RFIDShippingContainer(i + 1, 3);
		static_cast<RFIDShippingContainer*>(containers[i])->add("crate of RFID");
		static_cast<RFIDShippingContainer*>(containers[i])->add("crate of RFID");
		static_cast<RFIDShippingContainer*>(containers[i])->add("crate of RFID");
	}
	
	for(int i = 0; i < 6; i++)
	{
		cout << containers[i]->get_manifest() << endl;
	}
	
	return 0;
}
