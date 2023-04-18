#include <iostream>
using namespace std;

int main()
{
	int start, end, temperature;
	double velocity;
	
	cout << "Enter the start of the interval for which u wish to know the speed of sound for: ";
	cin >> start;
	cout << "Enter the end of the interval for which u wish to know the speed of sound for: ";
	cin >> end;
	
	temperature = start;
	
	while(temperature <= end)
	{
		velocity =  331.3 + 0.61 * temperature;
		cout << "The velocity for the temperature of " << temperature << " degrees of celsius is : " << velocity << endl;
		temperature++;
	}
	
	return 0;
}
