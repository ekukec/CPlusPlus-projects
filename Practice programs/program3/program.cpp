#include <iostream>
#include <cstdlib>
#include <cctype>
#include "money.h"
using namespace std;

int main( )
{
	Money your_amount, my_amount(10, 9), our_amount;
	cout << "Enter an amount of money: ";
	your_amount.input(cin);
	cout << "Your amount is ";
	your_amount.output(cout);
	cout << endl;
	cout << "My amount is ";
	my_amount.output(cout);
	cout << endl;
	
	if (equal(your_amount, my_amount))
		cout << "We have the same amounts.\n";
	else
		cout << "One of us is richer.\n";
		
	our_amount = add(your_amount, my_amount);
	your_amount.output(cout);
	cout << " + ";
	my_amount.output(cout);
	cout << " equals ";
	our_amount.output();
	cout << endl;
	
	Money per;
	per = your_amount.percent(50);
	per.output();
	
	return 0;
}
