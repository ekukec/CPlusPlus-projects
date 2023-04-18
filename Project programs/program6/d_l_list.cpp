#include <iostream>
#include "d_l_list.h"
using namespace std;

namespace d_l_list
{
	Dllist::Dllist() : head(NULL), back(NULL)
	{
		
	}
	
	bool Dllist::empty()
	{
		return head == NULL;
	}
			
	void Dllist::add(int data_v)
	{
		NodePtr temp;
		temp = new Node;
		
		if(empty())
		{
			temp->data = data_v;
			temp->link = temp;
			head = temp;
			back = temp;
		}
		else
		{
			temp->data = data_v;
			back->link = temp;
			back = back->link;
			back->link = head;
		}
	}
	
	void Dllist::remove()
	{
		NodePtr del;
		del = head;
		
		if(back->link == back)
		{
			//cout << "Last item is deleted" << endl;
			head = NULL;
			back = NULL;
		}
		else
		{
			//cout << "Not last item" << endl;
			head = head->link;
			back->link = head;
		}
		delete del;
	}
	
	void Dllist::remove(int position, int how_many)
	{
		NodePtr move, del;
		int count;
		del = head;
		move = head;
		count = position - 1;
		
		for(int i = 0; i < how_many; i++)
		{
			if(position == 1)
			{
				head = head->link;
				back->link = head;
			}
			else
			{
				if(count == 1)
				{
					count = position;
				}
				while(count > 1)
				{
					move = move->link;
					count--;
				}
				del = move->link;
				move->link = del->link;
				if(del == back)
				{
					back = move;
					//cout << "Back now points to " << back->data << endl;
				}
				if(del == head)
				{
					head = head->link;
					//cout << "head now points to " << head->data << endl;
					//cout << "Back now points to " << back->data << endl;
					//cout << "Back link now points to " << (back->link)->data << endl;
				}
			}
			
			
			//cout << "Deleting " << del->data << endl;
			delete del;
			
			/*
			cout << "List after deleting: " << endl;
			NodePtr temp;
			temp = head;
			
			cout << temp->data << endl;
			temp = temp->link;
			//cout << "Temp points to: " << temp->data << endl;
			
			while(temp != head)
			{
				cout << temp->data << endl;
				temp = temp->link;
				//cout << "Temp points to: " << temp->data << endl;
			}
			cout << "===============" << endl; 
			*/
		}
	}
			
	ostream& operator <<(ostream& out, Dllist& list)
	{
		if(list.empty())
		{
			cout << "List empty" << endl;
		}
		else
		{
			NodePtr temp;
			temp = list.head;
			
			cout << temp->data << endl;
			temp = temp->link;
			//cout << "Temp points to: " << temp->data << endl;
			
			while(temp != list.head)
			{
				cout << temp->data << endl;
				temp = temp->link;
				//cout << "Temp points to: " << temp->data << endl;
			}
		}
		return out;
	}
}
