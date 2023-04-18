#include <iostream>
using namespace std;

int main()
{
	int number, stop, sum = 0, count = 1;
	
	cout << "Enter an even number, the list will stop when an uneven number is entered" << endl << count <<". Number: ";
	cin >> number;
	
	while(number % 2 == 0)
	{
		count++;
		sum = sum + number;
		cout << count <<". Number: ";
		cin >> number;
	}
	
	cout << "The sum of " << count << " even numbers is: " << sum << endl;
	
	return 0;
}
