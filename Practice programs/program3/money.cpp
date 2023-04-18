#include <iostream>
#include <cstdlib>
#include <cctype>
#include "money.h"
using namespace std;

bool operator <(const Money& amount1, const Money& amount2)
{
	if(amount1.all_cents < amount2.all_cents)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool operator <=(const Money& amount1, const Money& amount2)
{
	if(amount1.all_cents <= amount2.all_cents)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool operator >(const Money& amount1, const Money& amount2)
{
	if(amount1.all_cents > amount2.all_cents)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool operator >=(const Money& amount1, const Money& amount2)
{
	if(amount1.all_cents >= amount2.all_cents)
	{
		return true;
	}
	else
	{
		return false;
	}
}

Money Money::percent(int percent_figure) const
{
	Money temp;
	temp.all_cents = (all_cents / 100) * percent_figure;
	return temp;
}

Money add(Money amount1, Money amount2)
{
	Money temp;
	 
	temp.all_cents = amount1.all_cents + amount2.all_cents;
	return temp;
}
 
bool equal(Money amount1, Money amount2)
{
	return (amount1.all_cents == amount2.all_cents);
}
 
Money::Money(long dollars, int cents)
{
	if (dollars * cents < 0) //If one is negative and one is positive
	{
		cout << "Illegal values for dollars and cents.\n";
		exit(1);
	}
	all_cents = dollars * 100 + cents;
}
 
Money::Money(long dollars) : all_cents(dollars * 100)
{
//Body intentionally blank.
}
 
Money::Money( ) : all_cents(0)
{
//Body intentionally blank.
} 
double Money::get_value( )
{
	return (all_cents * 0.01);
}
//Uses iostream, cctype, cstdlib:
void Money::input(istream& ins)
{
	char one_char, decimal_point, digit1, digit2;
	//digits for the amount of cents
	long dollars;
	int cents;
	bool negative;//set to true if input is negative.
	 
	ins >> one_char;
	if (one_char == ' ')
	{
		negative = true;
		ins >> one_char; //read '$'
	}
	else
		negative = false;
	//if input is legal, then one_char == '$'
	
	ins >> dollars >> decimal_point >> digit1 >> digit2;
	 
	if (one_char != '$' || decimal_point != '.' || !isdigit(digit1) || !isdigit(digit2))
	{
		cout << "Error illegal form for money input\n";
		exit(1);
	}
	cents = digit_to_int(digit1) * 10 + digit_to_int(digit2);
	 
	all_cents = dollars * 100 + cents;
	if (negative)
		all_cents = -all_cents;
}
 
//Uses cstdlib and iostream:
void Money::output(ostream& outs)
{
	long positive_cents, dollars, cents;
	positive_cents = labs(all_cents);
	dollars = positive_cents / 100;
	cents = positive_cents % 100;
	 
	if (all_cents < 0)
		outs << "-$" << dollars << '.';
	else
		outs << "$" << dollars << '.';
	 
	if (cents < 10)
		outs << '0';
		outs << cents;
}

void Money::output()
{
	long positive_cents, dollars, cents;
	positive_cents = labs(all_cents);
	dollars = positive_cents / 100;
	cents = positive_cents % 100;
	 
	if (all_cents < 0)
		cout << "-$" << dollars << '.';
	else
		cout << "$" << dollars << '.';
	 
	if (cents < 10)
		cout << '0';
		cout << cents;
}
 
int digit_to_int(char c)
{
	return (static_cast<int>(c) - static_cast<int>('0'));
}
