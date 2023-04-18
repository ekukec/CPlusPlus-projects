#ifndef PATIENT_H
#define PATIENT_H
#include <iostream>
#include <string>
#include "person.h"
#include "doctor.h"
using namespace std;

namespace employeessavitch
{
	class Patient : public Person
	{
		public:
			Patient();
			Patient(string the_name, Doctor physician);
			Patient(const Patient& object);
			void set_physician(Doctor physician);
			Doctor get_physician() const;
			Patient& operator = (const Patient& rt_side);
			//friend istream& operator >>(istream& in_stream, Person& object);
			//friend ostream& operator <<(ostream& out_stream, const Person& object);
			
		private:
			Doctor prim_physician;
	};
}

#endif
