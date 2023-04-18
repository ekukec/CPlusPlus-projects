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
		
		CDAccount(int dollars, int cents, double interest_rate, int term);
		
		CDAccount(int dollars, double interest_rate, int term);
		
		CDAccount();
	
	private:
		int dollars;
		int cents;
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
	double temp = dollars + (cents/100);
	cout << "Balance is: " << temp << " dollars" << endl;
	return temp;
}

double CDAccount::return_maturity_balance()
{
	double temp = dollars + (cents/100);
	double rate = interest_rate;
	
	for(int i = 0; i < term; i++)
	{
		temp = temp + (temp * rate);
	}
	cout << "Balance after maturity is: " << temp << " dollars" << endl;
	return temp;
	
}

double CDAccount::return_rate()
{
	double rate = interest_rate * 100;
	cout << "Rate is: " << rate << "%" << endl;
	return rate;
}

int CDAccount::return_term()
{
	cout << "Term is: " << term << " days" << endl;
	return term;
}

CDAccount::CDAccount(int dollars_v, int cents_v, double interest_rate_v, int term_v) : dollars(dollars_v), cents(cents_v), interest_rate(interest_rate_v / 100), term(term_v)
{
	
}

CDAccount::CDAccount(int dollars_v, double interest_rate_v, int term_v) : dollars(dollars_v), cents(0), interest_rate(interest_rate_v / 100), term(term_v)
{
	
}

CDAccount::CDAccount() :  dollars(0), cents(0), interest_rate(0), term(0)
{
	
}
