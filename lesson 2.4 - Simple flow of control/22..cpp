#include <iostream>
using namespace std;

int main()
{
	double savings, expenses;
	
	cout << "Enter the value of savings: ";
	cin >> savings;
	cout << "Enter the value of expenses: ";
	cin >> expenses;
	
	if(savings >= expenses)
	{
		savings -= expenses;
		expenses = 0;
		cout << "Solvent\nThe remaining savings are: " << savings << endl;
	}
	else
		cout << "Bankrupt" << endl;
		
	return 0;
}
