#include<iostream>
#include <string>
#include "cd_account.h"
using namespace std;

CDAccount::CDAccount() : BankAccount(), interest_rate(0)
{
	
}

CDAccount::CDAccount(string the_owner, double the_balance, int the_rate) : BankAccount(the_owner, the_balance), interest_rate(the_rate)
{
	
}

int CDAccount::withdraw(double ammount)
{
	//cout << "CDA" << endl;
	if(get_balance() > 0 && ammount < (get_balance() + get_penalty()))
	{
		set_balance(get_balance() - ammount - get_penalty());
	
		return 1;
	}
	else
	{
		return 0;
	}
}

int CDAccount::get_interest_rate()
{
	return interest_rate;
}

double CDAccount::get_penalty()
{
	return (get_balance() * (interest_rate / 100.0)) / 4.0;
}
