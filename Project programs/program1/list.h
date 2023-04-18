namespace lnk_list
{
	struct Node
	{
		int data;
		Node *link;
	};
	typedef Node* NodePtr;
	
	class List
	{
		public:			 
			List();
			List(int value);
			
			void insert(int value);
			void pop();
			void reverse_order();
			void output();
			 
		private:
			NodePtr head;
	};
}
