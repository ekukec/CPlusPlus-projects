#include <iostream>
using namespace std;


double read_filter();


int main()
{
	double result;
	
	result = read_filter();
	
	cout << result << endl;
	
	return 0;
}


double read_filter()
{
	double value;
	
	cout << "Enter a double value: ";
	cin >> value;
	
	if(value >= 0)
	{
		return value;
	}
	else
	{
		return 0;
	}
	
}
