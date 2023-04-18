#include <iostream>
#include "user.h"
#include "pass.h"

using namespace std;
using namespace Authenticate;

int main()
{
	inputUserName();
	inputPassword();
	
	
	cout << "Your username is " << getUserName() <<
	" and your password is: " <<
	getPassword() << endl;
	
	return 0;
}
