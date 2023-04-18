#include <iostream>
#include "list.h"
using namespace std;
using namespace lnk_list;


int main()
{
	Lab labs[4], test;
	int id;
	
	
	for(int i = 0; i < 4; i++)
	{
		cout << "Enter id: ";
		cin >> id; 
		labs[i].login(id);
	}
	
	for(int i = 0; i < 4; i++)
	{
		cout << "Lab " << i + 1 << "	===========================================" << endl;
		labs[i].display();
		cout << endl;
		//cout << "nice" << endl;
	}
	
	for(int i = 0; i < 4; i++)
	{
		cout << "Enter id: ";
		cin >> id; 
		labs[i].login(id);
	}
	
	for(int i = 0; i < 4; i++)
	{
		cout << "Lab " << i + 1 << "	===========================================" << endl;
		labs[i].display();
		cout << endl;
	}
	
	
	cout << "Enter id: ";
	cin >> id; 
	if(labs[1].search(id))
	{
		cout << "Found " << id << endl;
	}
	else
	{
		cout << id << " does not exits" << endl;
	}
	
	for(int i = 0; i < 4; i++)
	{
		cout << "Enter id: ";
		cin >> id; 
		labs[i].logoff(id);
	}
	
	for(int i = 0; i < 4; i++)
	{
		cout << "Lab " << i + 1 << "	===========================================" << endl;
		labs[i].display();
		cout << endl;
	}
	
	
	
	/*
	test.login(111);
	test.login(222);
	
	test.display();
	cout << endl;
	
	test.logoff(111);
	
	test.display();
	cout << endl;
	*/
	
	
	return 0;
}
