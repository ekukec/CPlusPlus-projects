#include <iostream>
#include <string>
#include "node.h"
using namespace std;

namespace node
{
	Node::Node()
	{
		
	}
	
	Node::Node(string name_value, Node *link_value) : name(name_value), link(link_value)
	{
		
	}
	
	void Node::set_name(string name_value)
	{
		name = name_value;
	}
	
	void Node::set_link(Node *link_value)
	{
		link = link_value;
	}
	
	string Node::get_name()
	{
		return name;
	}
	
	Node* Node::get_link()
	{
		return link;
	}
	
	void output(NodePtr& par1)
	{
		NodePtr temp = par1;
		
		if(par1->get_link() == NULL)
		{
			cout << "List empty" << endl;
			exit(1);
		}
		
		while(temp->get_link() != NULL)
		{
			cout << temp->get_name() << endl;
			temp = temp->get_link();
			//cout << "temp now points to " << temp->get_name() << endl; 
		}
		cout << temp->get_name() << endl;		
	}
	
	void insert_at(NodePtr& par1, string after, string value)
	{
		NodePtr temp = par1;
		NodePtr new_el;
		
		while(temp->get_name() != after)
		{
			temp = temp->get_link();
		}
		if(temp->get_name() == after)
		{
			new_el = new Node(value, temp->get_link());
			
			temp->set_link(new_el);
			
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
		
		while((temp->get_link())->get_name() != value)
		{
			temp = temp->get_link();
		}
		if((temp->get_link())->get_name() == value)
		{
			del = temp->get_link();
			temp->set_link(del->get_link());
			
			delete del;
			output(par1);
		}
	}
	
	void delete_all(NodePtr& par1)
	{
		NodePtr del;
		
		while(par1->get_link() != NULL)
		{
			del = par1;
			par1 = par1->get_link();
			delete del;
		}
	}
}
