#include <iostream>
using namespace std;
//Structure for a bank certificate of deposit:
class CDAccount
{
	public:
		double return_initial_balance();
		
		double return_maturity_balance();
		
		double return_rate();
		
		int return_term();
		
		CDAccount(double balance, double interest_rate, int term);
		
		CDAccount();
	
	private:
		double balance;
		double interest_rate;
		int term; //months until maturity
};
 
 
int main( )
{
	CDAccount account1(2000, 5, 10);
	
	account1.return_initial_balance();
	
	account1.return_maturity_balance();
	
	account1.return_rate();
	
	account1.return_term();
	
	CDAccount account2;
	
	return 0;
}
  
double CDAccount::return_initial_balance()
{
	double temp = balance;
	cout << "Balance is: " << temp << " dollars" << endl;
	return temp;
}

double CDAccount::return_maturity_balance()
{
	double temp = balance;
	double rate = interest_rate / 100;
	
	for(int i = 0; i < term; i++)
	{
		temp = temp + (temp * rate);
	}
	cout << "Balance after maturity is: " << temp << " dollars" << endl;
	return temp;
	
}

double CDAccount::return_rate()
{
	double rate = interest_rate;
	cout << "Rate is: " << rate << "%" << endl;
	return rate;
}

int CDAccount::return_term()
{
	cout << "Term is: " << term << " days" << endl;
	return term;
}

CDAccount::CDAccount(double balance_v, double interest_rate_v, int term_v) : balance(balance_v), interest_rate(interest_rate_v), term(term_v)
{
	
}

CDAccount::CDAccount() :  balance(0), interest_rate(0), term(0)
{
	
}
