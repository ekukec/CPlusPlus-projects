#include <iostream>
#include "rational.h"
using namespace std;
using namespace kukec;

int main()
{
	Rational p1, p2, p3;
	
	cin >> p1;
	cout << p1 << endl;
	
	cin >> p2;
	cout << p2 << endl;
	
	cout << p1 + p2 << endl;
	
	cout << p1 - p2 << endl;
	
	cout << p1 * p2 << endl;
	
	cout << p1 / p2 << endl;
	
	return 0;
}
