#include <iostream>
using namespace std;

int main()
{
	const double WAGE = 16.78;
	const int UNION_DUE = 10;
	const int DEPENDENT_DUE = 35;
	int hours_worked, dependents;
	double pay, overtime, social_tax, federal_tax, state_tax;
	char again;
	
	do
	{
		
		cout << "Enter the number of hours worked in a week: ";
		cin >> hours_worked;
		cout << "Enter the number of dependents: ";
		cin >> dependents;
	
		if(hours_worked > 40)
		{
			
			pay = (40 * WAGE) + ((hours_worked - 40) * (WAGE * 1.5));
			cout << "Gross pay is: " << pay << endl;
		
			social_tax = pay * 0.06;
			federal_tax = pay * 0.14;
			state_tax = pay * 0.05;
		
			if(dependents < 3)
			{
				pay = pay - social_tax - federal_tax - state_tax - UNION_DUE;
				cout << "Pay left after taxes and other dues is : " << pay << endl;
			}
			else 
			{
				pay = pay - social_tax - federal_tax - state_tax - UNION_DUE - DEPENDENT_DUE;
				cout << "Pay left after taxes and other dues is : " << pay << endl;
			}
		
		
		}
		else
		{	
		
			pay = hours_worked *  WAGE;
			cout << "Gross pay is: " << pay << endl;
		
			social_tax = pay * 0.06;
			federal_tax = pay * 0.14;
			state_tax = pay * 0.05;
		
			if(dependents < 3)
			{
				pay = pay - social_tax - federal_tax - state_tax - UNION_DUE;
				cout << "Pay left after taxes and other dues is : " << pay << endl;
			}
			else 
			{
				pay = pay - social_tax - federal_tax - state_tax - UNION_DUE - DEPENDENT_DUE;
				cout << "Pay left after taxes and other dues is : " << pay << endl;
			}
		}
		
		cout << "Do you wish to calculate again?  Y/N: ";
		cin >> again;
		cout << endl;
	
	}while(again == 'Y' || again == 'y');
	
	return 0;
}
