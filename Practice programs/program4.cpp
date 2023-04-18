#include <iostream>
#include <cstring>

using namespace std;

string lookupName(string target, string names[], string phnum[]);

int main()
{
	
	
	string names[] = {"Michael Myers",
	"Ash Williams",
	"Jack Torrance",
	"Freddy Krueger"};
	
	string phoneNumbers[] = {"333-8000","333-2323",
	"333-6150","339-7970"};
	
	string targetName, targetPhone;
	char c;
 
	do
	{
		cout << "Enter a name to find the "
		<< "corresponding phone number."
		<< endl;
		
		getline(cin, targetName);
		
		targetPhone = lookupName(targetName,
		names, phoneNumbers);
		
		if (targetPhone.length() > 0)
			cout << "The number is: "
			<< targetPhone << endl;
		else
			cout << "Name not found. "
			<< endl;
			
		cout << "Look up another name? (y/n)"
		<< endl; 
		
		cin >> c;
		
		cin.ignore();
		
	} while (c == 'y');
	
	
	return 0;
}

string lookupName(string target, string names[], string phnum[])
{
	for(int i = 0; i < 4; i++)
	{
		if(target == names[i])
		{
			return phnum[i];
		}
	}
}
