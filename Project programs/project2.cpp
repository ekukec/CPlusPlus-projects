#include <iostream>
using namespace std;

int main()
{
	const double PERCENT_INCREASE = 1.076;
	double annual_salary, new_annual_salary, monthly_salary, new_monthly_salary;
	char again;
	
	do
	{
		cout << "Enter your old annual salary: ";
		cin >> annual_salary;
		
		monthly_salary = annual_salary/12.0;
		new_monthly_salary = monthly_salary * PERCENT_INCREASE;
	
		cout << "Your old monthly salary: " << monthly_salary << endl;
	
		new_annual_salary = new_monthly_salary * 12.0;
	
		cout << "Your new annual salary is: " << new_annual_salary << endl;
		cout << "Your new monthly salary is: " << new_monthly_salary << endl;
		cout << "The retroactive owed to you is: " << (new_monthly_salary - monthly_salary) * 6 << endl;
		
		cout << "Do you wish to calculate again? Y/N" << endl;
		cin >> again;
	}while(again == 'Y' || again == 'y');
	
	
	return 0;
}
