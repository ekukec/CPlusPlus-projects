#include <iostream>
using namespace std;

int main()
{
	double n, r, guess;
	int counter = 0;
	
	cout << "Enter the number for which u wish to calculate the square root: ";
	cin >> n;
	
	cout << "Enter the guess for the answer: ";
	cin >> guess;
	
	while(counter < 100)
	{
		r = n/guess;
		guess = (guess + r) / 2;
		counter++;
	}
	
	cout << "The square root of " << n << " equals to " << guess << endl;
	
	return 0;
}
