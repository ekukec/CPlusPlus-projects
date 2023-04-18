#include <iostream>
using namespace std;

int main()
{
	int n;
	
	cout << "Enter n: ";
	cin >> n;
	
	if(n < 0)
	{
		cout << "N < 0" << endl;
	}
	else if((0 <= n) && (n <= 100))
	{
		cout << "0 <= N <= 100" << endl;
	}
	else
	{
		cout << "N > 100" << endl;
	}
	
	return 0;
}
