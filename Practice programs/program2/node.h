#include <iostream>
#include <string>
using namespace std;

namespace node
{
	class Node
	{
		public:
			Node(string name_value, Node *link_value);
			Node();
			void set_name(string name_value);
			void set_link(Node *link_value);
			string get_name();
			Node* get_link();
			
		private:
			string name;
			Node *link;
	};
	typedef Node* NodePtr;
	
	void output(NodePtr& par1);
	
	void insert_at(NodePtr& par1, string after, string value);
	
	void delete_at(NodePtr& par1, string value);
	
	void delete_all(NodePtr& par1);
}
