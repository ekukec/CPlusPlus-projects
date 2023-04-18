#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> split(string target, string delimiter);


int main()
{
	split("do re mi fa so la ti do", " ");
	
	//split("10,20,30", ",");
	
	
	return 0;
}

vector<string> split(string target, string delimiter)
{
	int how_many_vecs = 1;
	int x = 0;
	
	for(int i; i < target.length(); i++)
	{
		if(target[i] == delimiter[0])
		{
			how_many_vecs++;
		}
	}
	
	//cout << "check" << endl;
	
	vector<string> splitted(how_many_vecs);
	
	//cout << how_many_vecs << endl;
	//cout << target.length() << endl;
	
	for(int i = 0; i < target.length(); i++)
	{
		//cout << "check1" << endl;
		if(target[i] != delimiter[0])
		{
			//cout << "check2" << endl;
			splitted[x] = splitted[x] + target[i];
			//cout << "Splitted " << x << " = " << splitted[x] << " + " << target[i] << endl;
		}
		else
		{
			//cout << "check3" << endl;
			x++;
		}
	}
	
	//cout << splitted.size() << endl;
	
	for(int i = 0; i < splitted.size(); i++)
	{
		cout << splitted[i] << endl;
	}
}
