#include <iostream>

using namespace std;

struct ShoeType
{
	char style;
	double price;
};

void read_shoe_record(ShoeType& new_shoe);


int main()
{
	ShoeType shoe;
	
	read_shoe_record(shoe);
	
	
	cout << shoe.price << endl << shoe.style << endl;
	
	return 0;
}

void read_shoe_record(ShoeType& new_shoe)
{
	cout << "Enter style of shoe (1 char): ";
	cin >> new_shoe.style;
	
	cout << "Enter new shoe price: ";
	cin >> new_shoe.price;
}
