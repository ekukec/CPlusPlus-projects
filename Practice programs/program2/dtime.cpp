#include <iostream>
#include <cctype>
#include <cstdlib>
#include "dtime.h"

using namespace std;
//These FUNCTION DECLARATIONS are for use in the definition of
//the overloaded input operator >>:
void read_hour(istream& ins, int& the_hour);
//Precondition: Next input in the stream ins is a time in 24-hour notation,
//like 9:45 or 14:45.
//Postcondition: the_hour has been set to the hour part of the time.
//The colon has been discarded and the next input to be read is the minute.
void read_minute(istream& ins, int& the_minute);
//Reads the minute from the stream ins after read_hour has read the hour.
int digit_to_int(char c);
//Precondition: c is one of the digits '0' through '9'.
//Returns the integer for the digit; for example, digit_to_int('3') returns 3.
bool operator ==(const DigitalTime& time1, const DigitalTime& time2)
{
	return (time1.minutes == time2.minutes);
}
//Uses iostream and cstdlib:
DigitalTime::DigitalTime(int the_hour, int the_minute)
{
	if (the_hour< 0 || the_hour> 23 || the_minute< 0 || the_minute> 59)
	{
		cout<< "Illegal argument to DigitalTime constructor.";
		exit(1);
	}
 
	else
	{
		minutes = the_minute + (the_hour * 60);
	}
}

DigitalTime::DigitalTime() : minutes(0)
{
	//Body intentionally empty.
}

void DigitalTime::advance(int minutes_added)
{
	int gross_minutes = minutes + minutes_added;
	minutes = gross_minutes;

}

void DigitalTime::advance(int hours_added, int minutes_added)
{
	minutes = minutes + minutes_added + (hours_added * 60);
}
 
//Uses iostream:
ostream& operator <<(ostream& outs, const DigitalTime& the_object)
{
	int hours = the_object.minutes / 60;
	int mins = the_object.minutes - (hours * 60);
	outs << hours << ':';
	if (mins < 10)
		outs << '0';
	outs << mins;
	
	return outs;
}
 
//Uses iostream:
istream& operator >>(istream& ins, DigitalTime& the_object)
{
	int hours = 0;
	int mins = 0;
	read_hour(ins, hours);
	read_minute(ins, mins);
	
	the_object.minutes = mins + (hours + 60);
	
	return ins;
}
 
int digit_to_int(char c)
{
	return (static_cast <int>(c) - static_cast<int>('0'));
}
 
//Uses iostream, cctype, and cstdlib:
void read_minute(istream& ins, int& the_minute)
{
	char c1, c2;
	ins >> c1 >> c2;
	 
	if (!(isdigit(c1) && isdigit(c2)))
	{
		cout<< "Error illegal input to read_minute\n";
		exit(1);
	}
	
	the_minute = (digit_to_int(c1) * 10) + digit_to_int(c2);
	 
	if (the_minute< 0 || the_minute> 59)
	{
		cout<< "Error illegal input to read_minute\n";
		exit(1);
	}
}
  
//Uses iostream, cctype, and cstdlib:
void read_hour(istream& ins, int& the_hour)
{
	char c1, c2;
	ins >> c1 >> c2;
	
	if ( !( isdigit(c1) && (isdigit(c2) || c2 == ':' ) ) )
	{
		cout<< "Error illegal input to read_hour\n";
		exit(1);
	}
	 
	if (isdigit(c1) && c2 == ':')
	{
		the_hour = digit_to_int(c1);
	}
	else//(isdigit(c1) && isdigit(c2))
	{
		the_hour = (digit_to_int(c1) * 10) + digit_to_int(c2);
		ins >> c2;//discard ':'
		
		if (c2 != ':')
		{
			cout<< "Error illegal input to read_hour\n";
			exit(1);
		}
	}
	if (the_hour < 0 || the_hour > 23)
	{
		cout<< "Error illegal input to read_hour\n";
		exit(1);
	}
}

void DigitalTime::interval_since(const DigitalTime& a_previous_time, int& hours_in_interval, int& minutes_in_interval) const
{
	int x = minutes - a_previous_time.minutes;
	
	int hours = x / 60;
	int mins = x % 60;
	
	minutes_in_interval = mins;
	hours_in_interval = hours;
}
