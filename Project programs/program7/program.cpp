#include<iostream>
#include <string>
#include "money_market_account.h"
#include "cd_account.h"
using namespace std;

void transfer(BankAccount& acc1, BankAccount& acc2);

int main()
{
	MoneyMarketAccount macc("Kuki", 10000.0);
	CDAccount cacc("Muki", 1000, 15);
	
	cout << "Macc : " << macc.get_balance() << endl;
	cout << "Cacc : " << cacc.get_balance() << endl;
	
	for(int i = 0; i < 3; i++)
	{
		transfer(macc, cacc);
		
		cout << "Macc : " << macc.get_balance() << " Withdrawals: " << macc.get_withdrawals() << endl;
		cout << "Cacc : " << cacc.get_balance() << endl;
	}
	
	
	
	return 0;
}

void transfer(BankAccount& acc1, BankAccount& acc2)
{
	double ammount;
	
	cout << "Enter the ammount u wish to withdraw from account 1 to deposit to account 2: ";
	cin >> ammount;
	
	acc1.withdraw(ammount);
	acc2.deposit(ammount);
}
