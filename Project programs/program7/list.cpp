#include <iostream>
#include "list.h"
using namespace std;

namespace lnk_list
{
	Lab::Lab() : head(NULL), back(NULL), size(10), current_users(0)
	{
		
	}
	
	Lab::Lab(int size_val) : head(NULL), back(NULL), size(size_val), current_users(0)
	{
		
	}
			
	void Lab::display()
	{
		NodePtr temp;
		temp = head;
		
		while(temp != NULL)
		{
			cout << "Station " << temp->station_num << " User: " << temp->user_id << "||	";
			temp = temp->link;
		}
	}
	
	void Lab::login(int id_val)
	{
		NodePtr temp;
		temp = new Node;
		current_users++;
		
		temp->station_num = current_users;
		temp->user_id = id_val;
		if(current_users == 1)
		{
			temp->link = back;
			back = temp;
			head = temp;
		}
		else
		{
			temp->link = back->link;
			back->link = temp;
			back = temp;
		}
	}
	
	void Lab::logoff(int id_val)
	{
		NodePtr temp, del;
		temp = head;
		
		if(temp->user_id == id_val)
		{
			del = temp;
			head = head->link;
			delete del;
		}
		else
		{
			if(current_users > 1)
			{
				while((temp->link)->user_id != id_val && temp != NULL)
				{
					temp = temp->link;
				}
				if(temp->link != NULL)
				{
					del = temp->link;
					temp->link = del->link;
					delete del;
				}
			}
		}
	}
	
	bool Lab::search(int id_val)
	{
		NodePtr temp;
		temp = head;
		
		while(temp->user_id != id_val && temp != NULL)
		{
			temp = temp->link;
		}
		
		if(temp->user_id == id_val)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}
