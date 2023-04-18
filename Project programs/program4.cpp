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
		char int_to_char(int month);
		char m1, m2, m3;	
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
	int temp;
	cout << "Enter month(int): ";
	in >> temp;
	int_to_char(temp);
}

void Month::set_month(char l1, char l2, char l3, istream &in)
{
	//cout << "Enter the first 3 letters of the month u wish to enter: ";
	//in >> l1 >> l2 >> l3;
	//month = char_to_int(l1, l2, l3);
	m1 = l1;
	m2 = l2;
	m3 = l3;
}

void Month::get_month(ostream &out)
{
	int temp = char_to_int(m1, m2, m3);
	out << "Current month is: " << temp << endl;
}

void Month::get_month_char(ostream &out)
{
	out << "Current month is: " << m1 << m2 << m3 << endl;
	
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

char Month::int_to_char(int month)
{
	switch(month)
	{
		case 1:
			m1 = 'J';
			m2 = 'a';
			m3 = 'n';
			break;
			
		case 2:
			m1 = 'F';
			m2 = 'e';
			m3 = 'b';
			break;
			
		case 3:
			m1 = 'M';
			m2 = 'a';
			m3 = 'r';
			break;
			
		case 4:
			m1 = 'A';
			m2 = 'p';
			m3 = 'r';
			break;
			
		case 5:
			m1 = 'M';
			m2 = 'a';
			m3 = 'y';
			break;
			
		case 6:
			m1 = 'J';
			m2 = 'u';
			m3 = 'n';
			break;
			
		case 7:
			m1 = 'J';
			m2 = 'u';
			m3 = 'l';
			break;
			
		case 8:
			m1 = 'A';
			m2 = 'u';
			m3 = 'g';
			break;
			
		case 9:
			m1 = 'S';
			m2 = 'e';
			m3 = 'p';
			break;
			
		case 10:
			m1 = 'O';
			m2 = 'c';
			m3 = 't';
			break;
			
		case 11:
			m1 = 'N';
			m2 = 'o';
			m3 = 'v';
			break;
			
		case 12:
			m1 = 'D';
			m2 = 'e';
			m3 = 'c';
			break;
	}
}

Month::Month(char l1, char l2, char l3) : m1(l1), m2(l2), m3(l3)
{
	
}

Month::Month(int month_v)
{
	int_to_char(month_v);
}

Month::Month() : m1('x'), m2('x'), m3('x')
{
	
}
