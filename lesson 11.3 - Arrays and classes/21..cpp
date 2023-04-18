#include <iostream>
#include <cstdlib>
using namespace std;
 
const int MAX_LIST_SIZE = 50;
 
class TemperatureList
{
	public:
		TemperatureList( );
		//Initializes the object to an empty list.
		 
		void add_temperature(double temperature);
		//Precondition: The list is not full.
		//Postcondition: The temperature has been added to the list.
		 
		bool full( ) const;
		//Returns true if the list is full; false otherwise.
		  
		friend ostream& operator <<(ostream& outs, const TemperatureList& the_object);
		//Overloads the << operator so it can be used to output values of
		//type TemperatureList. Temperatures are output one per line.
		//Precondition: If outs is a file output stream, then outs
		//has already been connected to a file.
		
		int get_size();
		
		double get_temperature(int position);
		
		
		
	private:
		double list[MAX_LIST_SIZE]; //of temperatures in Fahrenheit
		int size; //number of array positions filled
};



int main()
{
	
	
	
	return 0;
}



//This is the implementation for the class TemperatureList.
TemperatureList::TemperatureList( ) : size(0)
{
//Body intentionally empty.
}

void TemperatureList::add_temperature(double temperature)
{//Uses iostream and cstdlib:
	if ( full( ) )
	{
		cout << "Error: adding to a full list.\n";
		exit(1);
	}
	else
	{
		list[size] = temperature;
		size = size + 1;
	}
}

bool TemperatureList::full( ) const
{
	return (size == MAX_LIST_SIZE);
}

//Uses iostream:
ostream& operator <<(ostream& outs, const TemperatureList& the_object)
{
	for (int i = 0; i < the_object.size; i++)
		outs << the_object.list[i] << " F\n";
		
	return outs;
}

int TemperatureList::get_size()
{
	return size;
}

double TemperatureList::get_temperature(int position)
{
	if(position < MAX_LIST_SIZE && position >= 0)
		return list[position];
	else
		cout << "Position entered does not exist" << endl;
}
