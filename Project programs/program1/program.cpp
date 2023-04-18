#include <iostream>
#include <cstdlib>
#include "genericlist.h"
#include "genericlist.cpp"
using namespace std;
using namespace listsavitch;



int main()
{
	GenericList<int> test(10);
	
	for(int i = 0; i < 10; i++)
	{
		test.add(rand() % 100);
	}
	cout << test << endl;
	
	cout << "Current: " << test.current_value() << endl;
	test.previous();
	cout << "Previous: " << test.current_value() << endl;
	test.next();
	cout << "Next: " << test.current_value() << endl;
	test.first();
	cout << "First: " << test.current_value() << endl;
	//test.previous();
	
	cout << "Get nth: " << test.get_nth(4) << endl;
	
	return 0;
}
