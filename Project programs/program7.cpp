#include <iostream>
#include <fstream>

using namespace std;


class RationalNumber
{
	public:
		RationalNumber neg();
		RationalNumber add(RationalNumber num2);
		RationalNumber sub(RationalNumber num2);
		RationalNumber mul(RationalNumber num2);
		RationalNumber div(RationalNumber num2);
		bool less(RationalNumber num2);
		RationalNumber(int numerator, int denominator);
		RationalNumber(int numerator);
		void input(istream &in);
		void output(ostream &out);
	private:
		int numerator;
		int denominator;
};


int main()
{
	RationalNumber num1(5,2), num2(3,2), num3(1), num4(2,1), num5(4,1);
	ofstream out;
	
	out.open("program7.dat");
	
	num1.less(num2);
	
	num1.add(num2);
	
	num1.sub(num2);
	
	num1.mul(num2);
	
	num1.div(num2);
	
	num3.input(cin);
	
	num3.neg();
	
	num3.output(out);
	
	num4.div(num5);
	
	num4.output(cout);
	
	out.close();
	
	return 0;
}

RationalNumber RationalNumber::neg()
{
	numerator = numerator - (2 * numerator);
	return numerator;
}

RationalNumber RationalNumber::add(RationalNumber num2)
{
	RationalNumber result(0, 0);
	result = (numerator * num2.denominator + denominator * num2.numerator) / (denominator * num2.denominator);
	cout <<  (numerator * num2.denominator + denominator * num2.numerator) << "/" << (denominator * num2.denominator) << endl;
	return result;
}

RationalNumber RationalNumber::sub(RationalNumber num2)
{
	RationalNumber result(0, 0);
	result = (numerator * num2.denominator - denominator * num2.numerator) / (denominator * num2.denominator);
	cout <<  (numerator * num2.denominator - denominator * num2.numerator) << "/" << (denominator * num2.denominator) << endl;
	return result;
}

RationalNumber RationalNumber::mul(RationalNumber num2)
{
	RationalNumber result(0, 0);
	result = (numerator * num2.numerator) / (denominator * num2.denominator);
	cout <<  (numerator * num2.numerator) << "/" << (denominator * num2.denominator) << endl;
	return result;
}

RationalNumber RationalNumber::div(RationalNumber num2)
{
	RationalNumber result(0, 0);
	result = (numerator * num2.denominator) / (num2.numerator * denominator);
	cout <<  (numerator * num2.denominator) << "/" << (num2.numerator * denominator) << endl;
	return result;
}

bool RationalNumber::less(RationalNumber num2)
{
	if((numerator * denominator) < (num2.numerator * num2.denominator))
	{
		cout << "A less than B" << endl;
		return true;
	}
	else
	{
		cout << "A not less than B" << endl;
		return false;
	}
}

RationalNumber::RationalNumber(int numerator_v, int denominator_v) : numerator(numerator_v), denominator(denominator_v)
{
	
}

RationalNumber::RationalNumber(int numerator_v) : numerator(numerator_v), denominator(0)
{
	
}

void RationalNumber::input(istream &in)
{
	cout << "Numerator: ";
	in >> numerator;
	cout << numerator << endl;
	cout << "Denominator: ";
	in >> denominator;
	cout << denominator << endl;
}

void RationalNumber::output(ostream &out)
{
	out << numerator << "/" << denominator << endl;
}
