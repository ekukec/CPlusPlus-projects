#include <iostream>
#include <string>
using namespace std;

namespace employeessavitch
{
	class SalariedEmployee
	{
		public:
			SalariedEmployee();
			
		private:
	};
	
	class TitledEmployee //:: public SalariedEmployee
	{
		public:
			TitledEmployee();
			TitledEmployee(string title_v);
			void set_title(string title_v);
			string get_title();
			void set_name(string title_v);
			
		private:
			string title;
	};
}

int main()
{
	
	
	return 0;
}

namespace employeessavitch
{
	TitledEmployee::TitledEmployee() : SalariedEmployee(), title()
	{
		
	}
	
	TitledEmployee::TitledEmployee(string title_v) : SalariedEmployee(), title(title_v)
	{
		
	}
	
	void TitledEmployee::set_name(string title_v)
	{
		Employee::set_name(title + the_name);
	}
}

