#include <iostream>
#include "percent.h"
using namespace std;
using namespace kukec;

int main()
{
	Percent p1, p2(34), p3;
	
	cout << p2 << endl;
	
	cin >> p1;
	
	cout << p1 << endl;
	
	p3 = p1 + p2;
	cout << p3 << endl;
	
	p3 = p1 - p2;
	cout << p3 << endl;
	
	p3 = p1 * 2;
	cout << p3 << endl;
	
	return 0;
}
