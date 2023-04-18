#include <iostream>
using namespace std;

namespace kukec
{
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
}
