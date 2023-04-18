#include <iostream>
using namespace std;


void product(int n1, int n2, int n3);


int main()
{
	int n1, n2, n3;
	
	cout << "Enter number 1: ";
	cin >> n1;
	cout << "Enter number 2: ";
	cin >> n2;
	cout << "Enter number 3: ";
	cin >> n3;
	
	product(n1, n2, n3);
	
	return 0;
}


void product(int n1, int n2, int n3)
{
	cout << n1 + n2 + n3 << endl;
}
