#include <iostream>
using namespace std;

class DayError
{
	public:
		DayError();
		DayError(int the_day);
		int day;
};

class MonthError
{
	public:
		MonthError();
		MonthError(int the_month);
		int month;
};


int main()
{
	int day, month;
	char slash, again = 'Y';
	
	while(again == 'Y' || again == 'y')
	{
		try
		{
			cout << "Enter the date: ";
			cin >> month >> slash >> day;
			if(day < 0 || ((day > 29 && month == 2) || day > 31))
			{
				throw DayError(day);
			}
			if(month < 0 || month > 12)
			{
				throw MonthError(month);
			}
			switch(month)
			{
				case 1:
					cout << "That is the same as January " << day << endl;
					break;
				
				case 2:
					cout << "That is the same as February " << day << endl;
					break;
				
				case 3:
					cout << "That is the same as March " << day << endl;
					break;
				
				case 4:
					cout << "That is the same as April " << day << endl;
					break;
				
				case 5:
					cout << "That is the same as May " << day << endl;
					break;
				
				case 6:
					cout << "That is the same as June " << day << endl;
					break;
				
				case 7:
					cout << "That is the same as July " << day << endl;
					break;
				
				case 8:
					cout << "That is the same as August " << day << endl;
					break;
				
				case 9:
					cout << "That is the same as September " << day << endl;
					break;
				
				case 10:
					cout << "That is the same as October " << day << endl;
					break;
				
				case 11:
					cout << "That is the same as November " << day << endl;
					break;
				
				case 12:
					cout << "That is the same as December " << day << endl;
					break;
			}
			
			cout << "Again(Y/N): ";
			cin >> again;
		}
		catch(DayError De)
		{
			cout << "There is no such date as " << month << "/" << De.day << endl;
			cout << "Try again: " << endl;
		}
		catch(MonthError Me)
		{
			cout << "There is no such date as " << Me.month << "/" << day << endl;
			cout << "Try again: " << endl;
		}
	}
	
	return 0;
}

DayError::DayError() : day(0)
{
	
}

DayError::DayError(int the_day) : day(the_day)
{
	
}

MonthError::MonthError() : month(0)
{
	
}

MonthError::MonthError(int the_month) : month(the_month)
{
	
}
