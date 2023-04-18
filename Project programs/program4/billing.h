#ifndef BILLING_H
#define BILLING_H
#include <iostream>
#include <string>
#include "doctor.h"
#include "patient.h"
using namespace std;

namespace employeessavitch
{
	class Billing
	{
		public:
			Billing();
			Billing(Patient the_patient, Doctor the_doctor, double the_bill);
			Billing(const Billing& object);
			void set_patient(Patient the_patient);
			void set_doctor(Doctor the_doctor);
			void set_bill(double the_bill);
			Patient get_patient();
			Doctor get_doctor();
			double get_bill();
			
		private:
			Patient patient;
			Doctor doctor;
			double bill;
	};
}

#endif
