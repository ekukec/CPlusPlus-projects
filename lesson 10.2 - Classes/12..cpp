#include <iostream>

using namespace std;

class Temperature
{
	public:
		void set(double new_degrees, char new_scale);
		//Sets the member variables to the values given as
		//arguments.
		double degrees;
		char scale; //'F' for Fahrenheit or 'C' for Celsius.
};


int main()
{
	Temperature temp1;
	
	temp1.set(12.1, 'C');
	
	
	return 0;
}

void Temperature::set(double new_degrees, char new_scale)
{
	degrees = new_degrees;
	cout << "Degrees set to " << new_degrees;
	scale = new_scale;
	cout << "New scale set to " << new_scale;
}
