#include <iostream>
#include <string>
#include "person.h"
using namespace std;
namespace employeessavitch
{
	Person::Person() : name("No name")
	{
		
	}
	
	Person::Person(string the_name) : name(the_name)
	{
		
	}
	
	Person::Person(const Person& object) : name(object.name)
	{
		
	}
	
	string Person::get_name() const
	{
		return name;
	}
	
	Person& Person::operator = (const Person& rt_side)
	{
		name = rt_side.name;
	}
	
	istream& operator >>(istream& in_stream, Person& object)
	{
		in_stream >> object.name;
		return in_stream;
	}
	
	ostream& operator <<(ostream& out_stream, const Person& object)
	{
		out_stream << object.name;
		return out_stream;
	}
}
