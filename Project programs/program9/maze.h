namespace maze
{
	struct Node
	{
		char name;
		Node* north;
		Node* west;
		Node* south;
		Node* east;
	};
	typedef Node* NodePtr;
	
	class Maze
	{
		public:
			Maze();
			
			void create_room();
			
			friend void link_rooms(Maze& room1, Maze& room2);
			
			friend void unlink_rooms(Maze& room1, Maze& room2);
			
			void delete_room();
			
		private:
			NodePtr start;
			NodePtr finish;
	};
}
