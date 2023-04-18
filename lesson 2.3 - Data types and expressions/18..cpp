#include <iostream>
using namespace std;

int main()
{
	int n1, n2;
	
	cout << "Enter the value of the first number: ";
	cin >> n1;
	cout << "Enter the value of the second number: ";
	cin >> n2;
	
	cout << "First number: " << n1 << endl << "Second number: " << n2 << endl;
	cout << n1 << " divided by " << n2 << " equals: " << n1/n2 << endl;
	cout << "The remainder of the division is: " << n1%n2 << endl;
	
	return 0;
}
