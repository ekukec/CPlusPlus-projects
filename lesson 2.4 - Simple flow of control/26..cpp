#include <iostream>
using namespace std;

int main()
{
	int x;
	
	cout << "Enter the x for which the formula x*x - 4*x + 3 will output a negative number: ";
	cin >> x;
	
	if(!(x*x - 4*x + 3))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	
	return 0;
}
