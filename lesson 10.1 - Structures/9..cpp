#include <iostream>

using namespace std;

struct ShoeType
{
	char style;
	double price;
};

struct Date
{
	int month;
	int day;
	int year;
};

struct StockRecord
{
	ShoeType shoe_info;
	Date arrival_date;
};


int main()
{
	StockRecord record1;
	
	record1.arrival_date.year = 2006;
	
	cout << record1.arrival_date.year << endl;
	
	return 0;
}
