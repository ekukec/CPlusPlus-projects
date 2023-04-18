#include <iostream>
using namespace std;

int main()
{
	double loan, interest_rate, interest, loan_left, interest_sum;
	int counter = 1;
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	
	cout << "Enter the value of the loan u wish to take: ";
	cin >> loan;
	cout << "Enter the interest rate: ";
	cin >> interest_rate;
	
	interest_rate = ((interest_rate/12)/100);
	loan_left = loan;
	
	while(loan_left > 0.0)
	{
		interest = loan_left * interest_rate;
		loan_left = loan_left - (50 - interest);
		interest_sum = interest_sum + interest;
		
		cout << "===============================================" << endl;
		cout << "The interest for " << counter << "st period is " << interest 
		<< "\nThe money left to pay the loan back is " << (50 - interest) 
		<< "\nThe loan left to pay is " << loan_left << endl;
		cout << "===============================================" << endl << endl;
		counter++;
	}
	
	cout << "The interest payed for the loan is " << interest_sum << endl;
	
	
	return 0;
}
