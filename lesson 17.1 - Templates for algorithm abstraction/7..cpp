#include <iostream>
#include <cstdlib>
using namespace std;


template<class T>
class Pair
{
	public:
		Pair();
		Pair(T first_value, T second_value);
		void set_element(int position, T value);
		//Precondition: position is 1 or 2.
		//Postcondition:
		//The position indicated has been set to value.
		T get_element(int position) const;
		//Precondition: position is 1 or 2.
		//Returns the value in the position indicated.
	private:
		T first;
		T second;
};

int main()
{
	
	
	
	return 0;
}


template<class T>
Pair<T>::Pair()
{
	
}

template<class T>
void Pair<T>::set_element(int position, T value)
{
	if (position == 1)
		first = value;
	else if (position == 2)
		second = value;
	else
	{
		cout << "Error: Illegal pair position.\n";
		exit(1);
	}
}

template<class T>
T Pair<T>::get_element(int position) const
{
	if(position == 1)
		return first;
	else if(position == 2)
		return second;
	else
		cout << "Unvalid query" << endl;
		
}
