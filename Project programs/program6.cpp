#include <iostream>

using namespace std;


class Counter
{
	public:
		void get_overflow();
		void incr();
		void output();
		void reset_counter();
		void set_limit();
		Counter(int limit);
		Counter();
	private:
		void incr_1000(int digit);
		void incr_100(int digit);
		void incr_10(int digit);
		void incr_1(int digit);
		bool overflow(int incr);
		int counter;
		int limit;
		int over;
		
		
};


int main()
{
	Counter c1(7000);
	
	char again = 'Y';
	
	do
	{
		c1.incr();
		
		cout << "Again(Y/N): ";
		cin >> again;
		
	}while(again == 'Y' || again == 'y');
	
	
	return 0;
}

void Counter::get_overflow()
{
	double temp = over / 100;
	cout << "Current overflow is: " << temp << endl;
}

void Counter::incr()
{
	char mode;
	int digit;
	
	output();
	
	cout << "Enter a for cents, s for dimes, d for dollars or f for tens of dollars followed by a digit 1 to 9: ";
	do
	{
		cin >> mode >> digit;
		
	}while(digit < 1 || digit > 9);
	
	switch(mode)
	{
		case 'a':
			incr_1(digit);
			break;
			
		case 's':
			incr_10(digit);
			break;
			
		case 'd':
			incr_100(digit);
			break;
			
		case 'f':
			incr_1000(digit);
			break;
			
		case 'o':
			get_overflow();
			break;
	}
	
}

void Counter::output()
{
	double temp = static_cast<double>(counter) / 100;
	
	cout << "Money currently spent: " << temp << endl;
	
}

void Counter::incr_1000(int digit)
{
	if(!overflow(1000 * digit))
	{
		counter = counter + 1000 * digit;
	}
	else
	{
		over = over + ((counter + (1000 * digit)) - limit);
		counter = limit;
	}
	
}

void Counter::incr_100(int digit)
{
	if(!overflow(100 * digit))
	{
		counter = counter + 100 * digit;
	}
	else
	{
		over = over + ((counter + (1000 * digit)) - limit);
		counter = limit;
	}
	
}

void Counter::incr_10(int digit)
{
	if(!overflow(10 * digit))
	{
		counter = counter + 10 * digit;
	}
	else
	{
		over = over + ((counter + (1000 * digit)) - limit);
		counter = limit;
	}
	
}

void Counter::incr_1(int digit)
{
	if(!overflow(1 * digit))
	{
		counter = counter + 1 * digit;
	}
	else
	{
		over = over + ((counter + (1000 * digit)) - limit);
		counter = limit;
	}
	
}

void Counter::reset_counter()
{
	counter = 0;
}

void Counter::set_limit()
{
	cout << "Enter limit: ";
	cin >> limit;
}

Counter::Counter(int limit_v) : limit(limit_v), counter(0), over(0)
{
	if(limit_v > 9999 || limit_v < 0)
	{
		limit_v = 9999;
	}
}

Counter::Counter() : limit(0), counter(0), over(0)
{
	
}

bool Counter::overflow(int incr)
{
	int temp = counter;
	if((temp + incr) > limit)
	{
		return true;
	}
	else
	{
		return false;
	}
}
