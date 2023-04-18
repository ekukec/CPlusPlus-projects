class Smart
{
	public:
		Smart( );
		void print_answer( ) const;
	 
	protected:
		int a;
		int b;
};

class SmartBut :: public Smart
{
	public:
		SmartBut();
		SmartBut(int a_v, int b_v, bool crazy_v);
		bool is_crazy();
		
	private:
		bool crazy;
};
