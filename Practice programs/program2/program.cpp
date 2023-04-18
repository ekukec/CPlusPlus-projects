#include <iostream>
#include <string>
#include "node.h"
using namespace std;
using namespace node;

int main()
{
	NodePtr listPtr, tempPtr;
	listPtr = new Node;
	listPtr->set_name("Emily");
	//cout << listPtr->get_name() << endl;
	tempPtr = new Node;
	tempPtr->set_name("James");
	//cout << tempPtr->get_name() << endl;
	listPtr->set_link(tempPtr);
	tempPtr->set_link(new Node);
	tempPtr = tempPtr->get_link();
	tempPtr->set_name("Joules");
	//cout << tempPtr->get_name() << endl;
	tempPtr->set_link(NULL);
	
	
	cout << "output-----" << endl;
	output(listPtr);
	
	cout << "insert at------" << endl;
	insert_at(listPtr, "James", "Joshua");
	
	cout << "delete at-------" << endl;
	delete_at(listPtr, "Joules");
	
	cout << "delete all-------" << endl;
	delete_all(listPtr);
	output(listPtr);
	
	return 0;
}
