#include <iostream>
using namespace std;


void change(int& par1, int& par2);


int main()
{
	int val1, val2;
	
	cout << "Enter number 1: ";
	cin >> val1;
	cout << "Enter number 2: ";
	cin >> val2;
	
	change(val1, val2);
	
	cout << "Number 1: " << val1 << endl << "Number 2: " << val2 << endl;
	
	return 0;
}


void change(int& par1, int& par2)
{
	par1 = 0;
	par2 = 0;
}
