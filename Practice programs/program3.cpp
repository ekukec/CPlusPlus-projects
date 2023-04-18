#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
using namespace std;



int main()
{
	stack <char> word;
	string value;
	
	cout << "Enter string: " << endl;
	cin >> value;
	
	for(int i = 0; i < value.size(); i++)
	{
		word.push(value[i]);
	}
	
	cout << "Word reversed: ";
	
	while(!word.empty())
	{
		cout << word.top();
		word.pop();
	}
	
	return 0;
}
