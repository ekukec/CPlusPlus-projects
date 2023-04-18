#include <iostream>

using namespace std;


class Money
{
	public:
		Money(double amount);
		int all_cents;	
};




int main()
{
	Money mon1(26.75);
		
	cout << mon1.all_cents << endl;
		
	return 0;
};






Money::Money(double amount)
{
	int dollars = static_cast<int>(amount) * 100;
	int cents = static_cast<int>((amount * 100) - dollars);
	all_cents = dollars + cents;
}
