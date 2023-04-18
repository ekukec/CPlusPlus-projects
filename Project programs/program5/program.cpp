#include <iostream>
#include <cstdlib>
#include "listc2.h"
using namespace std;
using namespace listc2;


int main()
{
	List l1;
	
	double num;
	
	for(int i = 0; i < 49; i++)
	{
		num = (rand() % 100) + (i / 10.0);
		l1.insert(21,num);
	}
	
	cout << l1;
	
	cout << l1.first() << endl;
	
	cout << l1.last() << endl;
	
	cout << l1.current() << endl;
	
	l1.insert(50, 6969);
	
	cout << l1.current() << endl;	
	
	return 0;
}
