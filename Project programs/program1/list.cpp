#include <iostream>
#include "list.h"
using namespace std;

namespace lnk_list
{
	List::List()
	{
		head = NULL;
	}
	
	List::List(int value)
	{
		head = new Node;
		head->data = value;
		head->link = NULL;
	}
			
	void List::insert(int value)
	{
		NodePtr temp;
		temp = new Node;
		temp->data = value;
		temp->link = head;
		head = temp;	
	}
	
	void List::pop()
	{
		NodePtr del;
		del = head;
		head = head->link;
		delete del;
	}
	
	void List::reverse_order()
	{
		NodePtr temp_head, temp;
		temp_head = NULL;
		
		temp = head;
		head = head->link;
		
		temp_head = temp;
		temp->link = NULL;
		
		while(head != NULL)
		{
			temp = head;
			head = head->link;
			
			temp->link = temp_head;
			temp_head = temp;
		}
		
		head = temp_head;
	}
	
	void List::output()
	{
		NodePtr temp;
		temp = head;
		
		while(temp != NULL)
		{
			cout << temp->data << endl;
			temp = temp->link;
		}
	}
}
