#include <iostream>
using namespace std;

namespace employeessavitch
{
	class SalariedEmployee
	{
		public:
			SalariedEmployee();
			
		private:
	};
	
	class TitledEmployee :: public SalariedEmployee
	{
		public:
			TitledEmployee();
			void set_title(string title_v);
			string get_title();
			
		private:
			string title;
	};
}

int main()
{
	
	
	return 0;
}
