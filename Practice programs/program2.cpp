#include <iostream>
#include <map>
#include <cstdlib>
#include <algorithm>
using namespace std;


int main()
{
	map <int, int> histogram;
	map <int, int> :: iterator p;
	int value = 0;
	bool exists;
	
	cin >> value;
	while(value != -1)
	{
		exists = false;
		for(p = histogram.begin(); p != histogram.end() && exists == false; p++)
		{
			if(p->first == value)
			{
				p->second = p->second + 1;
				exists = true;
			}
		}
		if(exists == false)
		{
			histogram.insert(pair<int, int>(value, 1));
		}
		cin >> value;
	}
	
	
	for(p = histogram.begin(); p != histogram.end(); p++)
	{
		cout << "Value " << p->first << " entered " << p->second << " times" << endl;
	}
	
	return 0;
}
