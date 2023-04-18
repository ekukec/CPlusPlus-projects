#include <iostream>
using namespace std;

int main()
{
	double c, f;
	
	cout << "Enter the temperature in celsius: ";
	cin >> c;
	f=(c*(9.0/5.0)) + 32;
	cout << c << " degrees in celsius equals to " << f << " fahrenheit" << endl;
	
	return 0;
}
