#include <iostream>
using namespace std;


double hat(double height, double weight);

double jacket(double height, double weight, int age);

double waist(double weight, int age);


int main()
{
	double height, weight;
	int age;
	
	cout << "Enter your height in inches: ";
	cin >> height;
	cout << "Enter your weight in pounds: ";
	cin >> weight;
	cout << "Enter your age: ";
	cin >> age;
	
	cout << "Your size for a hat is: " << hat(height, weight) << endl;
	cout << "Your size for a jacket is: " << jacket(height, weight, age) << endl;
	cout << "Your size for your waist is: " << waist(weight, age) << endl;
	
	return 0;
}


double hat(double height, double weight)
{
	return ((weight / height) * 2.9);
}

double jacket(double height, double weight, int age)
{
	double adjustment, result;
	
	adjustment = (age - 30) / 10;
	if (adjustment < 0)
		adjustment = 0;
	result = ((weight * height) / 288) + (adjustment * 0.125);
	
	return result;
}

double waist(double weight, int age)
{
	double adjustment, result;
	
	adjustment = (age - 28) / 2;
	if (adjustment < 0)
		adjustment = 0;
	result = (weight / 5.7) + (adjustment * 0.1);
	
	return result;	
}
