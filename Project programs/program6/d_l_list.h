#include <iostream>
using namespace std;

namespace d_l_list
{
	struct Node
	{
		int data;
		Node* link;
	};
	typedef Node* NodePtr;
	
	
	class Dllist
	{
		public:
			Dllist();
			
			bool empty();
			
			void add(int data_v);
			
			void remove();
			
			void remove(int position, int how_many);
			
			friend ostream& operator <<(ostream& out, Dllist& list);
			
		private:
			NodePtr head;
			NodePtr back;
	};
}
