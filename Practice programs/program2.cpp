#include <iostream>
#include <string>

using namespace std;


int main()
{
	string nat, name, age, title, charr;
	int where = 0, where2 = 0;
	
	cout << "Enter name, age and title separated by a space" << endl;
	
	getline(cin, nat);
	
	
	
	for(int i = 0; i < 2; i++)
	{
		where = nat.find(' ', where + 1);
		
		if(i == 0)
		{
			where2 = where;
			name = nat.substr(0, where);
		}
		else
		{
			age = nat.substr(where2 + 1, where - where2);
			title = nat.substr(where + 1, nat.length() - where);
		}
	}
	
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "Title: " << title << endl;
	
	return 0;
}
