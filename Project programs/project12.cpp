#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double radius, depth, volume;
	const double PI = M_PI;
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	
	cout << "Enter the radius of the well casing in inches: ";
	cin >> radius;
	cout << "Enter the depth of in feet: ";
	cin >> depth;
	
	volume =  PI * (radius * radius) * (depth * 12);
	
	cout << "Volume of the well in cubic feet is: " << volume/1728 << endl;
	cout << "The well can hold " << (volume/1728) * 7.48 << " gallons of water" << endl;
	
	return 0;
}
