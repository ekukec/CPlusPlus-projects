#include <iostream>

using namespace std;

class Month
{
	public:
		void set_month(istream &in);
		
		void set_month(char l1, char l2, char l3, istream &in);
		
		void get_month(ostream &out);
		
		void get_month_char(ostream &out);
		
		Month(char l1, char l2, char l3);
		
		Month(int month);
		
		Month();

	private:
		int char_to_int(char l1, char l2, char l3);
		int month;	
};


int main()
{
	Month data1(3);
	Month data2;
	
	data1.get_month(cout);
	data1.get_month_char(cout);
	
	data1.set_month('D', 'e', 'c', cin);
	
	data1.get_month(cout);
	data1.get_month_char(cout);
	
	data2.set_month(cin);
	
	data2.get_month(cout);
	data2.get_month_char(cout);
	
	return 0;
}

void Month::set_month(istream &in)
{
	cout << "Enter month(int): ";
	in >> month;
}

void Month::set_month(char l1, char l2, char l3, istream &in)
{
	//cout << "Enter the first 3 letters of the month u wish to enter: ";
	//in >> l1 >> l2 >> l3;
	month = char_to_int(l1, l2, l3);
}

void Month::get_month(ostream &out)
{
	out << "Current month is: " << month << endl;
}

void Month::get_month_char(ostream &out)
{
	out << "Current month is: ";
	switch(month)
	{
		case 1:
			out << "Jan" << endl;
			break;
			
		case 2:
			out << "Feb" << endl;
			break;
			
		case 3:
			out << "Mar" << endl;
			break;
			
		case 4:
			out << "Apr" << endl;
			break;
			
		case 5:
			out << "May" << endl;
			break;
			
		case 6:
			out << "Jun" << endl;
			break;
			
		case 7:
			out << "Jul" << endl;
			break;
			
		case 8:
			out << "Aug" << endl;
			break;
			
		case 9:
			out << "Sep" << endl;
			break;
			
		case 10:
			out << "Oct" << endl;
			break;
			
		case 11:
			out << "Nov" << endl;
			break;
			
		case 12:
			out << "Dec" << endl;
			break;
	}
}

int Month::char_to_int(char l1, char l2, char l3)
{
	if(l1 == 'j' || l1 == 'J')
	{
		if((l2 == 'a' || l2 == 'A') && (l3 == 'n' || l3 == 'N'))
		{
			return 1;
		}
		
		
		if((l2 == 'u' || l2 == 'U') && (l3 == 'n' || l3 == 'N'))
		{
			return 6;
		}
		
		
		if((l2 == 'u' || l2 == 'U') && (l3 == 'l' || l3 == 'L'))
		{
			return 7;
		}
	}
	
	
	
	if(((l1 == 'f' || l1 == 'F') && (l2 == 'e' || l2 == 'E')) && (l3 == 'b' || l3 == 'B'))
	{
		return 2;
	}
	
	
	
	if(l1 == 'm' || l1 == 'M')
	{
		if((l2 == 'a' || l2 == 'A') && (l3 == 'r' || l3 == 'R'))
		{
			return 3;
		}
		
		
		if((l2 == 'a' || l2 == 'A') && (l3 == 'y' || l3 == 'Y'))
		{
			return 5;
		}
	}
	
	
	
	if(l1 == 'a' || l1 == 'A')
	{
		if((l2 == 'p' || l2 == 'P') && (l3 == 'r' || l3 == 'R'))
		{
			return 4;
		}
		
		
		if((l2 == 'u' || l2 == 'U') && (l3 == 'g' || l3 == 'G'))
		{
			return 8;
		}
	}
	
	
	
	if(((l1 == 's' || l1 == 'S') && (l2 == 'e' || l2 == 'E')) && (l3 == 'p' || l3 == 'P'))
	{
		return 9;
	}
	
	
	
	if(((l1 == 'o' || l1 == 'O') && (l2 == 'c' || l2 == 'C')) && (l3 == 't' || l3 == 'T'))
	{
		return 10;
	}
	
	
	
	if(((l1 == 'n' || l1 == 'N') && (l2 == 'o' || l2 == 'O')) && (l3 == 'v' || l3 == 'V'))
	{
		return 11;
	}
	
	
	
	if(((l1 == 'd' || l1 == 'D') && (l2 == 'e' || l2 == 'E')) && (l3 == 'c' || l3 == 'C'))
	{
		return 12;
	}
}

Month::Month(char l1, char l2, char l3) : month(char_to_int(l1, l2, l3))
{
	
}

Month::Month(int month_v) : month(month_v)
{
	
}

Month::Month() : month(0)
{
	
}
