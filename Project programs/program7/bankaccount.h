#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include<iostream>
#include <string>
using namespace std;

class BankAccount
{
	public:
		BankAccount();
		BankAccount(string the_owner, double the_balance);
		void deposit(double ammount);
		virtual int withdraw(double ammount);
		void set_owner(string the_owner);
		void set_balance(double the_balance);
		string get_owner();
		double get_balance();
		
	private:
		string owner;
		double balance;
};

#endif
