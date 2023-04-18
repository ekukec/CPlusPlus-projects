#include <iostream>

using namespace std;

#include <iostream>

using namespace std;

class DayOfYear
{
	public:
		DayOfYear(int val_month, int val_day);
		DayOfYear();
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
	
	DayOfYear date2(12, 22);
	
	date2.output();
	
	DayOfYear date3;
	
	date3.output();
	
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

DayOfYear::DayOfYear(int val_month, int val_day) : day(val_day), month(val_month)
{

}

DayOfYear::DayOfYear() : day(1), month(1)
{

}
