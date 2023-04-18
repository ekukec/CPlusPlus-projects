#include <iostream>
#include "list.h"
using namespace std;
using namespace lnk_list;

int main()
{
	List l1;
	
	for(int i = 0; i < 10; i++)
	{
		l1.insert(i);
	}
	
	cout << "Before reversing order: " << endl;
	l1.output();
	
	l1.reverse_order();

	cout << "After reversing order: " << endl;	
	l1.output();
	
	
	return 0;
}
