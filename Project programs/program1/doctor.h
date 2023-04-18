#ifndef DOCTOR_H
#define DOCTOR_H
#include <string>
#include "salariedemployee.h"
using namespace std;
namespace employeessavitch
{
class Doctor : public SalariedEmployee
{
	public:
		Doctor( );
		Doctor (string the_name, string the_ssn, double the_weekly_salary, string the_specialty, double the_fee);
		Doctor(const Doctor& right_side);
		string get_specialty( ) const;
		void set_specialty(string the_specialty);
		double get_fee();
		void set_fee(double the_fee);
		void operator =(const Doctor& right_side);
		void print_check( );
		
	private:
		string specialty;//weekly
		double office_visit_fee;
};
}//employeessavitch
#endif //SALARIEDEMPLOYEE_
