#include <iostream>
#include <string>

using namespace std;

void lower(string& name);

void make_name(string& name);


int main()
{
	string first, last, together;
	
	cout << "Enter first name: ";
	//getline(cin, first);
	cin >> first;
	lower(first);
	cout << first << endl;
	
	cout << "Enter last name: ";
	//getline(cin, last);
	cin >> last;
	lower(last);
	cout << last << endl;
	
	make_name(first);
	make_name(last);
	
	together = first + " " + last;
	
	cout << together << endl;
	
	return 0;
}

void lower(string& name)
{
	for(int i = 0; i < name.length(); i++)
	{
		name[i] = tolower(name[i]);
	}
}

void make_name(string& name)
{
	string vowel("aeiou");
	bool wow = false;
	
	for(int i = 0; i < 5; i++)
	{
		if(name[0] == vowel[i])
		{
			wow = true;
		}
	}
	
	if(wow == true)
	{
		name += "way";
		name[0] = toupper(name[0]);
	}
	else
	{
		name = name + name[0] + "ay";
		for(int j = 0; j < name.length(); j++)
		{
			name[j] = name[j + 1];
		}
		name[0] = toupper(name[0]);
	}
}
