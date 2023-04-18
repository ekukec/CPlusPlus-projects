#include <iostream>
#include <cmath>
using namespace std;


double avg_dev(double val1, double val2, double val3, double val4, double& average, double& deviation);


int main()
{
	double s1, s2, s3, s4, avg = 0, dev = 0;
	
	
	cout << "Enter value 1: ";
	cin >> s1;
	cout << "Enter value 2: ";
	cin >> s2;
	cout << "Enter value 3: ";
	cin >> s3;
	cout << "Enter value 4: ";
	cin >> s4;
	
	avg_dev(s1, s2, s3, s4, avg, dev);
	
	cout << "Average: " << avg << endl << "Deviation: " << dev << endl; 
	
	
	return 0;
}


double avg_dev(double val1, double val2, double val3, double val4, double& average, double& deviation)
{
	average = (val1 + val2 + val3 + val4) / 4;
	
	deviation = sqrt((pow((val1 - average), 2) + pow((val2 - average), 2) + pow((val3 - average), 2) + pow((val4 - average), 2)) / 4);
}
