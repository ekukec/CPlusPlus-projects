#include <iostream>
#include <string>
#include <stdlib.h>
#include "RFIDShippingContainer.h"
using namespace std;


RFIDShippingContainer::RFIDShippingContainer() : ShippingContainer(), capacity(10), size(0)
{
	inventory = new Container[size];
}

RFIDShippingContainer::RFIDShippingContainer(int id, int the_capacity) : ShippingContainer(id), capacity(the_capacity), size(0)
{
	inventory = new Container[capacity];
}

void RFIDShippingContainer::add(string the_item)
{
	bool found = false;
	int increase;
	
	for(int i = 0; i < size; i++)
	{
		if(the_item == inventory[i].item)
		{
			found = true;
			inventory[i].quantity++;
		}	
	}
	
	if(size == capacity && found == false)
	{
		ConPtr temp = new Container[capacity + 5];
		ConPtr del = inventory;
		capacity = capacity + 5;
		
		for(int i = 0; i < size; i++)
		{
			temp[i] = inventory[i];
		}
		
		delete [] del;
		
		inventory = temp;
		
		inventory[size].item = the_item;
		inventory[size].quantity = 1;
		size++;
	}
	else if(size != capacity && found == false)
	{
		inventory[size].item = the_item;
		inventory[size].quantity = 1;
		size++;
	}
}

string RFIDShippingContainer::get_manifest()
{
	string result;
	char number[3]; 
	for(int i = 0; i < size; i++)
	{
		itoa(inventory[i].quantity,number,10);
		result = result + number + ' ' + inventory[i].item + '.';
	}
	return result;
}

int RFIDShippingContainer::get_size()
{
	return size;
}
