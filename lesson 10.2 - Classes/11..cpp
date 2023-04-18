#include <iostream>

using namespace std;

class DayOfYear
{
	public:
		void input();
		void output();
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
}

void DayOfYear::input()
{
	cout << "Enter month: ";
	cin >> month;
	cout << "Enter day: ";
	cin >> day;
}
