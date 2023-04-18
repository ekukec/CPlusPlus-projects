#include <iostream>
#include <string>
#include "user.h"

using namespace std;

namespace 
{
	bool isValid();
	
	string username;
}

namespace Authenticate
{	
	void inputUserName()
	{
		do
		{
			cout << "Enter your username (8 letters only)" << endl;
			cin >> username;
		} while (!isValid());
	}
	
	string getUserName()
	{
		return username;
	}
}

namespace 
{	
	bool isValid()
	{
		if(username.length() != 8)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
}

