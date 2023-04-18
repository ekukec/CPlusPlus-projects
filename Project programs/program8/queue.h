namespace queue
{
	struct Node
	{
		int ticket_num;
		long time;
		Node* link;	
	};
	typedef Node* NodePtr;
	
	class Queue
	{
		public:
			Queue();
			
			void enter();
			
			void help();
			
		private:
			NodePtr head;
			NodePtr back;
			int ticket;
			int avg_ttw;	
	};
}
