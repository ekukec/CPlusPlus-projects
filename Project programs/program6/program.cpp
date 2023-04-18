#include <iostream>
#include "d_l_list.h"
using namespace std;
using namespace d_l_list;

int main()
{
	Dllist l1;
	
	cout << l1 << endl;
	
	for(int i = 0; i < 20; i++)
	{
		l1.add(i + 1);
		//cout << "added " << i + 1 << endl; 
	}
	
	cout << "Full list: " << endl;
	cout << l1 << endl;
	
	/*
	for(int i = 0; i < 6; i++)
	{
		cout << "List after " << i + 1 << " elements removed: " << endl;
		l1.remove();
		cout << l1 << endl;
	}
	*/
	
	l1.remove(3, 19);
	
	cout << "Remains: " << endl;
	cout << l1 << endl;
	
	return 0;	
};
