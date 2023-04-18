#include <iostream>
#include "sportscar.h"
using namespace std;


int main()
{
	Person Kuki("Kuki");
	SportsCar BMW("BMW", 6, Kuki, 250, 65050.35, 275, 4.5);
	
	BMW.info();
	return 0;
}
