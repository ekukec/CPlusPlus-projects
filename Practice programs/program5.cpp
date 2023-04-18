#include <iostream>
#include <string>
using namespace std;


bool palin(string test, int first, int last);


int main()
{
	string name = "palinilap";
	
	//cout << name.length() << endl;
	
	if(palin(name, 0, name.length() - 1))
		cout << "yes" << endl;
	else
		cout << "njet" << endl;
	
	return 0;
}


bool palin(string test, int first, int last)
{
	//cout << "comparing " << test[first] << " with " << test[last] << endl;
	if(test[first] == test[last] && first < last)
	{
		//cout << "comparing " << test[first] << " with " << test[last] << endl;
		return palin(test, first + 1, last - 1);
	}
	else if(test[first] == test[last] && first == last)
	{
		return true;
	}
	else
	{
		return false;
	}
}
