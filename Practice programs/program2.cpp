#include <iostream>
#include <string>
#include <exception>
using namespace std;



int main()
{
	string s = "hello";
	
	try
	{
		s.at(5);
		cout << "No exception thrown." << endl;
	}
	catch (exception& e)
	{
		cout << "Exception caught: " <<
		e.what() << endl;
	}
	
	return 0;
}
