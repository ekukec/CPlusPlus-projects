#ifndef CD_ACCOUNT_H
#define CD_ACCOUNT_H

#include<iostream>
#include <string>
#include "bankaccount.h"
using namespace std;

class CDAccount : public BankAccount
{
	public:
		CDAccount();
		CDAccount(string the_owner, double the_balance, int the_rate);
		virtual int withdraw(double ammount);
		int get_interest_rate();
		double get_penalty();
		
	private:
		int interest_rate;
};

#endif
