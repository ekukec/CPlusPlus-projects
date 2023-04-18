#include <iostream>
using namespace std;

int main()
{
	double number, negative_sum, positive_sum;
	int counter = 1;
	
	cout << "Enter a positive or negative number" << endl;
	
	while(counter <= 10)
	{
		cout << "Enter the " << counter << "st number: ";
		cin >> number;
		
		if(number > 0)
		{
			positive_sum = positive_sum + number;
		}
		else
		{
			negative_sum = negative_sum + number;
		}
		
		counter++;
	}
	
	cout << "The sum of all numbers greater than zero is: " << positive_sum << endl;
	cout << "The sum of all negative numbers is: " << negative_sum << endl;
	
	return 0;
}
