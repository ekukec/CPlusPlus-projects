#include <iostream>
using namespace std;

int main()
{
	int product, n;
	
	cout << "enter the value of product: " << endl;
	cin >> product;
	
	cout << "enter the value of the number with which u want to multiply the product value by: " << endl;
	cin >> n;
	
	product = product * n;
	cout << "the new value of product is: " << product << endl;
	
	return 0;
}
