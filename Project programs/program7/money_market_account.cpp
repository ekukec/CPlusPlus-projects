#include<iostream>
#include <string>
#include "money_market_account.h"
using namespace std;

MoneyMarketAccount::MoneyMarketAccount() : BankAccount(), withdrawals(0)
{
	
}

MoneyMarketAccount::MoneyMarketAccount(string the_owner, double the_balance) : BankAccount(the_owner, the_balance), withdrawals(0)
{
	
}

int MoneyMarketAccount::withdraw(double ammount)
{
	//cout << "MMA" << endl;
	if(get_balance() > 0 && ammount < get_balance())
	{
		if(withdrawals >= 2)
		{
			set_balance(get_balance() - (ammount + 1.50));
			//cout << get_balance() << " - (" << ammount << " + 1.50" << ") = " <<  (get_balance() - (ammount + 1.50)) << endl;
		}
		else
		{
			set_balance(get_balance() - ammount);
		}
		withdrawals++;
		
		return 1;
	}
	else
	{
		return 0;
	}
}

int MoneyMarketAccount::get_withdrawals()
{
	return withdrawals;
}
