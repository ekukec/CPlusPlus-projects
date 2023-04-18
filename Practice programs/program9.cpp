#include <iostream>

using namespace std;


double max(double n1, double n2, double n3);

double max(double n1, double n2);


int main()
{
	double n1, n2, n3;
	
	cout << "Enter number 1: ";
	cin >> n1;
	cout << "Enter number 2: ";
	cin >> n2;
	cout << "Enter number 3: ";
	cin >> n3;
	
	
	cout << "The bigger of the first 2 numbers is: " << max(n1, n2) << endl;
	cout << "The biggest of all 3 numbers is: " << max(n1, n2, n3) << endl;
	
	
	return 0;
}


double max(double n1, double n2, double n3)
{
	double biggest = n1;
	
	
	if(n1 < biggest)
		biggest = n1;
	if(biggest < n2)
		biggest = n2;
	if(biggest < n3)
		biggest = n3;
		
	
	return biggest;
}


double max(double n1, double n2)
{
	if(n1 > n2)
		return n1;
	else
		return n2;
}
