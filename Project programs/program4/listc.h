#include <iostream>
#include <cstdlib>
using namespace std;

namespace listc
{ 
	struct Node
	{
		double data;
		Node *link;
	};
	typedef Node* NodePtr;

	class List
	{
		public:
			List();
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
			
		private:
			NodePtr head;
			int size;
	};	
}
