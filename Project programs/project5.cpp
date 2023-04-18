#include <iostream>
#include <cmath>
using namespace std;


double bmr(double weight);

double activity(double weight, int intensity, int minutes)


int main()
{
	double weight;
	int intensity, minutes;
	
	
	cout << "Enter your weight in pounds: ";
	cin >> weight;
	
	
	cout << "Your bmr is: " << bmr(weight) << " calories " << endl;
	
	return 0;
}


double bmr(double weight)
{
	return (70 * (pow((weight / 2.2),0.756)));
}
