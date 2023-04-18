#include <iostream>
#include <cstdlib>
using namespace std;
 
const int MAX_LIST_SIZE = 50;
 
class List
{
	public:
		List( );
		//Initializes the object to an empty list.
		 
		void add(double value);
		//Precondition: The list is not full.
		//Postcondition: The temperature has been added to the list.
		 
		bool full() const;
		//Returns true if the list is full; false otherwise.
		  
		friend ostream& operator <<(ostream& outs, const List& par1);
		//Overloads the << operator so it can be used to output values of
		//type TemperatureList. Temperatures are output one per line.
		//Precondition: If outs is a file output stream, then outs
		//has already been connected to a file.
		
		int get_size();
		
		double get_value(int position);
		
		double get_last();
		
		void delete_last();
		
		
		
	private:
		double list[MAX_LIST_SIZE]; //of temperatures in Fahrenheit
		int size; //number of array positions filled
};



int main()
{
	List l1;
	
	l1.add(21.2);
	
	l1.add(21.3);
	
	l1.add(21.4);
	
	l1.delete_last();
	
	cout << l1.get_last() << endl << l1.get_size() << endl << l1.get_value(1);
	
	return 0;
}



//This is the implementation for the class TemperatureList.
List::List() : size(0)
{
//Body intentionally empty.
}

void List::add(double value)
{//Uses iostream and cstdlib:
	if (full())
	{
		cout << "Error: adding to a full list.\n";
		exit(1);
	}
	else
	{
		list[size] = value;
		size = size + 1;
	}
}

bool List::full() const
{
	return (size == MAX_LIST_SIZE);
}

//Uses iostream:
ostream& operator <<(ostream& outs, const List& par1)
{
	for (int i = 0; i < par1.size; i++)
		outs << par1.list[i] << " F\n";
		
	return outs;
}

int List::get_size()
{
	return size;
}

double List::get_value(int position)
{
	if(position < MAX_LIST_SIZE && position >= 0)
		return list[position];
	else
		cout << "Position entered does not exist" << endl;
}

double List::get_last()
{
	return list[size - 1];
}

void List::delete_last()
{
	if(size > 0)
		size--;
	else
		cout << "List is already empty" << endl;
}
