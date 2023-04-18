#include <iostream>
#include <string>
#include "patient.h"
#include "doctor.h"
using namespace std;

namespace employeessavitch
{
	Patient::Patient() : Person(), prim_physician(Doctor()) 
	{
		
	}
	
	Patient::Patient(string the_name, Doctor physician) : Person(the_name), prim_physician(physician)
	{
		
	}
	
	Patient::Patient(const Patient& object) : Person(object.get_name()), prim_physician(object.prim_physician)
	{
		
	}
	
	void Patient::set_physician(Doctor physician)
	{
		prim_physician = physician;
	}
	
	Doctor Patient::get_physician() const
	{
		return prim_physician;
	}
	
	Patient& Patient::operator = (const Patient& rt_side)
	{
		Person::operator =(rt_side);
		prim_physician = rt_side.prim_physician;
	}
}
