#include <string>
#include <iostream>
#include "administrator.h"
using namespace std;
namespace employeessavitch
{
	Administrator::Administrator() : SalariedEmployee(), title("No title yet"), responsibility("No responsibilities yet"), supervisor("No supervisor yet")
	{
		
	}
	
	Administrator::Administrator(string the_name, string the_ssn, double the_weekly_salary, string the_title, string the_responsibility, string the_supervisor) 
	: SalariedEmployee(the_name, the_ssn, the_weekly_salary), title(the_title), responsibility(the_responsibility), supervisor(the_supervisor)
	{
		
	}
	
	void Administrator::set_supervisor(string the_supervisor)
	{
		supervisor = the_supervisor;
	}
	
	void Administrator::read_in()
	{
		string the_name;
		cout << "Enter name: ";
		cin >> the_name;
		set_name(the_name);
		
		string the_ssn;
		cout << "Enter ssn: ";
		cin >> the_ssn;
		set_ssn(the_ssn);
		
		double the_weekly_salary;
		cout << "Enter weekly salary: ";
		cin >> the_weekly_salary;
		set_salary(the_weekly_salary);
		
		cout << "Enter title: ";
		cin >> title;
		
		cout << "Enter responsibility: ";
		cin >> responsibility;
		
		cout << "Enter supervisor: ";
		cin >> supervisor;
	}
	
	void Administrator::print()
	{
		cout << "Name: " << get_name() << endl;
		cout << "SSN: " << get_ssn() << endl;
		cout << "Salary: " << get_salary() << endl;
		cout << "Title: " << title << endl;
		cout << "Responsibility: " << responsibility << endl;
		cout << "Supervisor: " << supervisor << endl;
	}
	
	void Administrator::print_check()
	{
		set_net_pay(get_salary());
		cout << "\n_____________________________________________\n";
		cout << "Pay to the order of " << get_name( ) << endl;
		cout << "With the title " << title << " and responsibility " << responsibility << endl; 
		cout << "The sum of " << get_net_pay( ) << " Dollars\n";
		cout << "________________________________________________\n";
		cout << "Check Stub NOT NEGOTIABLE \n";
		cout << "Employee Number: " << get_ssn( ) << endl;
		cout << "Salaried Employee. Regular Pay: "
		<< get_salary() << endl;
		cout << "______________________________________________\n";
	}
		
}
