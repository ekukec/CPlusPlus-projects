#include <iostream>
#include <string>
#include "node.h"
using namespace std;

namespace node
{
	void output(const NodePtr& par1)
	{
		NodePtr temp = par1;
		
		
		
		while(temp != NULL)
		{
			cout << temp->name << endl;
			temp = temp->link;
		}
	}
	
	void insert_at(NodePtr& par1, string after, string value)
	{
		NodePtr temp = par1;
		NodePtr new_el;
		
		while(temp->name != after)
		{
			temp = temp->link;
		}
		if(temp->name == after)
		{
			new_el = new Node;
			
			new_el->name = value;
			new_el->link = temp->link;
			temp->link = new_el;
			
			output(par1);
		}
		else
		{
			cout << "Name " << after << " not found" << endl;
		}	
	}
	
	void delete_at(NodePtr& par1, string value)
	{
		NodePtr temp = par1;
		NodePtr del;	
		
		while((temp->link)->name != value)
		{
			temp = temp->link;
		}
		if((temp->link)->name == value)
		{
			del = temp->link;
			temp->link = del->link;
			
			delete del;
			output(par1);
		}
	}
	
	void delete_all(NodePtr& par1)
	{
		NodePtr del;
		
		while(par1 != NULL)
		{
			del = par1;
			par1 = par1->link;
			delete del;
		}
	}
}
