#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double weight, radius, v, y;
	
	cout << "Enter the weight of the sphere(in pounds): ";
	cin >> weight;
	cout << "Enter the radius of the sphere(in feet): ";
	cin >> radius;
	
	v = (4/3) * M_PI * (radius * radius * radius);
	y = 62.4 * v;
	
	cout << "Volume is: " << v << endl << "Weight displaced is: " << y << endl;
	
	if((v * y) > weight)
	{
		cout << "The object will float!" << endl;
	}
	else
	{
		cout << "The object will sink!" << endl;
	}
	
	return 0;
}
