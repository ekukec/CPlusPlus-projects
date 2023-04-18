#include <iostream>
using namespace std;


void cheers(int n);


int main()
{
	cheers(3);
	
	
	return 0;
}


void cheers(int n)
{
	for(int i = n; i > 1; i--)
	{
		cout << "Hip "; 
	}
	cout << "Hurray!" << endl;
}
