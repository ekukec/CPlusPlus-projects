#include <iostream>
#include <fstream>
#include <set>
#include <algorithm>
#include <string>

using namespace std;

ifstream in;
ofstream out;

int main()
{
	char next;
	string name;
	set<string> database;
	
	in.open("invitations.dat");
	out.open("set.dat");
	
	while(in.get(next))
	{
		if(next == '\n')
		{
			database.insert(name);
			name.clear();
		}
		else
		{
			name = name + next;
		}
	}
	database.insert(name);
	name.clear();
	
	set<string> :: iterator p;
	
	for(p = database.begin(); p != database.end(); p++)
	{
		out << *p << endl;
	}
	
	out.close();
	in.close();
	
	
	return 0;
}
