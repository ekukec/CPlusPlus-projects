#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H
#include <string>
#include "salariedemployee.h"
using namespace std;
namespace employeessavitch
{
	class Administrator : public SalariedEmployee
	{
		public:
			Administrator( );
			Administrator (string the_name, string the_ssn, double the_weekly_salary, string the_title, string the_responsibility, string the_supervisor);
			void set_supervisor(string the_supervisor);
			void read_in();
			void print();
			void print_check();
			
		private:
			string title;//weekly
			string responsibility;
			string supervisor;
			
		protected:
			double annual_salary;
	};
}
#endif //SALARIEDEMPLOYEE_
