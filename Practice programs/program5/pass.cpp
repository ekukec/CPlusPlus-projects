#include <iostream>
#include <string>
#include <ctype.h>
#include "pass.h"

using namespace std;

namespace 
{
	bool isValid();
	
	string password;
}

namespace Authenticate
{
	void inputPassword()
	{
		do
		{
			cout << "Enter your password (at least 8 characters " <<
			"and at least one nonletter)" << endl;
			cin >> password;
		} while (!isValid());
	}
	
	string getPassword()
	{
		return password;
	}
}

namespace 
{	
	bool isValid()
	{
		bool non_let = false;
		bool big = false;
		
		cout << password.length() << endl;
		
		for(int i = 0; i < password.length(); i++)
		{
			if(isalpha(password[i]))
			{
				//cout << password[i] << " letter" << endl;
			}
			else
			{
				non_let = true;
				//cout << password[i] << " not a letter" << endl;
			}
		}
		if(password.length() >= 8)
		{
			big = true;
		}
		
		if(big && non_let)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

