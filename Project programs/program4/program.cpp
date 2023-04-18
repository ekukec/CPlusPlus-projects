#include <iostream>
#include <cstdlib>
#include "listc.h"
using namespace std;
using namespace listc;


int main()
{
	List l1;
	double num;
	
	for(int i = 0; i < 50; i++)
	{
		num = (rand() + (i / 2)) % 100;
		l1.add(num);
	}
	
	
	cout << "List: " << endl << l1 << endl;
		
	return 0;
}
