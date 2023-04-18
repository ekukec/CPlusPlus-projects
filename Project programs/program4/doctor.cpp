#include <iostream>
#include <string>
#include "doctor.h"
using namespace std;
namespace employeessavitch
{
	Doctor::Doctor() : SalariedEmployee(), specialty("No specialty yet"), office_visit_fee(0.0)
	{
		
	}
	
	Doctor::Doctor(string the_name, string the_ssn, double the_weekly_salary, string the_specialty, double the_fee) 
	: SalariedEmployee(the_name, the_ssn, the_weekly_salary), specialty(the_specialty), office_visit_fee(the_fee)
	{
		
	}
	
	Doctor::Doctor(const Doctor& right_side)
	{
		set_name(right_side.get_name());
		set_ssn(right_side.get_ssn());
		set_salary(right_side.get_salary());
		specialty = right_side.specialty;
		office_visit_fee = right_side.office_visit_fee;
	}
	
	string Doctor::get_specialty( ) const
	{
		return specialty;
	}
	
	void Doctor::set_specialty(string the_specialty)
	{
		specialty = the_specialty;
	}
	
	double Doctor::get_fee()
	{
		return office_visit_fee;
	}
	
	void Doctor::set_fee(double the_fee)
	{
		office_visit_fee = the_fee;
	}
	
	void Doctor::operator =(const Doctor& right_side)
	{
		set_name(right_side.get_name());
		set_ssn(right_side.get_ssn());
		set_salary(right_side.get_salary());
		specialty = right_side.specialty;
		office_visit_fee = right_side.office_visit_fee;
	}
	
	void Doctor::print_check( )
	{
		set_net_pay(get_salary());
		cout << "\n_____________________________________________\n";
		cout << "Pay to the order of " << get_name( ) << " with the specailty of " << specialty << endl;
		cout << "The sum of " << get_net_pay( ) << " Dollars\n";
		cout << "________________________________________________\n";
		cout << "Check Stub NOT NEGOTIABLE \n";
		cout << "Employee Number: " << get_ssn( ) << endl;
		cout << "Salaried Employee. Regular Pay: "
		<< get_salary() << endl;
		cout << "______________________________________________\n";
	}
}
