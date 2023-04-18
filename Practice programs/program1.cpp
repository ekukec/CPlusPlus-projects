#include <iostream>
#include <cmath>
using namespace std;

class Account
{
	private:
		double balance;
		
	public:
		Account()
		{
			balance = 0;
		}
		
		Account(double initialDeposit)
		{
			balance = initialDeposit;
		}
		
		double getBalance()
		{
			return balance;
		}
		// returns new balance or -1 if error
		double deposit(double amount) throw(double)
		{
			if (amount > 0)
				balance += amount;
			else
				throw abs(amount); // Code indicating error
				
			return balance;
		}
		// returns new balance or -1 if invalid amount
		double withdraw(double amount) throw(double)
		{
			if ((amount > balance) || (amount < 0)) 
				throw abs(balance - amount);
			else
				balance -= amount;
			
			return balance;
		}
};



int main()
{
	Account acc1(3500);
	
	try
	{
		acc1.withdraw(3600);
		cout << "Success" << endl;
		cout << acc1.getBalance() << endl;
	}
	catch (double e)
	{
		cout << "Failure" << endl;
		cout << "Attempted withdrawal was " << e << " to high" << endl;
		cout << acc1.getBalance() << endl;
	}
	
	try
	{
		acc1.deposit(-3600);
		cout << "Success" << endl;
		cout << acc1.getBalance() << endl;
	}
	catch (double e)
	{
		cout << "Failure" << endl;
		cout << "Attempted deposit was " << e << " to low" << endl;
		cout << acc1.getBalance() << endl;
	}
	
	
	return 0;
}
