#include <iostream>
using namespace std;

int main()
{
	double miles, pace, seconds;
	
	cout << "Enter the mph to convert into minutes per mile: ";
	cin >> miles;
	
	pace = 60/miles;
	int minutes = static_cast<int>(pace);
	seconds = (pace - (int)(pace)) * 60;
	
	cout << "The pace at which you are going is " << minutes << " minutes and " << seconds << " seconds per mile" << endl;
	
	return 0;
}
