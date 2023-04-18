#include <iostream>
#include "pairs.h"
using namespace std;

int main()
{
	Pairs p1, p2(2, 3), p3(4, -5), p4(-1, -11), p5;
	
	/*
	cin >> p1;
	cout << p1 << endl;
	
	cout << p2 << endl;
	*/
	
	p5 = p3 - p4;
	
	p1 = p2 * 3;
	
	cout << p5 << endl;
	
	cout << p1 << endl;
	
	return 0;
}
