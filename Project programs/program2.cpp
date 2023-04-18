#include <iostream>
using namespace std;


class Rational
{
	public:
		Rational(int num, int den);
		Rational(int num);
		Rational();
		
		friend ostream& operator <<(ostream& out, const Rational& par1);
		
		friend istream& operator >>(istream& in, Rational& par1);
		
		friend bool operator ==(const Rational& par1, const Rational& par2);
		
		friend bool operator <(const Rational& par1, const Rational& par2);
		
		friend bool operator >(const Rational& par1, const Rational& par2);
		
		friend bool operator <=(const Rational& par1, const Rational& par2);
		
		friend bool operator >=(const Rational& par1, const Rational& par2);
		
		friend Rational operator +(const Rational& par1, const Rational& par2);
		
		friend Rational operator -(const Rational& par1, const Rational& par2);
		
		friend Rational operator *(const Rational& par1, const Rational& par2);
		
		friend Rational operator /(const Rational& par1, const Rational& par2);
		
	private:
		void normalize();
		//void normalize(Rational& number);
		int numerator;
		int denominator;
};


int main()
{
	Rational p1, p2, p3;
	
	cin >> p1;
	cout << p1 << endl;
	
	cin >> p2;
	cout << p2 << endl;
	
	cout << p1 + p2 << endl;
	
	cout << p1 - p2 << endl;
	
	cout << p1 * p2 << endl;
	
	cout << p1 / p2 << endl;
	
	return 0;
}

Rational::Rational(int num, int den) : numerator(num), denominator(den)
{
	normalize();
}

Rational::Rational(int num) : numerator(num), denominator(1)
{
	
}

Rational::Rational() : numerator(0), denominator(1)
{
	
}

ostream& operator <<(ostream& out, const Rational& par1)
{
	out << par1.numerator << "/" << par1.denominator;
}

istream& operator >>(istream& in, Rational& par1)
{
	char slash;
	do
	{
		in >> par1.numerator >> slash >> par1.denominator;
		
	}while(slash != '/');
	par1.normalize();
}

bool operator ==(const Rational& par1, const Rational& par2)
{
	return((par1.numerator * par2.denominator) == (par2.numerator * par1.denominator));
}

bool operator <(const Rational& par1, const Rational& par2)
{
	if((par1.numerator * par1.denominator) < (par2.numerator * par2.denominator))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool operator >(const Rational& par1, const Rational& par2)
{
	if((par1.numerator * par1.denominator) > (par2.numerator * par2.denominator))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool operator <=(const Rational& par1, const Rational& par2)
{
	if((par1.numerator * par1.denominator) < (par2.numerator * par2.denominator))
	{
		return true;
	}
	else if((par1.numerator * par2.denominator) == (par2.numerator * par1.denominator))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool operator >=(const Rational& par1, const Rational& par2)
{
	if((par1.numerator * par1.denominator) > (par2.numerator * par2.denominator))
	{
		return true;
	}
	else if((par1.numerator * par2.denominator) == (par2.numerator * par1.denominator))
	{
		return true;
	}
	else
	{
		return false;
	}
}

Rational operator +(const Rational& par1, const Rational& par2)
{
	Rational result(0, 0);
	result.numerator = (par1.numerator * par2.denominator + par1.denominator * par2.numerator);
	result.denominator = (par1.denominator * par2.denominator);
	result.normalize();
	return result;
}

Rational operator -(const Rational& par1, const Rational& par2)
{
	Rational result(0, 0);
	result.numerator = (par1.numerator * par2.denominator - par1.denominator * par2.numerator);
	result.denominator = (par1.denominator * par2.denominator);
	result.normalize();
	return result;
}

Rational operator *(const Rational& par1, const Rational& par2)
{
	Rational result(0, 0);
	result.numerator = (par1.numerator * par2.numerator);
	result.denominator = (par1.denominator * par2.denominator);
	result.normalize();
	return result;
}

Rational operator /(const Rational& par1, const Rational& par2)
{
	Rational result(0, 0);
	result.numerator = par1.numerator * par2.denominator;
	result.denominator = par1.denominator * par2.numerator;
	result.normalize();
	return result;
}

void Rational::normalize()
{
	bool normalize;
	
	if(numerator > 0 && denominator < 0)
	{
		numerator = numerator - (2 * numerator);
		denominator = denominator + (2 * denominator);
	}
	else if(numerator < 0 && denominator < 0)
	{
		numerator = numerator + (2 * numerator);
		denominator = denominator + (2 * denominator);
	}
	
	for(int i = 1; i < 10; i++)
	{
		if((((numerator % i) == 0) && ((denominator % i) == 0)))
		{
			numerator = numerator / i;
			denominator = denominator / i;
		}
	}
}

/*
void Rational::normalize(Rational& number)
{
	bool normalize;
	
	if(number.numerator > 0 && number.denominator < 0)
	{
		number.numerator = number.numerator - (2 * number.numerator);
		number.denominator = number.denominator + (2 * number.denominator);
	}
	else if(number.numerator < 0 && number.denominator < 0)
	{
		number.numerator = number.numerator + (2 * number.numerator);
		number.denominator = number.denominator + (2 * number.denominator);
	}
	
	for(int i = 1; i < 10; i++)
	{
		while(((number.numerator % i) == 0) && ((number.denominator % i) == 0))
		{
			number.numerator = number.numerator / i;
			number.denominator = number.denominator / i;
		}
	}
}
*/
