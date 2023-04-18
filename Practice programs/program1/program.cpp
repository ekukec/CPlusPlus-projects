#include <iostream>
#include <string>
#include "node.h"
using namespace std;
using namespace node;

int main()
{
	NodePtr listPtr, tempPtr;
	listPtr = new Node;
	listPtr->name = "Emily";
	tempPtr = new Node;
	tempPtr->name = "James";
	listPtr->link = tempPtr;
	tempPtr->link = new Node;
	tempPtr = tempPtr->link;
	tempPtr->name = "Joules";
	tempPtr->link = NULL;
	
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
