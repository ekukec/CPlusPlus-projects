#include <iostream>
using namespace std;

class Money
{
	public:
		friend Money operator +(const Money& amount1, const Money& amount2);
		//Returns the sum of the values of amount1 and amount2.
		friend Money operator -(const Money& amount1, const Money& amount2);
		//Returns amount1 minus amount2.
		friend Money operator -(const Money& amount);
		//Returns the negative of the value of amount.
		friend bool operator ==(const Money& amount1, const Money& amount2);
		//Returns true if amount1 and amount2 have the same value; false otherwise.
		friend bool operator <(const Money& amount1, const Money& amount2);
		//Returns true if amount1 is less than amount2; false otherwise.
		Money(long dollars, int cents);
		//Initializes the object so its value represents an amount with
		//the dollars and cents given by the arguments. If the amount
		//is negative, then both dollars and cents should be negative.
		Money(long dollars);
		//Initializes the object so its value represents $dollars.00.
		Money();
		//Initializes the object so its value represents $0.00.
		double get_value() const;
		//Returns the amount of money recorded in the data portion of the calling
		//object.
		friend istream& operator >>(istream& ins, Money& amount);
		//Overloads the >> operator so it can be used to input values of type
		//Money. Notation for inputting negative amounts is as in - $100.00.
		//Precondition: If ins is a file input stream, then ins has already been
		//connected to a file.
		 
		friend ostream& operator <<(ostream& outs, const Money& amount);
		//Overloads the << operator so it can be used to output values of type
		//Money. Precedes each output value of type Money with a dollar sign.
		//Precondition: If outs is a file output stream, then outs has already been
		//connected to a file.
		
		void set(long dollars, int cents);
		
		void set(long dollars);
		
	private:
		long all_cents;
};

class Check
{
	public:
		Check(int number, int amount, bool cashed);
		Check();
	
		friend istream& operator >>(istream& ins, Check& par1);

		friend ostream& operator <<(ostream& outs, const Check& par1);
		
		Check get_check();
		
		void set(int number, long amount, bool cashed);
		
		void set_num(int number);
		
		void set_amount(long amount);
		
		void set_cashed(bool cashed);
		
		int get_num() const;
		
		double get_amount() const;
		
		bool get_cashed() const;
	
	private:
		int check_num;
		Money check_amount;
		bool check_cashed;	
};

int main()
{
	Check checkbook[20];
	Money balance(1320, 50), deposits[20];
	
	double check_sum = 0;
	double deposit_sum = 0;
	
	for(int i = 0; i < 20; i++)
	{
		if(i < 10)
			checkbook[i].set(i + 1, 1500, false);
		else
			checkbook[i].set(i + 1, 1500, true);
		
		cout << checkbook[i];
		
		if(checkbook[i].get_cashed())
			check_sum = check_sum + checkbook[i].get_amount();
		
		deposits[i].set(3000);
		
		deposit_sum = deposit_sum + deposits[i].get_value();
	}
	
	cout << "Old balance: " << balance << endl;
	
	cout << "New balance: " << balance + deposit_sum - check_sum << endl;
	
	cout << "Total of cashed checks: " << check_sum << endl;
	
	cout << "Total of deposits: " << deposit_sum << endl;
	
	
	cout << "Checks cashed: " << endl;
	
	for(int i = 0; i < 20; i++)
	{
		if(checkbook[i].get_cashed() == true)
		{
			cout << checkbook[i];
		}
	}
	
	cout << "============================" << endl;
	
	cout << "Checks not cashed: " << endl;
	for(int i = 0; i < 20; i++)
	{
		if(checkbook[i].get_cashed() == false)
		{
			cout << checkbook[i];
		}
	}
	
	return 0;
}

Money operator +(const Money& amount1, const Money& amount2)
{
	Money result;
	
	result.all_cents = amount1.all_cents + amount2.all_cents;
	
	return result;
}

Money operator -(const Money& amount1, const Money& amount2)
{
	Money result;
	
	result.all_cents = amount1.all_cents - amount2.all_cents;
	
	return result;
}

Money operator -(const Money& amount)
{
	Money result;
	
	result.all_cents = amount.all_cents - (2 * amount.all_cents);
	
	return result;
}

bool operator ==(const Money& amount1, const Money& amount2)
{
	if(amount1.all_cents == amount2.all_cents)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool operator <(const Money& amount1, const Money& amount2)
{
	if(amount1.all_cents < amount2.all_cents)
	{
		return true;
	}
	else
	{
		return false;
	}
}

Money::Money(long dollars, int cents)
{
	if(dollars < 0)
	{
		cents = cents - (2 * cents);
		all_cents = dollars * 100 + cents;
	}
	else
	{
		all_cents = dollars * 100 + cents;
	}
}

Money::Money(long dollars)
{
	if(dollars < 0)
	{
		all_cents = dollars * 100;
	}
	else
	{
		all_cents = dollars * 100;
	}
}

Money::Money() : all_cents(0)
{
	
}

double Money::get_value() const
{
	double result;
	
	result = all_cents / 100.0;
	
	return result;
}

istream& operator >>(istream& ins, Money& amount)
{
	char dot;
	int dollars, cents;
	
	do
	{
		ins >> dollars >> dot >> cents;
		
	}while(dot != '.');
	
	amount.all_cents = dollars * 100 + cents;
}

ostream& operator <<(ostream& outs, const Money& amount)
{
	outs << amount.get_value() << "$";
}

void Money::set(long dollars, int cents)
{
	Money temp(dollars, cents);
	
	all_cents = temp.all_cents;
}

void Money::set(long dollars)
{
	Money temp(dollars);
	
	all_cents = temp.all_cents;
}

//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Check::Check(int number, int amount, bool cashed) : check_num(number), check_amount(amount), check_cashed(cashed)
{
	
}

Check::Check() : check_num(0), check_amount(0), check_cashed(false)
{
	
}

istream& operator >>(istream& ins, Check& par1)
{	
	ins >> par1.check_num;
	
	ins >> par1.check_amount;
	
	ins >> par1.check_cashed;
	
	return ins;
}

ostream& operator <<(ostream& outs, const Check& par1)
{
	outs << "Check number: " << par1.check_num << endl
		<< "Check amount: " << par1.check_amount << endl;
	
	if(par1.check_cashed)
	{
		outs << "Check cashed: yes" << endl; 
	}
	else
	{
		outs << "Check cashed: no" << endl; 
	}
		
	return outs;
}

Check Check::get_check()
{
	
}

void Check::set(int number, long amount, bool cashed)
{
	check_num = number;
	
	check_amount.set(amount);
	
	check_cashed = cashed;
}

void Check::set_num(int number)
{
	check_num = number;
}

void Check::set_amount(long amount)
{
	check_amount.set(amount);
}

void Check::set_cashed(bool cashed)
{
	check_cashed = cashed;
}

int Check::get_num() const
{
	return check_num;
}

double Check::get_amount() const
{
	check_amount.get_value();
}

bool Check::get_cashed() const
{
	return check_cashed;
}
