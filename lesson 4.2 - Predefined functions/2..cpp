#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main()
{
	double x, y, z, f1, f2, f3, f4, f5, f6;
	
	cout << "Enter x: ";
	cin >> x;
	cout << "Enter y: ";
	cin >> y;
	cout << "Enter z: ";
	cin >> z;
	
	
	
	f1 = sqrt((x + y));
	
	f2 = pow(x, (y + 7));
	
	f3 = f1 / z;
	
	f4 = (-y + sqrt(pow(y, 2) - 4 * x * z)) / (2 * x);
	
	f5 = fabs(x - y);
	
	
	
	cout << "Formula 1: " << f1 << endl; 
	cout << "Formula 2: " << f2 << endl; 
	cout << "Formula 3: " << f3 << endl; 
	cout << "Formula 4: " << f4 << endl; 
	cout << "Formula 5: " << f5 << endl; 
	
	return 0;
}
