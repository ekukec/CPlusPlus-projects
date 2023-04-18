#include <iostream>
using namespace std;

int main()
{
	const double OUNCES_IN_METRIC_TON = 35273.92;
	double cereal_weight;
	
	cout << "Enter the weight of the cereal box in ounces: ";
	cin >> cereal_weight;
	
	cout << "The weight of " << cereal_weight << " when converted into metric ton equals to " << cereal_weight/OUNCES_IN_METRIC_TON << endl;
	cout << "The number of boxes needed in order to make a metric ton equal to " <<  OUNCES_IN_METRIC_TON/cereal_weight << endl;
	
	return 0;
}
