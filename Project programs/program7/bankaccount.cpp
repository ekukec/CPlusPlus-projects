#include<iostream>
#include <string>
#include "bankaccount.h"
using namespace std;

BankAccount::BankAccount() : owner("No owner"), balance(0.0)
{
	
}

BankAccount::BankAccount(string the_owner, double the_balance) : owner(the_owner), balance(the_balance)
{
	
}

void BankAccount::deposit(double ammount)
{
	balance = balance + ammount;
}

int BankAccount::withdraw(double ammount)
{
	//cout << "BA" << endl;
	if(balance > 0 && ammount < balance)
	{
		balance = balance - ammount;
		return 1;
	}
	else
	{
		return 0;
	}
}

void BankAccount::set_owner(string the_owner)
{
	owner = the_owner;
}

void BankAccount::set_balance(double the_balance)
{
	balance = the_balance;
}

string BankAccount::get_owner()
{
	return owner;
}

double BankAccount::get_balance()
{
	return balance;
}
