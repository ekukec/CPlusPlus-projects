#ifndef GENERICLIST_CPP
#define GENERICLIST_CPP
#include <iostream>
#include <cstdlib>
#include "genericlist.h" //This is not needed when used as we are using this file,
//but the #ifndef in genericlist.h makes it safe.
using namespace std;

namespace listsavitch
{
	//Uses cstdlib:
	template<class ItemType>
	GenericList<ItemType>::GenericList(int max) : max_length(max), current_length(0), current_item(-1)
	{
		item = new ItemType[max];
	}
	 
	template<class ItemType>
	GenericList<ItemType>::~GenericList( )
	{
		delete [] item;
	}
	
	template<class ItemType>
	int GenericList<ItemType>::length( ) const
	{
		return (current_length);
	}
	
	//Uses iostream and cstdlib:
	template<class ItemType>
	void GenericList<ItemType>::add(ItemType new_item)
	{
		if ( full( ) )
		{
			cout << "Error: adding to a full list.\n";
			exit(1);
		}
		else
		{
			item[current_length] = new_item;
			current_item = current_length;
			current_length = current_length + 1;
		}
	}
	
	template<class ItemType>
	bool GenericList<ItemType>::full( ) const
	{
		return (current_length == max_length);
	}
	
	template<class ItemType>
	void GenericList<ItemType>::erase( )
	{
		current_length = 0;
		current_item = -1;
	}
	
	template<class ItemType>
	void GenericList<ItemType>::next()
	{
		if((current_length - 1) == current_item)
		{
			//cout << "len: " << current_length << endl;
			//cout << "item: " << current_item << endl;
			cout << "There is no next item" << endl;
			
		}
		else
		{
			//cout << "len: " << current_length << endl;
			//cout << "item: " << current_item << endl;
			current_item++;
		}
	}
	
	template<class ItemType>
	void GenericList<ItemType>::previous()
	{
		if(current_item > 0)
		{
			current_item--;
		}
		else
		{
			cout << "There is no previous item" << endl;
		}
	}
	
	template<class ItemType>
	void GenericList<ItemType>::first()
	{
		if(current_length == 0)
		{
			cout << "There are no items in the lsit" << endl;
		}
		else
		{
			current_item = 0;
		}
	}
	
	template<class ItemType>
	ItemType GenericList<ItemType>::current_value()
	{
		if(current_item != -1)
		{
			return item[current_item];
		}
		else
		{
			cout << "List empty" << endl;
			exit(1);
		}
	}
	
	template<class ItemType>
	ItemType GenericList<ItemType>::get_nth(int n)
	{
		if(n > current_length || n < 0)
		{
			cout << "Invalid entry" << endl;
		}
		else
		{
			return item[n - 1];
		}
	}
}//listsavitch
#endif 
