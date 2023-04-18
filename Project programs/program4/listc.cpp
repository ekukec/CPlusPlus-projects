#include <iostream>
#include <cstdlib>
#include "listc.h"
using namespace std;

namespace listc
{
	List::List() : head(NULL), size(0)
	{
		
	}
	
	void List::add(double value)
	{
		if(full())
		{
			cout << "List is full" << endl;
			exit(1);
		}
		else
		{
			NodePtr temp;
			temp = new Node;
			
			temp->data = value;
			temp->link = head;
			
			head = temp;
		
			size++;
			cout << "Size : " << size << endl;
		}
	}
	
	bool List::full() const
	{
		return (size == 50);
	}
	
	ostream& operator <<(ostream& outs, const List& par1)
	{
		NodePtr temp;
		temp = par1.head;
		
		while(temp != NULL)
		{
			cout << temp->data << endl;
			temp = temp->link;
		}
		
		return outs;
	}
}
