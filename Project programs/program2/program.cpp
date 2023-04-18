#include <iostream>
#include <cstdlib>
#include "list.h"
using namespace std;
using namespace lnk_list;

int main()
{
	List l1, l2, l3;
	int rnd;
	
	for(int i = 0; i < 10; i++)
	{
		rnd = rand() % 100;
		l1.insert(rnd);
		rnd = rand() % 100;
		l2.insert(rnd);
	}
	
	cout << "Before reversing order: " << endl;
	l1.output();
	
	l1.reverse_order();

	cout << "After reversing order: " << endl;	
	l1.output();
	
	l1.sort();
	
	cout << "After sorting: " << endl;
	l1.output();
	
	l3.set_head(merge(l1,l2));
	
	cout << "After merging: " << endl;
	l3.output();
	
	l3.sort();
	
	cout << "After merging and sorting: " << endl;
	l3.output();
	
	return 0;
}
