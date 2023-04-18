#include <iostream>
using namespace std;
//Class for a bank account:
class BankAccount
{
	public:
	BankAccount(int dollars, int cents, double rate);
	
	BankAccount(int dollars, double rate);
	
	BankAccount();	
	
	void set(int dollars, int cents, double rate);
	//Postcondition: The account balance has been set to $dollars.cents;
	//The interest rate has been set to rate percent.
	void set(int dollars, double rate);
	//Postcondition: The account balance has been set to $dollars.00.
	//The interest rate has been set to rate percent.
	void update( );
	//Postcondition: One year of simple interest has been
	//added to the account balance.
	double get_balance( );
	//Returns the current account balance.
	double get_rate( );
	//Returns the current account interest rate as a percentage.
	void output(ostream& outs);
	//Precondition: If outs is a file output stream, then
	//outs has already been connected to a file.
	//Postcondition: Account balance and interest rate have
	//been written to the stream outs.
	double difference(BankAccount account1, BankAccount account2);
	
	void double_update(BankAccount& the_account);
	
	//BankAccount new_account(BankAccount old_account);
	
	private:
	double balance;
	double interest_rate;
	double fraction(double percent);
	//Converts a percentage to a fraction. For example, fraction(50.3)
	//returns 0.503.
};

BankAccount new_account(BankAccount old_account);

int main( )
{
	BankAccount account1, account2;
	
	BankAccount account3, account4;
	
	account3.set(999, 99, 5.5);
	account4 = new_account(account3);
	account4.output(cout);
	
	
	
	
	cout << "Start of Test:\n";
	
	account1.set(123, 99, 3.0);
	cout << "account1 initial statement:\n";
	account1.output(cout);
	
	account1.set(100, 5.0);
	cout << "account1 with new setup:\n";
	account1.output(cout);
	
	account1.update();
	cout << "account1 after update:\n";
	account1.output(cout);
	
	account2 = account1;
	cout << "account2:\n";
	account2.output(cout);
	
	account2.set(125, 5.0);
	cout << "account2:\n";
	account2.output(cout);
	
	account1.difference(account1, account2);
	
	account1.double_update(account1);
	cout << "account1 after double update: ";
	account1.output(cout);
	
	return 0;
}

void BankAccount::set(int dollars, int cents, double rate)
{
	if ((dollars < 0) || (cents < 0) || (rate < 0))
	{
		cout << "Illegal values for money or interest rate.\n";
		exit(1);
	}
	balance = dollars + 0.01*cents;
	interest_rate = rate;
}

void BankAccount::set(int dollars, double rate)
{
	if ((dollars < 0) || (rate < 0))
	{
		cout << "Illegal values for money or interest rate.\n";
		exit(1);
	}
	balance = dollars;
	interest_rate = rate;
}

void BankAccount::update( )
{
	balance = balance + fraction(interest_rate)*balance;
}

double BankAccount::fraction(double percent_value)
{
	return (percent_value / 100.0);
}

double BankAccount::get_balance( )
{
	return balance;
}

double BankAccount::get_rate( )
{
	return interest_rate;
}

//Uses iostream:
void BankAccount::output(ostream& outs)
{
	outs.setf(ios::fixed);
	outs.setf(ios::showpoint);
	outs.precision(2);
	outs << "Account balance $" << balance << endl;
	outs << "Interest rate " << interest_rate << "%" << endl;
}

double BankAccount::difference(BankAccount account1, BankAccount account2)
{
	cout << "Difference between account 1 and account 2 is: " << account1.balance - account2.balance << "$" << endl;
	
	return account1.balance - account2.balance;	
}

void BankAccount::double_update(BankAccount& the_account)
{
	balance = balance + fraction(interest_rate)*balance;
	balance = balance + fraction(interest_rate)*balance;
}

BankAccount new_account(BankAccount old_account)
{
	BankAccount temp;
	temp.set(0, old_account.get_rate( ));
	return temp;
}

BankAccount::BankAccount(int dollars_v, int cents_v, double rate_v): balance(dollars_v + 0.01 * cents_v), interest_rate(rate_v) 
{
	
}

BankAccount::BankAccount(int dollars_v, double rate_v): balance(dollars_v), interest_rate(rate_v) 
{
	
}

BankAccount::BankAccount(): balance(0), interest_rate(0)
{
	
}
