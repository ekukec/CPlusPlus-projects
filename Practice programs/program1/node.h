#include <iostream>
#include <string>
using namespace std;

namespace node
{
	struct Node
	{
		string name;
		Node *link;
	};
	typedef Node* NodePtr;
	
	void output(const NodePtr& par1);
	
	void insert_at(NodePtr& par1, string after, string value);
	
	void delete_at(NodePtr& par1, string value);
	
	void delete_all(NodePtr& par1);
}
