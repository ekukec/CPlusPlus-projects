#include <iostream>
using namespace std;

int main()
{
	int temperature, pressure;
	
	cout << "Enter the temperature: ";
	cin >> temperature;
	cout << "Enter the pressure: ";
	cin >> pressure;
	
	if((temperature >= 100)||(pressure >= 200))
		cout << "Warning" << endl;
	else
		cout << "OK" << endl;
	
	return 0;
}
