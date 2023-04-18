#include <iostream>
#include <string>
#include "doctor.h"
using namespace std;
using namespace employeessavitch;


int main()
{
	Doctor d1("Name", "69696", 250.50, "Bruh", 69.50);
	
	d1.print_check();
	
	Doctor d2(d1);
	
	d2.print_check();
	
	Doctor d3;
	d3 = d1;
	
	d3.print_check();
	
	
	return 0;
}
