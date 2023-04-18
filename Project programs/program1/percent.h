#include <iostream>
using namespace std;

namespace kukec
{	
	class Percent
	{
		public:
			friend Percent operator +(const Percent& p1, const Percent& p2);
			
			friend Percent operator -(const Percent& p1, const Percent& p2);
			
			friend Percent operator *(const Percent& p1, const int& p2);
			
			friend bool operator ==(const Percent& first, const Percent& second);
			
			friend bool operator <(const Percent& first, const Percent& second);
			
			Percent();
			
			Percent(int percent_value);
			
			friend istream& operator >>(istream& ins, Percent& the_object);
			
			//Overloads the >> operator to input values of type
			//Percent.
			//Precondition: If ins is a file input stream, then ins
			//has already been connected to a file.
			friend ostream& operator <<(ostream& outs, const Percent& a_percent);
			//Overloads the << operator for output values of type
			//Percent.
			//Precondition: If outs is a file output stream, then
			//outs has already been connected to a file.
			
			
			
		private:
			int value;
	};
}
