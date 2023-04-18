#include <iostream>
using namespace std;

int main()
{
	const double SWEETNER_IN_100G = 100 * 0.001;
	const double GRAMS_IN_POUND = 45400/100;
	double goal_weight, weight_grams, lethal_dose, proportional_dose;
	char again;
	
	proportional_dose = 5.0/35.0;
	
	do
	{
		cout << "Enter your goal weight: ";
		cin >> goal_weight;
	
		weight_grams = goal_weight * GRAMS_IN_POUND;
		lethal_dose = proportional_dose * weight_grams;
	
		cout << "You can safely drink " << lethal_dose << " grams of sweetner a day which equals to " << lethal_dose/(3.5 * SWEETNER_IN_100G) << " cans of soda" << endl;
		
		cout << "Do you wish to calculate again? Y/N" << endl;
		cin >> again;  
	}while(again == 'Y' || again == 'y');
	
	return 0;
}
