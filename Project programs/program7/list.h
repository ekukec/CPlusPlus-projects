namespace lnk_list
{
	struct Node
	{
		int station_num;
		int user_id;
		Node* link;
	};
	typedef Node* NodePtr;
	
	
	class Lab
	{
		public:
			Lab();
			
			Lab(int size_val);
			
			void display();
			
			void login(int id_val);
			
			void logoff(int id_val);
			
			bool search(int id_val);
			
		private:
			NodePtr head, back;
			int size;
			int current_users;	
	};
}
