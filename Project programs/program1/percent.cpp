#include <iostream>
#include "percent.h"
using namespace std;

namespace kukec
{
	Percent operator +(const Percent& p1, const Percent& p2)
	{
		Percent temp;
		temp.value = p1.value + p2.value;
		return temp;
	}
	
	Percent operator -(const Percent& p1, const Percent& p2)
	{
		Percent temp;
		temp.value = p1.value - p2.value;
		return temp;
	}
	
	Percent operator *(const Percent& p1, const int& p2)
	{
		Percent temp;
		temp.value = p1.value * p2;
		return temp;
	}
	
	Percent::Percent() : value(0)
	{
		
	}
	
	Percent::Percent(int percent_value) : value(percent_value)
	{
	
	}
	
	istream& operator >>(istream& ins, Percent& the_object)
	{
		char per;
		
		do
		{
			ins >> the_object.value;
			ins >> per;
			
		}while(per != '%');
		
		return ins;	
	}
	
	ostream& operator <<(ostream& outs, const Percent& a_percent)
	{
		outs << a_percent.value << "%";
		
		return outs;
	}
}
