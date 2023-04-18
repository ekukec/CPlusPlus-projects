#include <iostream>
using namespace std;


class TimeException
{
	public:
		TimeException();
		TimeException(int the_hrs, int the_mins, char the_dots);
		int hrs;
		int mins;
		char dots;
};


int main()
{
	int hours, minutes;
	char dots, again = 'Y';
	
	while(again == 'Y' || again == 'y')
	{
		try
		{
			cout << "Enter time in 24-hour notation:";
			cin >> hours >> dots >> minutes;
			if(((hours > 24 || hours < 0) || (minutes > 60 || minutes < 0)) || dots != ':')
			{
				throw(TimeException(hours, minutes, dots));
			}
			if(hours > 12)
			{
				hours = hours - 12;
				cout << "That is the same as " << hours << dots << minutes << " PM" << endl;
			}
			else
			{
				cout << "That is the same as " << hours << dots << minutes << " AM" << endl;
			}
			
			cout << "Again(Y/N): ";
			cin >> again;
		}
		catch(TimeException e)
		{
			cout << "There is no such time as " << e.hrs << e.dots <<e.mins << endl;
			cout << "Try again: " << endl;
		}
	}
	

	
	
	return 0;
}

TimeException::TimeException() : hrs(0), mins(0), dots(' ')
{
	
}

TimeException::TimeException(int the_hrs, int the_mins, char the_dots) : hrs(the_hrs), mins(the_mins), dots(the_dots)
{
	
}
