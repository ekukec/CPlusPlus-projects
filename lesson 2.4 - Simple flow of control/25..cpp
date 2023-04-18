#include <iostream>
using namespace std;

int main()
{
	int x;
	
	cout << "Enter the x for the formula x*x - x - 2\nX: ";
	cin >> x;
	
	if((x < -1)||(x > 2))
		cout << "True, the formula will have a positive result which is: " << x*x - x - 2 << endl;
	else
		cout << "False, the formula will have a negative result which is: " << x*x - x - 2  << endl;
	
	return 0;
}
