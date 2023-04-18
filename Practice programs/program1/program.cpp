#include <iostream>
#include "administrator.h"
using namespace employeessavitch;
using namespace std;


int main()
{
	Administrator ad1;
	
	ad1.read_in();
	
	ad1.print();
	
	ad1.print_check();
	
	return 0;
}
