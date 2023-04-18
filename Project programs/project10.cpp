#include <iostream>
using namespace std;

int main()
{
	double number, negative_sum, positive_sum, negative_avg, positive_avg;
	int counter = 1, negative_counter = 0, positive_counter = 0;
	
	cout << "Enter a positive or negative number" << endl;
	
	while(counter <= 10)
	{
		cout << "Enter the " << counter << "st number: ";
		cin >> number;
		
		if(number > 0)
		{
			positive_sum = positive_sum + number;
			positive_counter++;
		}
		else
		{
			negative_sum = negative_sum + number;
			negative_counter++;
		}
		
		counter++;
	}
	
	negative_avg = negative_sum/negative_counter;
	positive_avg = positive_sum/positive_counter;
	
	cout << "The sum of all numbers greater than zero is: " << positive_sum << endl;
	cout << "The sum of all negative numbers is: " << negative_sum << endl;
	cout << "The average of all positive numbers is: " << positive_avg << endl;
	cout << "The average of all negative numbers is: " << negative_avg << endl;
	cout << "The sum of all positive and negative nubers is: " << positive_sum + negative_sum << endl;
	cout << "The average of all positive and negative numbers is: " << (positive_sum + negative_sum)/counter << endl;
	
	
	return 0;
}
