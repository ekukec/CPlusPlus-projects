#include <iostream>
using namespace std;

int main()
{
	double weight, height, bmr;
	int age;
	char gender;
	
	cout << "Enter your gender (F/M): ";
	cin >> gender;
	cout << "Enter your weight: ";
	cin >> weight;
	cout << "Enter your height: ";
	cin >> height;
	cout << "Enter your age: ";
	cin >> age;
	
	if(gender == 'M' || gender == 'm')
	{
		bmr = 66 + (6.3 * weight) + (12.9 * height) - (6.8 * age);
		cout << "Your basal metabolic rate is: " << bmr << " calories" << endl;
		cout << "You can eat " << bmr/230 << " chocolate bars a day without gaining any weight" << endl;
	}
	else if (gender == 'F' || gender == 'f')
	{
		bmr = 655 + (4.3 * weight) +  (4.7 * height) - (4.7 * age);
		cout << "Your basal metabolic rate is: " << bmr << " calories" << endl;
		cout << "You can eat " << bmr/230 << " chocolate bars a day without gaining any weight" << endl;
	}
	else
	{
		cout << "The gender you entered does not exist" << endl;
	}
	
	return 0;
}
