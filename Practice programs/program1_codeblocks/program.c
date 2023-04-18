#include <iostream>
#include "dtime.h"

using namespace std;



int main()
{
	DigitalTime current(5, 50), previous(2, 20);
	int hours, minutes;
	current.interval_since(previous, hours, minutes);
	cout << "The time interval between " << previous
	 << " and " << current << endl
	 << "is " << hours << " hours and "
	<< minutes << " minutes.\n";


	return 0;
}
