#include <iostream>
#include <cstdlib>
#include "listc2.h"
using namespace std;

namespace listc2
{
	List::List() : head(NULL), count(0)
	{
		
	}
	
	double List::first()
	{
		if(size() > 0)
		{
			return head->data;
		}
		else
		{
			cout << "List is empty" << endl;
			exit(1);
		}
	}
	
	double List::last()
	{
		if(size() > 0)
		{
			return back->data;
		}
		else
		{
			cout << "List is empty" << endl;
			exit(1);
		}
	}
	
	double List::current()
	{
		if(size() > 0)
		{
			return now->data;
		}
		else
		{
			cout << "List is empty" << endl;
			exit(1);
		}
	}
	
	void List::advance()
	{
		if(now->link != NULL)
		{
			now = now->link;
		}
		else
		{
			cout << "Cannot advance anymore" << endl;
			exit(1);
		}
	}
	
	void List::reset()
	{
		now = head;
	}
	
	void List::insert(double after_me, double insert_me)
	{
		if(size() == 50)
		{
			cout << "List is full" << endl;
			exit(1);
		}
		else
		{
			//cout << "check" << endl;
			NodePtr temp, move;
			temp = new Node;
			temp->data = insert_me;
			//cout << "check" << endl;
			move = head;
			while(move != NULL && move->data != after_me)
			{
				if(move->link == NULL)
				{
					back = move;
				}
				move = move->link;	
			}
			//cout << "check" << endl;
			if(move == NULL)
			{
				//cout << "check" << endl;
				temp->link = head;
				head = temp;
				now = temp;
			}
			else
			{
				//cout << "check" << endl;
				temp->link = move->link;
				move->link = temp;
				now = temp;
			}
			count++;	
		}
	}
	
	int List::size()
	{
		return count;
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
