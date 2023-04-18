#include <iostream>
#include <cstdlib>
using namespace std;

namespace listc2
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
			 
			double first();
			
			double last();
			
			double current();
			
			void advance();
			
			void reset();
			
			void insert(double after_me, double insert_me);
			
			int size();
			 
			friend ostream& operator <<(ostream& outs, const List& par1);		
			
		private:
			NodePtr head;
			NodePtr back;
			NodePtr now;
			int count;
	};	
}
