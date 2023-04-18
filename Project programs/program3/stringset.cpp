#include <iostream>
#include <string>
#include <vector>
#include "stringset.h"
using namespace std;

namespace kukec
{
	StringSet::StringSet(string arr[], int size)
	{
		int i = 0;
		while(i < size)
		{
			array.push_back(arr[i]);
			//cout << arr[i] << " = " << array[i] << endl;
			i++;
		}	
	}
	
	StringSet::StringSet()
	{
		
	}
	
	void StringSet::add(string value)
	{
		array.push_back(value);
	}
	
	void StringSet::remove(string value)
	{
		for(int i = 0; i < array.size(); i++)
		{
			if(array[i] == value)
			{
				array.erase(array.begin()+i);
			}
		}
	}
	
	void StringSet::remove()
	{
		array.pop_back();
	}
	
	void StringSet::clear_set()
	{
		int i = 0;
		while(!array.empty())
		{
			array.pop_back();
			i++;
		}
	}
	
	int StringSet::size() const
	{
		return array.size();
	}
	
	void StringSet::output() const
	{
		for(int i = 0; i < array.size(); i++)
		{
			cout << array[i];
		}
	}
	
	string StringSet::get_value(int position) const
	{
		return array[position];
	}
	
	StringSet operator +(const StringSet& par1, const StringSet& par2)
	{
		//cout << "works" << endl;
		StringSet result;
		int x = 0;
		
		for(int i = 0; i < par1.size(); i++)
		{
			result.add(par1.get_value(i));
			//cout << result.get_value(x);
			//x++;	
		}
		for(int i = 0; i < par2.size(); i++)
		{
			result.add(par2.get_value(i));
			//cout << result.get_value(x);
			//x++;	
		}
		
		return result;
	}
	
	StringSet operator *(const StringSet& par1, const StringSet& par2)
	{
		//cout << "works" << endl;
		StringSet result;
		bool write = true;
		
		for(int i = 0; i < par1.size(); i++)
		{
			//cout << par1.size() << endl;
			for(int j = 0; j < par2.size(); j++)
			{
				//cout << par2.size() << endl;
				if(par1.get_value(i) == par2.get_value(j))
				{
					//cout << par1.get_value(i) << " = " << par2.get_value(j) << endl;
					for(int k = 0; k < result.size(); k++)
					{
						if(result.get_value(k) == par1.get_value(i))
						{
							write = false;
						}
					}
					if(write)
					{
						result.add(par1.get_value(i));
					}
				}
			}
			write = true;
		}
		
		return result;
	}
	
	void StringSet::operator =(const StringSet par1)
	{
		//cout << "works" << endl;
		//par1.output();
		//cout << par1.size();
	
		while(array.size() > 0)
		{
			array.pop_back();
		}
		
		for(int i = 0; i < par1.size(); i++)
		{
			array.push_back(par1.get_value(i));	
		}
	}
}
