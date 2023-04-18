#include <iostream>
using namespace std;

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


int main()
{
	Percent p1, p2(34), p3;
	
	cout << p2 << endl;
	
	cin >> p1;
	
	cout << p1 << endl;
	
	p3 = p1 + p2;
	cout << p3 << endl;
	
	p3 = p1 - p2;
	cout << p3 << endl;
	
	p3 = p1 * 2;
	cout << p3 << endl;
	
	return 0;
}

Percent operator +(const Percent& p1, const Percent& p2)
{
	Percent temp;
	temp.value = p1.value + p2.value;
	return temp;
}

Percent operator -(const Percent& p1, const Percent& p2)
{
	Percent temp;
	temp.value = p1.value - p2.value;
	return temp;
}

Percent operator *(const Percent& p1, const int& p2)
{
	Percent temp;
	temp.value = p1.value * p2;
	return temp;
}

Percent::Percent() : value(0)
{
	
}

Percent::Percent(int percent_value) : value(percent_value)
{

}

istream& operator >>(istream& ins, Percent& the_object)
{
	char per;
	
	do
	{
		ins >> the_object.value;
		ins >> per;
		
	}while(per != '%');
	
	return ins;	
}

ostream& operator <<(ostream& outs, const Percent& a_percent)
{
	outs << a_percent.value << "%";
	
	return outs;
}
