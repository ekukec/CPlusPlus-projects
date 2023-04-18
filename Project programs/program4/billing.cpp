#include <iostream>
#include <string>
#include "billing.h"
using namespace std;

namespace employeessavitch
{
	Billing::Billing() : patient(Patient()), doctor(Doctor()), bill(0.0)
	{
		
	}
	
	Billing::Billing(Patient the_patient, Doctor the_doctor, double the_bill) : patient(the_patient), doctor(the_doctor), bill(the_bill)
	{
		
	}
	
	Billing::Billing(const Billing& object) : patient(object.patient), doctor(object.doctor), bill(object.bill)
	{
		
	}
	
	void Billing::set_patient(Patient the_patient)
	{
		patient = the_patient;
	}
	
	void Billing::set_doctor(Doctor the_doctor)
	{
		doctor = the_doctor;
	}
	
	void Billing::set_bill(double the_bill)
	{
		bill = the_bill;
	}
	
	Patient Billing::get_patient()
	{
		return patient;
	}
	
	Doctor Billing::get_doctor()
	{
		return doctor;
	}
	
	double Billing::get_bill()
	{
		return bill;
	}
	
}
