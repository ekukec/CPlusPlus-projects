#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;

class Person
{
	public:
		Person();
		Person(string the_name);
		Person(const Person& object);
		string get_name() const;
		Person& operator = (const Person& rt_side);
		friend istream& operator >>(istream& in_stream, Person& object);
		friend ostream& operator <<(ostream& out_stream, const Person& object);
		
	private:
		string name;
};


#endif
