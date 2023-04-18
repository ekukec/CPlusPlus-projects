#include <iostream>

using namespace std;

class DayOfYear
{
	public:
		friend bool after(DayOfYear date1, DayOfYear date2);
		
		DayOfYear(int the_month, int the_day);
		//Precondition: the_month and the_day form a
		//possible date. Initializes the date according
		//to the arguments.
		DayOfYear( );
		//Initializes the date to January first.
		void input( );
		void output( );
		int get_month( );
		//Returns the month, 1 for January, 2 for February, etc.
		int get_day( );
		//Returns the day of the month.
		
	
	private:
		//void check_date( );
		int month;
		int day;
};
 
bool equal(DayOfYear date1, DayOfYear date2);
//Precondition: date1 and date2 have values.
//Returns true if date1 and date2 represent the same date;
//otherwise, returns false.

bool before(DayOfYear date1, DayOfYear date2);
 
int main( )
{
	DayOfYear today, bach_birthday(3, 21);
	 
	cout << "Enter today's date:\n";
	today.input( );
	cout << "Today's date is ";
	today.output( );
	 
	cout << "J. S. Bach's birthday is ";
	
	bach_birthday.output( );
	 
	if (equal(today, bach_birthday))
		cout << "Happy Birthday Johann Sebastian!\n" << endl;
	else
	{
		cout << "Happy Unbirthday Johann Sebastian!\n" << endl;
		
		if(before(today, bach_birthday))
		{
			cout << "Todays date comes before bachs birthday" << endl;
		}
		
		if(after(today, bach_birthday))
		{
			cout << "Todays date comes after bachs birthday" << endl;
		}
	}
		
	
	
	return 0;
}
 
bool equal(DayOfYear date1, DayOfYear date2)
{
	return ( date1.get_month( ) == date2.get_month( ) &&
	date1.get_day( ) == date2.get_day( ));
}

bool before(DayOfYear date1, DayOfYear date2)
{
	if(date1.get_month() < date2.get_month())
	{
		return true;
	}
	else
	{
		if(date1.get_month() == date2.get_month() && date1.get_day() < date2.get_day())
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

bool after(DayOfYear date1, DayOfYear date2)
{
	if(date1.get_month() > date2.get_month())
	{
		return true;
	}
	else
	{
		if(date1.get_month() == date2.get_month() && date1.get_day() > date2.get_day())
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}
 
DayOfYear::DayOfYear(int the_month, int the_day) : month(the_month), day(the_day)
{
	//check_date();
}

DayOfYear::DayOfYear() : month(0), day(0)
{
	
}
 
int DayOfYear::get_month( )
{
	return month; 
}
 
int DayOfYear::get_day( )
{
	return day;
}
 
//Uses iostream:
void DayOfYear::input( )
{
	cout << "Enter the month as a number: ";
	cin >> month;
	cout << "Enter the day of the month: ";
	cin >> day;
}
 
//Uses iostream:
void DayOfYear::output( )
{
	cout << "month = " << month
	<< ", day = " << day << endl;
}
