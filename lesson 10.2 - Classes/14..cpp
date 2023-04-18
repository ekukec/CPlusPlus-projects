#include <iostream>

using namespace std;

class DayOfYear
{
	public:
		void input();
		void output();
		void check_date();
		int month;
		int day;
};


int main()
{
	DayOfYear date1;
	
	date1.input();
	
	date1.output();
	
	return 0;
}

void DayOfYear::output()
{
	cout << "month = " << month
	<< ", day = " << day << endl;
	check_date();
}

void DayOfYear::input()
{
	cout << "Enter month: ";
	cin >> month;
	cout << "Enter day: ";
	cin >> day;
	check_date();
}

void DayOfYear::check_date()
{
	if ((month < 1) || (month > 12) || (day < 1) || (day > 31))
	{
	cout << "Illegal date. Aborting program.\n";
	exit(1);
	}
	else if(month == 2 && day > 29)
	{
		cout << "Illegal date. Aborting program.\n";
		exit(1);
	}
	else if((month % 2) == 0 && day > 30)
	{
		cout << "Illegal date. Aborting program.\n";
		exit(1);
	}	
}
