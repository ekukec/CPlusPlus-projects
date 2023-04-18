#include <iostream>
#include <string>
#include "truck.h"
using namespace std;


int main()
{
	Person kuki("Kuks"), loki("Luks");
	Truck t1("Man", 12, kuki, 2500.50, 5000);
	
	t1.info();
	
	Truck t2(t1);
	
	t2.set_owner(loki);
	t2.info();
	
	return 0;
}
