#include <iostream>
using namespace std;

int main()
{

	for(int i = 1; i <= 10; i++)
	{
		if(i < 5 && i != 2)
 			cout << 'X';
	}
 
	for(int x = 1; x <= 10; x = x + 3)
		cout << 'Y';
	
 
	for(long m = 100; m < 1000; m = m + 100)
		cout << 'Z';
	
	return 0;
}
