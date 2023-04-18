#ifndef MONEY_MARKET_ACCOUNT_H
#define MONEY_MARKET_ACCOUNT_H

#include<iostream>
#include <string>
#include "bankaccount.h"
using namespace std;

class MoneyMarketAccount : public BankAccount
{
	public:
		MoneyMarketAccount();
		MoneyMarketAccount(string the_owner, double the_balance);
		virtual int withdraw(double ammount);
		int get_withdrawals();
		
	private:
		int withdrawals;
};

#endif
