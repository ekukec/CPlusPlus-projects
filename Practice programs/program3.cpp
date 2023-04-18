#include <iostream>
#include <string>

using namespace std;


int main()
{
	string flname;
	int where;
	char again;
	
	do
	{	
		cout << "Enter first name and last name separated by a space" << endl;
		
		getline(cin, flname);
		
		
		where = flname.find(' ');
		
		cout << flname[0] << "." << flname[where + 1] << "." << endl;
		
		
		cout << "Again?(Y/N): ";
		cin >> again;
		cin.ignore();
		
	}while(again == 'y' || again == 'Y');
		
	
	return 0;
}
