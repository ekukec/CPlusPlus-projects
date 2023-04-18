#include <iostream>
using namespace std;

int main()
{
	double loan_needed, interest_rate, loan_gotten, interest;
	int duration;
	
	cout << "Enter the ammount of money you need: ";
	cin >> loan_needed;
	cout << "Enter the interest rate: ";
	cin >> interest_rate;
	cout << "Enter the duration in months: ";
	cin >> duration;
	
	loan_gotten = (loan_needed * (interest_rate/100.0) * (duration/12.0)) + loan_needed;
	interest = loan_gotten - loan_needed;
	
	cout << loan_gotten << endl << interest;
	
	return 0;
}
